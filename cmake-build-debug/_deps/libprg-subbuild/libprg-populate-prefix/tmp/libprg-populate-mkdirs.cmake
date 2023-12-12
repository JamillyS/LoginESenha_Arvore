# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/jamilly/Faculdade/Prog2/LoginESenha_Arvore/cmake-build-debug/_deps/libprg-src"
  "/home/jamilly/Faculdade/Prog2/LoginESenha_Arvore/cmake-build-debug/_deps/libprg-build"
  "/home/jamilly/Faculdade/Prog2/LoginESenha_Arvore/cmake-build-debug/_deps/libprg-subbuild/libprg-populate-prefix"
  "/home/jamilly/Faculdade/Prog2/LoginESenha_Arvore/cmake-build-debug/_deps/libprg-subbuild/libprg-populate-prefix/tmp"
  "/home/jamilly/Faculdade/Prog2/LoginESenha_Arvore/cmake-build-debug/_deps/libprg-subbuild/libprg-populate-prefix/src/libprg-populate-stamp"
  "/home/jamilly/Faculdade/Prog2/LoginESenha_Arvore/cmake-build-debug/_deps/libprg-subbuild/libprg-populate-prefix/src"
  "/home/jamilly/Faculdade/Prog2/LoginESenha_Arvore/cmake-build-debug/_deps/libprg-subbuild/libprg-populate-prefix/src/libprg-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/jamilly/Faculdade/Prog2/LoginESenha_Arvore/cmake-build-debug/_deps/libprg-subbuild/libprg-populate-prefix/src/libprg-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/jamilly/Faculdade/Prog2/LoginESenha_Arvore/cmake-build-debug/_deps/libprg-subbuild/libprg-populate-prefix/src/libprg-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
