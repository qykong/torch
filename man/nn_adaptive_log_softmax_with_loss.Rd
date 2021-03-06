% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/nn_adaptive.R
\name{nn_adaptive_log_softmax_with_loss}
\alias{nn_adaptive_log_softmax_with_loss}
\title{AdaptiveLogSoftmaxWithLoss module}
\usage{
nn_adaptive_log_softmax_with_loss(...)
}
\arguments{
\item{in_features}{(int): Number of features in the input tensor
n_classes (int): Number of classes in the dataset}

\item{cutoffs}{(Sequence): Cutoffs used to assign targets to their buckets}

\item{div_value}{(float, optional): value used as an exponent to compute sizes
of the clusters. Default: 4.0}

\item{head_bias}{(bool, optional): If \code{True}, adds a bias term to the 'head' of the
adaptive softmax. Default: \code{False}}
}
\value{
\code{NamedTuple} with \code{output} and \code{loss} fields:
\itemize{
\item \strong{output} is a Tensor of size \code{N} containing computed target
log probabilities for each example
\item \strong{loss} is a Scalar representing the computed negative
log likelihood loss
}
}
\description{
Efficient softmax approximation as described in
\href{https://arxiv.org/abs/1609.04309}{Efficient softmax approximation for GPUs by Edouard Grave, Armand Joulin, Moustapha Cissé, David Grangier, and Hervé Jégou}
}
\details{
Adaptive softmax is an approximate strategy for training models with large
output spaces. It is most effective when the label distribution is highly
imbalanced, for example in natural language modelling, where the word
frequency distribution approximately follows the Zipf's law.

Adaptive softmax partitions the labels into several clusters, according to
their frequency. These clusters may contain different number of targets
each.

Additionally, clusters containing less frequent labels assign lower
dimensional embeddings to those labels, which speeds up the computation.
For each minibatch, only clusters for which at least one target is
present are evaluated.

The idea is that the clusters which are accessed frequently
(like the first one, containing most frequent labels), should also be cheap
to compute -- that is, contain a small number of assigned labels.
We highly recommend taking a look at the original paper for more details.
\itemize{
\item \code{cutoffs} should be an ordered Sequence of integers sorted
in the increasing order.
It controls number of clusters and the partitioning of targets into
clusters. For example setting \code{cutoffs = c(10, 100, 1000)}
means that first \code{10} targets will be assigned
to the 'head' of the adaptive softmax, targets \verb{11, 12, ..., 100} will be
assigned to the first cluster, and targets \verb{101, 102, ..., 1000} will be
assigned to the second cluster, while targets
\verb{1001, 1002, ..., n_classes - 1} will be assigned
to the last, third cluster.
\item \code{div_value} is used to compute the size of each additional cluster,
which is given as
\eqn{\left\lfloor\frac{\texttt{in\_features}}{\texttt{div\_value}^{idx}}\right\rfloor},
where \eqn{idx} is the cluster index (with clusters
for less frequent words having larger indices,
and indices starting from \eqn{1}).
\item \code{head_bias} if set to True, adds a bias term to the 'head' of the
adaptive softmax. See paper for details. Set to False in the official
implementation.
}
}
\note{
This module returns a \code{NamedTuple} with \code{output}
and \code{loss} fields. See further documentation for details.

To compute log-probabilities for all classes, the \code{log_prob}
method can be used.
}
\section{Warning}{

Labels passed as inputs to this module should be sorted according to
their frequency. This means that the most frequent label should be
represented by the index \code{0}, and the least frequent
label should be represented by the index \code{n_classes - 1}.
}

\section{Shape}{

\itemize{
\item input: \eqn{(N, \texttt{in\_features})}
\item target: \eqn{(N)} where each value satisfies \eqn{0 <= \texttt{target[i]} <= \texttt{n\_classes}}
\item output1: \eqn{(N)}
\item output2: \code{Scalar}
}
}

