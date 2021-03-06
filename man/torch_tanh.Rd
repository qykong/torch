% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/gen-namespace-docs.R,
%   R/gen-namespace-examples.R
\name{torch_tanh}
\alias{torch_tanh}
\title{Tanh}
\arguments{
\item{input}{(Tensor) the input tensor.}

\item{out}{(Tensor, optional) the output tensor.}
}
\description{
Tanh
}
\section{tanh(input, out=None) -> Tensor }{


Returns a new tensor with the hyperbolic tangent of the elements
of \code{input}.

\deqn{
    \text{out}_{i} = \tanh(\text{input}_{i})
}
}

\examples{

a = torch_randn(c(4))
a
torch_tanh(a)
}
