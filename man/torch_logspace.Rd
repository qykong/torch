% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/gen-namespace-docs.R,
%   R/gen-namespace-examples.R
\name{torch_logspace}
\alias{torch_logspace}
\title{Logspace}
\arguments{
\item{start}{(float) the starting value for the set of points}

\item{end}{(float) the ending value for the set of points}

\item{steps}{(int) number of points to sample between \code{start}        and \code{end}. Default: \code{100}.}

\item{base}{(float) base of the logarithm function. Default: \code{10.0}.}

\item{out}{(Tensor, optional) the output tensor.}

\item{dtype}{(\code{torch.dtype}, optional) the desired data type of returned tensor.        Default: if \code{None}, uses a global default (see \code{\link{torch_set_default_tensor_type}}).}

\item{layout}{(\code{torch.layout}, optional) the desired layout of returned Tensor.        Default: \code{torch_strided}.}

\item{device}{(\code{torch.device}, optional) the desired device of returned tensor.        Default: if \code{None}, uses the current device for the default tensor type        (see \code{\link{torch_set_default_tensor_type}}). \code{device} will be the CPU        for CPU tensor types and the current CUDA device for CUDA tensor types.}

\item{requires_grad}{(bool, optional) If autograd should record operations on the        returned tensor. Default: \code{False}.}
}
\description{
Logspace
}
\section{logspace(start, end, steps=100, base=10.0, out=None, dtype=None, layout=torch.strided, device=None, requires_grad=False) -> Tensor }{


Returns a one-dimensional tensor of \code{steps} points
logarithmically spaced with base \code{base} between
\eqn{{\text{base}}^{\text{start}}} and \eqn{{\text{base}}^{\text{end}}}.

The output tensor is 1-D of size \code{steps}.
}

\examples{

torch_logspace(start=-10, end=10, steps=5)
torch_logspace(start=0.1, end=1.0, steps=5)
torch_logspace(start=0.1, end=1.0, steps=1)
torch_logspace(start=2, end=2, steps=1, base=2)
}
