% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/gen-namespace-docs.R,
%   R/gen-namespace-examples.R
\name{torch_zeros}
\alias{torch_zeros}
\title{Zeros}
\arguments{
\item{size}{(int...) a sequence of integers defining the shape of the output tensor.        Can be a variable number of arguments or a collection like a list or tuple.}

\item{out}{(Tensor, optional) the output tensor.}

\item{dtype}{(\code{torch.dtype}, optional) the desired data type of returned tensor.        Default: if \code{None}, uses a global default (see \code{\link{torch_set_default_tensor_type}}).}

\item{layout}{(\code{torch.layout}, optional) the desired layout of returned Tensor.        Default: \code{torch_strided}.}

\item{device}{(\code{torch.device}, optional) the desired device of returned tensor.        Default: if \code{None}, uses the current device for the default tensor type        (see \code{\link{torch_set_default_tensor_type}}). \code{device} will be the CPU        for CPU tensor types and the current CUDA device for CUDA tensor types.}

\item{requires_grad}{(bool, optional) If autograd should record operations on the        returned tensor. Default: \code{False}.}
}
\description{
Zeros
}
\section{zeros(*size, out=None, dtype=None, layout=torch.strided, device=None, requires_grad=False) -> Tensor }{


Returns a tensor filled with the scalar value \code{0}, with the shape defined
by the variable argument \code{size}.
}

\examples{

torch_zeros(c(2, 3))
torch_zeros(c(5))
}
