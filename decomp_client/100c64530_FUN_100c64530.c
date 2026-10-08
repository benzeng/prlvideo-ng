
undefined8 FUN_100c64530(void)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  lVar3 = FUN_100c63000();
  iVar2 = *(int *)(lVar3 + 0x250);
  iVar4 = *(int *)(lVar3 + 0x254);
  if (iVar4 != iVar2) {
    do {
      lVar5 = (long)iVar2;
      if ((*(byte *)(lVar3 + 0x10 + lVar5 * 4) & 1) != 0) {
        if (iVar4 == iVar2) {
          return 0;
        }
        pbVar1 = (byte *)(lVar3 + 0x10 + lVar5 * 4);
        *pbVar1 = *pbVar1 & 0xfe;
        return 1;
      }
      *(undefined4 *)(lVar3 + 0x10 + lVar5 * 4) = 0;
      *(undefined8 *)(lVar3 + 0x50 + (long)*(int *)(lVar3 + 0x250) * 8) = 0;
      iVar2 = *(int *)(lVar3 + 0x250);
      if ((*(long *)(lVar3 + 0xd0 + (long)iVar2 * 8) != 0) &&
         ((*(byte *)(lVar3 + 0x150 + (long)iVar2 * 4) & 1) != 0)) {
        FUN_100bf3910();
        *(undefined8 *)(lVar3 + 0xd0 + (long)*(int *)(lVar3 + 0x250) * 8) = 0;
        iVar2 = *(int *)(lVar3 + 0x250);
      }
      *(undefined4 *)(lVar3 + 0x150 + (long)iVar2 * 4) = 0;
      *(undefined8 *)(lVar3 + 400 + (long)*(int *)(lVar3 + 0x250) * 8) = 0;
      *(undefined4 *)(lVar3 + 0x210 + (long)*(int *)(lVar3 + 0x250) * 4) = 0xffffffff;
      iVar2 = *(int *)(lVar3 + 0x250) + -1;
      if (*(int *)(lVar3 + 0x250) == 0) {
        iVar2 = 0xf;
      }
      *(int *)(lVar3 + 0x250) = iVar2;
      iVar4 = *(int *)(lVar3 + 0x254);
    } while (iVar4 != iVar2);
  }
  return 0;
}

