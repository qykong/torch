% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/gen-namespace-docs.R,
%   R/gen-namespace-examples.R
\name{torch_asin}
\alias{torch_asin}
\title{Asin}
\arguments{
\item{input}{(Tensor) the input tensor.}

\item{out}{(Tensor, optional) the output tensor.}
}
\description{
Asin
}
\section{asin(input, out=None) -> Tensor }{


Returns a new tensor with the arcsine  of the elements of \code{input}.

\deqn{
    \text{out}_{i} = \sin^{-1}(\text{input}_{i})
}
}

\examples{

a = torch_randn(c(4))
a
torch_asin(a)
}
