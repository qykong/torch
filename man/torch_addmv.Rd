% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/gen-namespace-docs.R,
%   R/gen-namespace-examples.R
\name{torch_addmv}
\alias{torch_addmv}
\title{Addmv}
\arguments{
\item{input}{(Tensor) vector to be added}

\item{mat}{(Tensor) matrix to be multiplied}

\item{vec}{(Tensor) vector to be multiplied}

\item{beta}{(Number, optional) multiplier for \code{input} (\eqn{\beta})}

\item{alpha}{(Number, optional) multiplier for \eqn{mat @ vec} (\eqn{\alpha})}

\item{out}{(Tensor, optional) the output tensor.}
}
\description{
Addmv
}
\section{addmv(input, mat, vec, *, beta=1, alpha=1, out=None) -> Tensor }{


Performs a matrix-vector product of the matrix \code{mat} and
the vector \code{vec}.
The vector \code{input} is added to the final result.

If \code{mat} is a \eqn{(n \times m)} tensor, \code{vec} is a 1-D tensor of
size \code{m}, then \code{input} must be
broadcastable  with a 1-D tensor of size \code{n} and
\code{out} will be 1-D tensor of size \code{n}.

\code{alpha} and \code{beta} are scaling factors on matrix-vector product between
\code{mat} and \code{vec} and the added tensor \code{input} respectively.

\deqn{
    \text{out} = \beta\ \text{input} + \alpha\ (\text{mat} \mathbin{@} \text{vec})
}
For inputs of type \code{FloatTensor} or \code{DoubleTensor}, arguments \code{beta} and
\code{alpha} must be real numbers, otherwise they should be integers
}

\examples{

M = torch_randn(c(2))
mat = torch_randn(c(2, 3))
vec = torch_randn(c(3))
torch_addmv(M, mat, vec)
}
