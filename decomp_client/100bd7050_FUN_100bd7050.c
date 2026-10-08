
ulong FUN_100bd7050(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x70);
  if (*(uint *)(param_1 + 0x70) < param_2) {
    lVar1 = *(long *)(param_1 + 0x68);
    do {
      *(undefined4 *)(param_1 + 0x28) = 3;
      uVar2 = FUN_100c588a0(*(undefined8 *)(param_1 + 0x10),uVar3 + lVar1,param_2 - (int)uVar3);
      if ((int)uVar2 < 1) {
        return (ulong)uVar2;
      }
      *(undefined4 *)(param_1 + 0x28) = 1;
      uVar2 = *(int *)(param_1 + 0x70) + uVar2;
      uVar3 = (ulong)uVar2;
      *(uint *)(param_1 + 0x70) = uVar2;
    } while (uVar2 < param_2);
  }
  else {
    uVar3 = (ulong)param_2;
  }
  return uVar3;
}

