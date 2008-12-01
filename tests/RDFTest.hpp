#ifndef RDFTEST_H
#define RDFTEST_H
#include <cppunit/extensions/HelperMacros.h>
#include "cda_config.h"
#ifdef HAVE_INTTYPES_H
#include <inttypes.h>
#endif

class RDFTest : public CppUnit::TestFixture
{
  CPPUNIT_TEST_SUITE(RDFTest);
  CPPUNIT_TEST(testW3CSuite);
  CPPUNIT_TEST_SUITE_END();

public:
  void setUp();
  void tearDown();
  void testW3CSuite();
};

#endif // RDFTEST_H