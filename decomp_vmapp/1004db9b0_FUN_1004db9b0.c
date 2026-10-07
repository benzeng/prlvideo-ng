
void FUN_1004db9b0(long *param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x60))();
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 5) = param_2;
    *(undefined1 *)((long)param_1 + 0x29) = param_2;
  }
  return;
}

