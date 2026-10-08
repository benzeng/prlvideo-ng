
undefined4 FUN_100db2b60(long *param_1,int param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x28))();
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  param_1[4] = -1;
  *(int *)(param_1 + 1) = param_2;
  uVar1 = 0xffffffff;
  if (param_2 != -1) {
    (**(code **)(*param_1 + 200))(param_1);
    (**(code **)(*param_1 + 0x90))(param_1,1);
    uVar1 = (undefined4)param_1[1];
  }
  return uVar1;
}

