
undefined8 FUN_100899c20(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  
  bVar4 = (byte)(1 << (~(byte)param_2 & 7));
  bVar1 = bVar4;
  if (param_3 == 0) {
    bVar1 = 0;
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xf0;
  iVar5 = (int)(((uint)(param_2 >> 0x1f) >> 0x1d) + param_2) >> 3;
  iVar3 = iVar5 + 1;
  if ((*param_1 < iVar3) || (lVar2 = *(long *)(param_1 + 2), lVar2 == 0)) {
    if (param_3 == 0) {
      return 1;
    }
    if (*(long *)(param_1 + 2) == 0) {
      lVar2 = FUN_10081ddd0(iVar3,"a_bitstr.c",0xd0);
    }
    else {
      lVar2 = FUN_10081e040(*(long *)(param_1 + 2),*param_1,iVar3,"a_bitstr.c",0xd3);
    }
    if (lVar2 == 0) {
      FUN_100887ce0(0xd,0xb7,0x41,"a_bitstr.c",0xd5);
      return 0;
    }
    if (0 < iVar3 - *param_1) {
      ___bzero(*param_1 + lVar2);
    }
    *(long *)(param_1 + 2) = lVar2;
    *param_1 = iVar3;
  }
  *(byte *)(lVar2 + iVar5) = *(byte *)(lVar2 + iVar5) & (bVar4 ^ 0xff) | bVar1;
  iVar3 = *param_1;
  if (0 < (long)iVar3) {
    lVar2 = (long)iVar3 + 1;
    do {
      iVar3 = iVar3 + -1;
      if (*(char *)(*(long *)(param_1 + 2) + -2 + lVar2) != '\0') {
        return 1;
      }
      *param_1 = iVar3;
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
  }
  return 1;
}

