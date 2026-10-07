
undefined8 FUN_1008aa600(undefined8 param_1,int *param_2,long param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  byte bVar8;
  byte bVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  
  iVar3 = FUN_10087d950(param_1,param_3,param_4);
  lVar5 = 0;
  iVar6 = 0;
  if (iVar3 < 1) {
LAB_1008aa90b:
    *param_2 = iVar6;
    *(long *)(param_2 + 2) = lVar5;
    uVar7 = 1;
  }
  else {
    iVar4 = 0;
    lVar10 = 0;
    iVar13 = 0;
    do {
      if (*(char *)(param_3 + -1 + (long)iVar3) == '\n') {
        lVar5 = (long)iVar3 + -1;
        *(undefined1 *)(param_3 + lVar5) = 0;
        iVar3 = (int)lVar5;
        if (iVar3 == 0) break;
      }
      if (*(char *)(param_3 + -1 + (long)iVar3) == '\r') {
        lVar5 = (long)iVar3 + -1;
        *(undefined1 *)(param_3 + lVar5) = 0;
        iVar3 = (int)lVar5;
        if (iVar3 == 0) break;
      }
      lVar5 = (long)iVar3;
      cVar1 = *(char *)(lVar5 + -1 + param_3);
      if (iVar3 < 2) {
        *(undefined1 *)(param_3 + lVar5) = 0;
        break;
      }
      do {
        lVar5 = lVar5 + -1;
        if ((9 < (byte)(*(char *)(param_3 + lVar5) - 0x30U)) &&
           ((bVar8 = *(char *)(param_3 + lVar5) + 0xbf, 0x25 < bVar8 ||
            ((0x3f0000003fU >> ((ulong)bVar8 & 0x3f) & 1) == 0)))) {
          iVar3 = (int)lVar5;
          break;
        }
      } while (1 < lVar5);
      *(undefined1 *)(param_3 + iVar3) = 0;
      if (iVar3 < 2) break;
      uVar14 = iVar3 - (uint)(cVar1 == '\\');
      if ((uVar14 & 1) != 0) {
        uVar7 = 0x91;
        uVar11 = 0x9b;
        goto LAB_1008aa8fa;
      }
      iVar3 = (int)uVar14 / 2;
      iVar6 = iVar3 + iVar13;
      lVar5 = lVar10;
      if (iVar4 < iVar6) {
        iVar4 = iVar13 + iVar3 * 2;
        if (lVar10 == 0) {
          lVar5 = FUN_10081ddd0(iVar4,"f_string.c",0xa2);
        }
        else {
          lVar5 = FUN_10081df30(lVar10,iVar4,"f_string.c",0xa6);
        }
        if (lVar5 == 0) {
          FUN_100887ce0(0xd,0x67,0x41,"f_string.c",0xa8);
          if (lVar10 == 0) {
            return 0;
          }
          FUN_10081e1a0();
          return 0;
        }
      }
      if (1 < (int)uVar14) {
        lVar12 = iVar13 + lVar5;
        lVar10 = 0;
        do {
          cVar2 = *(char *)(param_3 + lVar10 * 2);
          bVar8 = cVar2 - 0x30;
          if (9 < bVar8) {
            if ((byte)(cVar2 + 0x9fU) < 6) {
              bVar8 = cVar2 + 0xa9;
              goto LAB_1008aa7f6;
            }
            if ((byte)(cVar2 + 0xbfU) < 6) {
              bVar8 = cVar2 - 0x37;
              goto LAB_1008aa7f6;
            }
LAB_1008aa89c:
            uVar7 = 0x8d;
            uVar11 = 0xbb;
            goto LAB_1008aa8fa;
          }
LAB_1008aa7f6:
          *(byte *)(lVar12 + lVar10) = *(char *)(lVar12 + lVar10) << 4 | bVar8;
          cVar2 = *(char *)(param_3 + 1 + lVar10 * 2);
          bVar9 = cVar2 - 0x30;
          if (9 < bVar9) {
            if ((byte)(cVar2 + 0x9fU) < 6) {
              bVar9 = cVar2 + 0xa9;
            }
            else {
              if (5 < (byte)(cVar2 + 0xbfU)) goto LAB_1008aa89c;
              bVar9 = cVar2 - 0x37;
            }
          }
          *(byte *)(lVar12 + lVar10) = bVar8 << 4 | bVar9;
          lVar10 = lVar10 + 1;
        } while (lVar10 < iVar3);
      }
      if (cVar1 != '\\') goto LAB_1008aa90b;
      iVar3 = FUN_10087d950(param_1,param_3,param_4);
      lVar10 = lVar5;
      iVar13 = iVar6;
    } while (0 < iVar3);
    uVar7 = 0x96;
    uVar11 = 0xce;
LAB_1008aa8fa:
    FUN_100887ce0(0xd,0x67,uVar7,"f_string.c",uVar11);
    uVar7 = 0;
  }
  return uVar7;
}

