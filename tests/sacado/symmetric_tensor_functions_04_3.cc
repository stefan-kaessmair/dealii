// ---------------------------------------------------------------------
//
// Copyright (C) 2016 - 2019 by the deal.II authors
//
// This file is part of the deal.II library.
//
// The deal.II library is free software; you can use it, redistribute
// it, and/or modify it under the terms of the GNU Lesser General
// Public License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full text of the license can be found in the file LICENSE at
// the top level of the deal.II distribution.
//
// ---------------------------------------------------------------------


// Test to check that tensor functions both compile and produce the right
// result when differentiated using the various auto-differentiable number
// types: Eigenvalues and eignvectors
//
// AD number type: Sacado Rad

#include "../ad_common_tests/symmetric_tensor_functions_04.h"
#include "../tests.h"

int
main()
{
  initlog();

  deallog.push("Double");
  {
    test_symmetric_tensor<2, double, AD::NumberTypes::sacado_rad>();
    test_symmetric_tensor<3, double, AD::NumberTypes::sacado_rad>();
    deallog << "OK" << std::endl;
  }
  deallog.pop();

  deallog << "OK" << std::endl;
}
