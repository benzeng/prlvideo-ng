
char * FUN_10084ee80(long *param_1)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  
  if (((int)param_1[2] == 0) || ((int)param_1[1] != 0)) {
    uVar10 = (int)param_1[1] << 4 | 2;
    uVar7 = 0x4f;
  }
  else {
    uVar10 = 3;
    uVar7 = 0x4d;
  }
  pcVar3 = (char *)FUN_10081ddd0(uVar10,"bn_print.c",uVar7);
  if (pcVar3 == (char *)0x0) {
    FUN_100887ce0(3,0x69,0x41,"bn_print.c",0x52);
  }
  else {
    pcVar4 = pcVar3;
    if ((int)param_1[2] != 0) {
      pcVar4 = pcVar3 + 1;
      *pcVar3 = '-';
    }
    iVar5 = (int)param_1[1];
    if (iVar5 == 0) {
      *pcVar4 = '0';
      pcVar4 = pcVar4 + 1;
      iVar5 = (int)param_1[1];
    }
    if (0 < iVar5) {
      bVar2 = false;
      lVar11 = (long)iVar5;
      do {
        lVar6 = 0x38;
        do {
          uVar8 = *(ulong *)(*param_1 + -8 + lVar11 * 8) >> ((byte)lVar6 & 0x3f);
          uVar9 = uVar8 & 0xff;
          if ((int)uVar9 != 0 || bVar2) {
            *pcVar4 = "0123456789ABCDEF"[uVar9 >> 4];
            pcVar4[1] = "0123456789ABCDEF"[uVar8 & 0xf];
            pcVar4 = pcVar4 + 2;
            bVar2 = true;
          }
          lVar6 = lVar6 + -8;
        } while (-1 < lVar6);
        bVar1 = 1 < lVar11;
        lVar11 = lVar11 + -1;
      } while (bVar1);
    }
    *pcVar4 = '\0';
  }
  return pcVar3;
}

