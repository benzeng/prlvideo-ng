
undefined8 FUN_100c63310(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = FUN_100c63000();
  iVar2 = *(int *)(lVar1 + 0x254);
  uVar3 = 0;
  if (iVar2 != *(int *)(lVar1 + 0x250)) {
    iVar2 = (iVar2 + 1) - (iVar2 + 1 + ((uint)(iVar2 + 1 >> 0x1f) >> 0x1c) & 0xfffffff0);
    lVar4 = (long)iVar2;
    uVar3 = *(undefined8 *)(lVar1 + 0x50 + lVar4 * 8);
    *(int *)(lVar1 + 0x254) = iVar2;
    *(undefined8 *)(lVar1 + 0x50 + lVar4 * 8) = 0;
    if ((*(long *)(lVar1 + 0xd0 + lVar4 * 8) != 0) &&
       ((*(byte *)(lVar1 + 0x150 + lVar4 * 4) & 1) != 0)) {
      FUN_100bf3910();
      *(undefined8 *)(lVar1 + 0xd0 + lVar4 * 8) = 0;
    }
    *(undefined4 *)(lVar1 + 0x150 + lVar4 * 4) = 0;
  }
  return uVar3;
}

