/* -*- Mode: C; tab-width: 8; c-basic-offset: 2; indent-tabs-mode: nil; -*- */

#include "rrutil.h"

int main(int argc, char* argv[]) {
  struct sysinfo* info;

  ALLOCATE_GUARD(info, 0);
  test_assert(0 == sysinfo(info));
  test_assert(info->mem_unit > 0);
  test_assert(info->procs > 0);
  VERIFY_GUARD(info);

  atomic_puts("EXIT-SUCCESS");
  return 0;
}