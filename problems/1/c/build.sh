#!/bin/bash

cur_dir=$(cd `dirname $0`; pwd)
src_dir=${cur_dir}/src
out_dir=${cur_dir}/output

mkdir -p ${out_dir} || echo -e "${out_dir} has existed."

gcc -g -O2 -I${src_dir}/ ${src_dir}/*.c -o ${out_dir}/main
