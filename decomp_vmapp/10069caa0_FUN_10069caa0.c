
bool FUN_10069caa0(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(int *)((long)param_1 + 0x14) == -1) {
    bVar4 = false;
  }
  else {
    uVar1 = *(uint *)(param_1 + 2);
    param_1 = (long *)*param_1;
    lVar2 = FUN_10069d930(param_1,*(undefined8 *)
                                   (*(long *)(*param_1 + -0x18) + 0x58 + (long)param_1));
    lVar3 = (**(code **)(*param_1 + 0x158))(param_1);
    bVar4 = (ulong)uVar1 < (ulong)(lVar2 - lVar3);
  }
  return bVar4;
}

