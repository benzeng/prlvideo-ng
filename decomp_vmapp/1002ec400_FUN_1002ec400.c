
bool FUN_1002ec400(long *param_1,undefined4 *param_2)

{
  int iVar1;
  
  *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 2) = *param_2;
  *(undefined4 *)((long)param_1 + 0x1c) = 1;
  iVar1 = FUN_100252d90(*param_1 + 0x40,param_1 + 1,param_2);
  *(bool *)(param_1 + 3) = iVar1 == 0;
  return iVar1 == 0;
}

