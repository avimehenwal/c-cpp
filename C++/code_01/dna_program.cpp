/*
 * ============================================================================
 *
 * Philipp Schubert
 *
 *    Copyright (C) 2017 - 2019
 *    Software Engineering Group
 *    Heinz Nixdorf Institute
 *    Paderborn University
 *    philipp.schubert@upb.de
 *
 * ============================================================================
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
  const string dna = "AGTcccaaGTCAGACAATGAAtataAATCG";
  // this range-for loop iterates the string 'dna'
  for (char base : dna) {
    // you can use the variable 'base' inside this loop
  }
  return 0;
}
