
void FUN_10070d670(long *param_1)

{
  int iVar1;
  
  *param_1 = (long)&PTR_FUN_100bce120;
  iVar1 = FUN_10070d8d0();
  while (iVar1 != 0) {
    iVar1 = 1;
    if (*(int *)((long)param_1 + 0xc) != 0) {
      FUN_1008e3970("","AbstractFile",0,"AIO Wait/Submit recursion detected!");
      iVar1 = *(int *)((long)param_1 + 0xc) + 1;
    }
    *(int *)((long)param_1 + 0xc) = iVar1;
    (**(code **)(*param_1 + 0x40))(param_1,0xffffffff);
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + -1;
    iVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  }
  if ((void *)param_1[2] != (void *)0x0) {
    _free((void *)param_1[2]);
    param_1[2] = 0;
  }
  return;
}

