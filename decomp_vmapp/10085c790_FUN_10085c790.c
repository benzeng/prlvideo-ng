
/* WARNING: Removing unreachable block (ram,0x00010085c7fd) */

void FUN_10085c790(long *param_1)

{
  if (*(code **)(*param_1 + 0xe8) == (code *)0x0) {
    FUN_10085f620();
  }
  else {
    (**(code **)(*param_1 + 0xe8))();
  }
  return;
}

