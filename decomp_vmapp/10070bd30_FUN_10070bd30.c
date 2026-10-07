
void FUN_10070bd30(long *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &PTR_FUN_100bce000;
  *param_1 = (long)&PTR_FUN_100bce000;
  while( true ) {
    iVar2 = (*(code *)ppuVar3[4])(param_1);
    if (iVar2 == 0) break;
    iVar2 = 1;
    if (*(int *)((long)param_1 + 0xc) != 0) {
      FUN_1008e3970("","AbstractFile",0,"AIO Wait/Submit recursion detected!");
      iVar2 = *(int *)((long)param_1 + 0xc) + 1;
    }
    *(int *)((long)param_1 + 0xc) = iVar2;
    (**(code **)(*param_1 + 0x40))(param_1,0xffffffff);
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + -1;
    ppuVar3 = (undefined **)*param_1;
  }
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    FUN_10070bf30(pvVar1);
    operator_delete(pvVar1);
    param_1[2] = 0;
  }
  return;
}

