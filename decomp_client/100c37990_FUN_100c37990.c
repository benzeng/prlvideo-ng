
/* WARNING: Removing unreachable block (ram,0x000100c379fd) */

void FUN_100c37990(long *param_1)

{
  if (*(code **)(*param_1 + 0xe8) == (code *)0x0) {
    FUN_100c3a820();
  }
  else {
    (**(code **)(*param_1 + 0xe8))();
  }
  return;
}

