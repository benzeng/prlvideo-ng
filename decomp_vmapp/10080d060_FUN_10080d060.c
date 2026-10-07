
undefined8 FUN_10080d060(long param_1,undefined1 *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  byte *pbVar9;
  undefined8 uVar10;
  int iVar11;
  
  if (param_3 < 3) {
    uVar10 = 0x126;
  }
  else if ((param_2[1] & 1) == 0) {
    uVar6 = (uint)CONCAT11(*param_2,param_2[1]);
    param_3 = param_3 + -2;
    if ((int)(uVar6 + 1) <= param_3) {
      pbVar9 = param_2 + 2;
      if ((param_1 == 0) ||
         ((lVar8 = *(long *)(param_1 + 0x288), lVar8 == 0 &&
          ((*(long *)(param_1 + 0x170) == 0 ||
           (lVar8 = *(long *)(*(long *)(param_1 + 0x170) + 0x2d8), lVar8 == 0)))))) {
        lVar8 = 0;
      }
      *(undefined8 *)(param_1 + 0x290) = 0;
      iVar3 = FUN_100885600(lVar8);
      bVar1 = *pbVar9;
joined_r0x00010080d16c:
      uVar4 = (uint)bVar1;
      if (uVar6 != 0) {
        if (iVar3 < 1) {
          uVar4 = uVar6 - 2 >> 1;
          uVar7 = uVar4 + 1;
          if ((uVar7 & 7) != 0) {
            iVar3 = -(uVar7 & 7);
            do {
              pbVar9 = pbVar9 + 2;
              uVar6 = uVar6 - 2;
              param_3 = param_3 + -2;
              iVar3 = iVar3 + 1;
            } while (iVar3 != 0);
          }
          if (6 < uVar4) {
            do {
              pbVar9 = pbVar9 + 0x10;
              param_3 = param_3 + -0x10;
              uVar6 = uVar6 - 0x10;
            } while (uVar6 != 0);
          }
          uVar4 = (uint)*pbVar9;
        }
        else {
          do {
            bVar2 = pbVar9[1];
            pbVar9 = pbVar9 + 2;
            uVar6 = uVar6 - 2;
            param_3 = param_3 + -2;
            iVar11 = 0;
            do {
              lVar5 = FUN_100885620(lVar8,iVar11);
              if (*(ulong *)(lVar5 + 8) == (ulong)CONCAT11(bVar1,bVar2)) {
                *(long *)(param_1 + 0x290) = lVar5;
                bVar1 = *pbVar9;
                iVar3 = iVar11;
                goto joined_r0x00010080d16c;
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar3);
            bVar1 = *pbVar9;
            uVar4 = (uint)bVar1;
          } while (uVar6 != 0);
        }
      }
      if (uVar4 != param_3 - 1U) {
        FUN_100887ce0(0x14,0x136,0x160,"d1_srtp.c",0x162);
        *param_4 = 0x32;
        return 1;
      }
      return 0;
    }
    uVar10 = 0x13a;
  }
  else {
    uVar10 = 0x132;
  }
  FUN_100887ce0(0x14,0x136,0x161,"d1_srtp.c",uVar10);
  *param_4 = 0x32;
  return 1;
}

