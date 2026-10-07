
undefined8 FUN_100888360(long *param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_100887e00();
  iVar3 = *(int *)(lVar2 + 0x254);
  uVar5 = 0;
  if (iVar3 != *(int *)(lVar2 + 0x250)) {
    iVar3 = (iVar3 + 1) - (iVar3 + 1 + ((uint)(iVar3 + 1 >> 0x1f) >> 0x1c) & 0xfffffff0);
    lVar4 = (long)iVar3;
    uVar5 = *(undefined8 *)(lVar2 + 0x50 + lVar4 * 8);
    *(int *)(lVar2 + 0x254) = iVar3;
    *(undefined8 *)(lVar2 + 0x50 + lVar4 * 8) = 0;
    if ((param_1 != (long *)0x0) && (param_2 != (undefined4 *)0x0)) {
      lVar1 = *(long *)(lVar2 + 400 + lVar4 * 8);
      if (lVar1 == 0) {
        *param_1 = (long)"NA";
        *param_2 = 0;
      }
      else {
        *param_1 = lVar1;
        *param_2 = *(undefined4 *)(lVar2 + 0x210 + lVar4 * 4);
      }
    }
    if ((*(long *)(lVar2 + 0xd0 + lVar4 * 8) != 0) &&
       ((*(byte *)(lVar2 + 0x150 + lVar4 * 4) & 1) != 0)) {
      FUN_10081e1a0();
      *(undefined8 *)(lVar2 + 0xd0 + lVar4 * 8) = 0;
    }
    *(undefined4 *)(lVar2 + 0x150 + lVar4 * 4) = 0;
  }
  return uVar5;
}

