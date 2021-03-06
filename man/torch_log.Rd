% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/gen-namespace-docs.R,
%   R/gen-namespace-examples.R
\name{torch_log}
\alias{torch_log}
\title{Log}
\arguments{
\item{input}{(Tensor) the input tensor.}

\item{out}{(Tensor, optional) the output tensor.}
}
\description{
Log
}
\section{log(input, out=None) -> Tensor }{


Returns a new tensor with the natural logarithm of the elements
of \code{input}.

\deqn{
    y_{i} = \log_{e} (x_{i})
}
}

\examples{

a = torch_randn(c(5))
a
torch_log(a)
}
