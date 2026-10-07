
long FUN_1002a6120(long param_1,uint param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  if ((param_2 < *(uint *)(param_1 + 0x40)) &&
     ((param_3 == 0 || (lVar1 = 0, (*(byte *)(param_1 + 0x54 + (ulong)param_2 * 0x20) & 1) != 0))))
  {
    lVar2 = (ulong)param_2 * 0x20;
    lVar1 = *(long *)(param_1 + 0x60 + lVar2);
    if (lVar1 == 0) {
      lVar1 = FUN_1002a5d20(param_1 + 0x48 + lVar2,*(undefined8 *)(param_1 + 0x30),
                            *(int *)(param_1 + 0x58 + lVar2) + 0x10);
      *(long *)(param_1 + 0x60 + lVar2) = lVar1;
    }
  }
  return lVar1;
}

