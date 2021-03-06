% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/gen-namespace-docs.R,
%   R/gen-namespace-examples.R
\name{torch_flatten}
\alias{torch_flatten}
\title{Flatten}
\arguments{
\item{input}{(Tensor) the input tensor.}

\item{start_dim}{(int) the first dim to flatten}

\item{end_dim}{(int) the last dim to flatten}
}
\description{
Flatten
}
\section{flatten(input, start_dim=0, end_dim=-1) -> Tensor }{


Flattens a contiguous range of dims in a tensor.
}

\examples{

t = torch_tensor(matrix(c(1, 2), ncol = 2))
torch_flatten(t)
torch_flatten(t, start_dim=1)
}
