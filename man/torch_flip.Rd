% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/gen-namespace-docs.R,
%   R/gen-namespace-examples.R
\name{torch_flip}
\alias{torch_flip}
\title{Flip}
\arguments{
\item{input}{(Tensor) the input tensor.}

\item{dims}{(a list or tuple) axis to flip on}
}
\description{
Flip
}
\section{flip(input, dims) -> Tensor }{


Reverse the order of a n-D tensor along given axis in dims.
}

\examples{

x = torch_arange(0, 8)$view(c(2, 2, 2))
x
torch_flip(x, c(0, 1))
}
