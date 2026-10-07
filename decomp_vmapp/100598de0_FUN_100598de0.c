
undefined8 FUN_100598de0(long *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = (int)param_1[0xc] - 1;
  lVar2 = (**(code **)(**(long **)(*(long *)(param_1[8] + ((ulong)uVar1 + param_1[0xb] >> 9) * 8) +
                                  ((ulong)((int)param_1[0xb] + uVar1) & 0x1ff) * 8) + 0x140))();
  if (lVar2 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x18))(param_1);
    uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
    uVar3 = FUN_1006a7760(lVar2,param_2,uVar3,uVar4);
    return uVar3;
  }
  return 0x80000014;
}

