
long * FUN_1002a6180(long *param_1,long param_2,uint param_3,int param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 0;
  if ((param_3 < *(uint *)(param_2 + 0x40)) &&
     ((param_4 == 0 || (lVar3 = 0, (*(byte *)(param_2 + 0x54 + (ulong)param_3 * 0x20) & 1) != 0))))
  {
    lVar3 = (ulong)param_3 * 0x20;
    plVar1 = (long *)(param_2 + 0x60 + lVar3);
    lVar2 = *(long *)(param_2 + 0x60 + lVar3);
    if (lVar2 == 0) {
      lVar2 = FUN_1002a5d20(param_2 + 0x48 + lVar3,*(undefined8 *)(param_2 + 0x30),
                            *(int *)(param_2 + 0x58 + lVar3) + 0x10);
      *plVar1 = lVar2;
      lVar3 = 0;
      if (lVar2 == 0) goto LAB_1002a61e6;
    }
    *plVar1 = 0;
    lVar3 = lVar2;
  }
LAB_1002a61e6:
  *param_1 = lVar3;
  return param_1;
}

