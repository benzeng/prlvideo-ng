
undefined8 FUN_1008aa160(undefined8 param_1,int *param_2,char *param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  char *pcVar15;
  uint uVar16;
  int local_3c;
  
  param_2[1] = 2;
  iVar5 = FUN_10087d950(param_1,param_3,param_4);
  if (0 < iVar5) {
    local_3c = 0;
    bVar3 = true;
    lVar11 = 0;
    iVar14 = 0;
    do {
      if (param_3[(long)iVar5 + -1] == '\n') {
        lVar8 = (long)iVar5 + -1;
        param_3[lVar8] = '\0';
        iVar5 = (int)lVar8;
        if (iVar5 == 0) break;
      }
      if (param_3[(long)iVar5 + -1] == '\r') {
        lVar8 = (long)iVar5 + -1;
        param_3[lVar8] = '\0';
        iVar5 = (int)lVar8;
        if (iVar5 == 0) break;
      }
      cVar1 = param_3[(long)iVar5 + -1];
      if (0 < iVar5) {
        lVar8 = 0;
        do {
          if ((9 < (byte)(param_3[lVar8] - 0x30U)) &&
             ((bVar4 = param_3[lVar8] + 0xbf, 0x25 < bVar4 ||
              ((0x3f0000003fU >> ((ulong)bVar4 & 0x3f) & 1) == 0)))) {
            iVar5 = (int)lVar8;
            break;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar5);
      }
      param_3[iVar5] = '\0';
      if (iVar5 < 2) break;
      pcVar15 = param_3;
      if (((bVar3) && (*param_3 == '0')) && (param_3[1] == '0')) {
        pcVar15 = param_3 + 2;
        iVar5 = iVar5 + -2;
      }
      uVar16 = iVar5 - (uint)(cVar1 == '\\');
      if ((uVar16 & 1) != 0) {
        uVar9 = 0x91;
        uVar13 = 0xa3;
        goto LAB_1008aa471;
      }
      iVar5 = (int)uVar16 / 2;
      iVar6 = iVar5 + iVar14;
      lVar8 = lVar11;
      if (local_3c < iVar6) {
        iVar7 = iVar14 + iVar5 * 2;
        if (lVar11 == 0) {
          lVar8 = FUN_10081ddd0(iVar7,"f_int.c",0xaa);
        }
        else {
          lVar8 = FUN_10081e040(lVar11,local_3c,iVar7,"f_int.c");
        }
        local_3c = iVar7;
        if (lVar8 == 0) {
          FUN_100887ce0(0xd,0x66,0x41,"f_int.c",0xae);
          if (lVar11 == 0) {
            return 0;
          }
          FUN_10081e1a0();
          return 0;
        }
      }
      lVar11 = lVar8;
      if (1 < (int)uVar16) {
        lVar12 = iVar14 + lVar11;
        lVar8 = 0;
        do {
          cVar2 = pcVar15[lVar8 * 2];
          bVar4 = cVar2 - 0x30;
          if (9 < bVar4) {
            if ((byte)(cVar2 + 0x9fU) < 6) {
              bVar4 = cVar2 + 0xa9;
              goto LAB_1008aa395;
            }
            if ((byte)(cVar2 + 0xbfU) < 6) {
              bVar4 = cVar2 - 0x37;
              goto LAB_1008aa395;
            }
LAB_1008aa455:
            uVar9 = 0x8d;
            uVar13 = 0xc1;
            goto LAB_1008aa471;
          }
LAB_1008aa395:
          *(byte *)(lVar12 + lVar8) = *(char *)(lVar12 + lVar8) << 4 | bVar4;
          cVar2 = pcVar15[lVar8 * 2 + 1];
          bVar10 = cVar2 - 0x30;
          if (9 < bVar10) {
            if ((byte)(cVar2 + 0x9fU) < 6) {
              bVar10 = cVar2 + 0xa9;
            }
            else {
              if (5 < (byte)(cVar2 + 0xbfU)) goto LAB_1008aa455;
              bVar10 = cVar2 - 0x37;
            }
          }
          *(byte *)(lVar12 + lVar8) = bVar4 << 4 | bVar10;
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar5);
      }
      if (cVar1 != '\\') {
        *param_2 = iVar6;
        *(long *)(param_2 + 2) = lVar11;
        return 1;
      }
      iVar5 = FUN_10087d950(param_1,param_3,param_4);
      bVar3 = false;
      iVar14 = iVar6;
    } while (0 < iVar5);
  }
  uVar9 = 0x96;
  uVar13 = 0xd4;
LAB_1008aa471:
  FUN_100887ce0(0xd,0x66,uVar9,"f_int.c",uVar13);
  return 0;
}

