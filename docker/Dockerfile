FROM nvidia/cuda:10.1-cudnn7-devel-ubuntu16.04

RUN apt-get update && \
    apt-get install -y apt-transport-https ca-certificates gnupg software-properties-common wget libcurl4-openssl-dev libssl-dev

RUN apt-key adv --keyserver keyserver.ubuntu.com --recv-keys E298A3A825C0D65DFD57CBB651716619E084DAB9 && \
    add-apt-repository 'deb [arch=amd64,i386] https://cran.rstudio.com/bin/linux/ubuntu xenial/' && \
    apt-get update && \
    apt-get install -y r-base
    
RUN apt-add-repository 'deb https://apt.kitware.com/ubuntu/ xenial main' && \
    apt-get update && \
    apt-get install -y --allow-unauthenticated cmake
    
RUN add-apt-repository ppa:ubuntu-toolchain-r/test && \
    apt-get update && \
    apt-get install -y g++-7 && \
    update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-7 60 \
                         --slave /usr/bin/g++ g++ /usr/bin/g++-7  && \
    update-alternatives --config gcc
    

ENV CUDA 10.1    
ADD . torch/