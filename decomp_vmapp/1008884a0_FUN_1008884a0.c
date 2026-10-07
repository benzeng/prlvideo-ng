
undefined8 FUN_1008884a0(long *param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = FUN_100887e00();
  iVar1 = *(int *)(lVar3 + 0x254);
  uVar4 = 0;
  if (iVar1 != *(int *)(lVar3 + 0x250)) {
    lVar5 = (long)(int)((iVar1 + 1) - (iVar1 + 1 + ((uint)(iVar1 + 1 >> 0x1f) >> 0x1c) & 0xfffffff0)
                       );
    uVar4 = *(undefined8 *)(lVar3 + 0x50 + lVar5 * 8);
    if ((param_1 != (long *)0x0) && (param_2 != (undefined4 *)0x0)) {
      lVar2 = *(long *)(lVar3 + 400 + lVar5 * 8);
      if (lVar2 == 0) {
        *param_1 = (long)"NA";
        *param_2 = 0;
      }
      else {
        *param_1 = lVar2;
        *param_2 = *(undefined4 *)(lVar3 + 0x210 + lVar5 * 4);
      }
    }
  }
  return uVar4;
}

