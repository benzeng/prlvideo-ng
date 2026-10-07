
int FUN_10069d550(long *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (*(int *)((long)param_1 + 0x4c) == 1) {
    iVar1 = FUN_10069d930(param_1,*(undefined8 *)
                                   (*(long *)(*param_1 + -0x18) + 0x58 + (long)param_1));
    iVar2 = (**(code **)(*param_1 + 0x158))(param_1);
    iVar1 = (iVar1 - iVar2) - (int)param_1[9];
  }
  return iVar1;
}

