% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/gen-namespace-docs.R,
%   R/gen-namespace-examples.R
\name{torch_chunk}
\alias{torch_chunk}
\title{Chunk}
\arguments{
\item{input}{(Tensor) the tensor to split}

\item{chunks}{(int) number of chunks to return}

\item{dim}{(int) dimension along which to split the tensor}
}
\description{
Chunk
}
\section{chunk(input, chunks, dim=0) -> List of Tensors }{


Splits a tensor into a specific number of chunks. Each chunk is a view of
the input tensor.

Last chunk will be smaller if the tensor size along the given dimension
\code{dim} is not divisible by \code{chunks}.
}

\examples{


}
