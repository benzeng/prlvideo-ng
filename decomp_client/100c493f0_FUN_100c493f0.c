
undefined8
FUN_100c493f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,byte *param_5,
             int param_6)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  byte *pbVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  uint *puVar21;
  ulong uVar22;
  uint *puVar23;
  undefined8 uVar24;
  ulong uVar25;
  int iVar26;
  byte bVar27;
  undefined1 local_a8 [48];
  undefined1 local_78 [64];
  long local_38;
  
  lVar20 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar20;
  FUN_100c65850(local_a8);
  iVar11 = FUN_100c6fc50(param_3);
  if (iVar11 < 0) {
    uVar19 = 0;
    goto LAB_100c4976f;
  }
  iVar15 = iVar11;
  if (param_6 != -1) {
    if (param_6 == -2) {
      iVar15 = -2;
    }
    else {
      iVar15 = param_6;
      if (param_6 < -2) {
        FUN_100c62ee0(4,0x95,0x88,"rsa_pss.c",0x6f);
        uVar19 = 0;
        goto LAB_100c4976f;
      }
    }
  }
  cVar10 = FUN_100c26610(*(undefined8 *)(param_1 + 0x20));
  bVar27 = cVar10 + 7U & 7;
  iVar12 = FUN_100c4c150(param_1);
  if ((0xff << bVar27 & (uint)*param_5) == 0) {
    if (bVar27 == 0) {
      param_5 = param_5 + 1;
      iVar12 = iVar12 + -1;
    }
    if (iVar12 < iVar11 + 2 + iVar15) {
      uVar19 = 0x6d;
      uVar24 = 0x7e;
    }
    else if (param_5[(long)iVar12 + -1] == 0xbc) {
      iVar13 = iVar12 - iVar11;
      iVar26 = iVar13 + -1;
      pbVar16 = (byte *)FUN_100bf3540(iVar26,"rsa_pss.c",0x87);
      if (pbVar16 != (byte *)0x0) {
        iVar14 = FUN_100c491f0(pbVar16);
        uVar19 = 0;
        if (-1 < iVar14) {
          if (1 < iVar13) {
            iVar12 = (iVar12 + -1) - iVar11;
            uVar17 = (ulong)iVar12;
            uVar25 = 1;
            if (0 < (long)uVar17) {
              uVar25 = uVar17;
            }
            uVar22 = 0;
            if (uVar25 != 0) {
              uVar18 = uVar17 - 1;
              if (iVar12 < 2) {
                uVar18 = 0;
              }
              uVar22 = 0;
              if (((uVar25 & 0xffffffffffffffe0) != 0) &&
                 ((param_5 + uVar18 < pbVar16 || (uVar22 = 0, pbVar16 + uVar18 < param_5)))) {
                puVar21 = (uint *)(pbVar16 + 0x10);
                puVar23 = (uint *)(param_5 + 0x10);
                uVar18 = 0;
                if (0 < (long)uVar17) {
                  uVar18 = uVar17;
                }
                uVar18 = uVar18 & 0xffffffffffffffe0;
                do {
                  uVar3 = puVar23[-3];
                  uVar4 = puVar23[-2];
                  uVar5 = puVar23[-1];
                  uVar6 = *puVar23;
                  uVar7 = puVar23[1];
                  uVar8 = puVar23[2];
                  uVar9 = puVar23[3];
                  puVar21[-4] = puVar21[-4] ^ puVar23[-4];
                  puVar21[-3] = puVar21[-3] ^ uVar3;
                  puVar21[-2] = puVar21[-2] ^ uVar4;
                  puVar21[-1] = puVar21[-1] ^ uVar5;
                  *puVar21 = *puVar21 ^ uVar6;
                  puVar21[1] = puVar21[1] ^ uVar7;
                  puVar21[2] = puVar21[2] ^ uVar8;
                  puVar21[3] = puVar21[3] ^ uVar9;
                  puVar21 = puVar21 + 8;
                  puVar23 = puVar23 + 8;
                  uVar18 = uVar18 - 0x20;
                  uVar22 = uVar25 & 0xffffffffffffffe0;
                } while (uVar18 != 0);
              }
              if (uVar25 == uVar22) goto LAB_100c4968f;
            }
            do {
              pbVar16[uVar22] = pbVar16[uVar22] ^ param_5[uVar22];
              uVar22 = uVar22 + 1;
            } while ((long)uVar22 < (long)iVar26);
          }
LAB_100c4968f:
          if (bVar27 != 0) {
            *pbVar16 = *pbVar16 & (byte)(0xff >> (8 - bVar27 & 0x1f));
          }
          lVar20 = 0;
          do {
            pbVar2 = pbVar16 + lVar20;
            lVar1 = lVar20 + 1;
            if (iVar13 + -2 <= lVar20) break;
            lVar20 = lVar1;
          } while (*pbVar2 == 0);
          if (*pbVar2 == 1) {
            iVar12 = (int)lVar1;
            if ((iVar15 < 0) || (iVar26 - iVar12 == iVar15)) {
              iVar15 = FUN_100c65920(local_a8,param_3,0);
              uVar19 = 0;
              if (((iVar15 != 0) &&
                  ((iVar15 = FUN_100c65b10(local_a8,"",8), iVar15 != 0 &&
                   (iVar15 = FUN_100c65b10(local_a8,param_2,(long)iVar11), uVar19 = 0, iVar15 != 0))
                  )) && ((iVar26 == iVar12 ||
                         (iVar15 = FUN_100c65b10(local_a8,pbVar16 + iVar12,(long)(iVar26 - iVar12)),
                         iVar15 != 0)))) {
                uVar19 = 0;
                iVar15 = FUN_100c65bc0(local_a8,local_78,0);
                if (iVar15 != 0) {
                  iVar11 = _memcmp(local_78,param_5 + iVar26,(long)iVar11);
                  uVar19 = 1;
                  if (iVar11 != 0) {
                    uVar19 = 0x68;
                    uVar24 = 0xa6;
                    goto LAB_100c497b6;
                  }
                }
              }
              goto LAB_100c497be;
            }
            uVar19 = 0x88;
            uVar24 = 0x98;
          }
          else {
            uVar19 = 0x87;
            uVar24 = 0x94;
          }
LAB_100c497b6:
          FUN_100c62ee0(4,0x95,uVar19,"rsa_pss.c",uVar24);
          uVar19 = 0;
        }
LAB_100c497be:
        FUN_100bf3910(pbVar16);
        lVar20 = *(long *)PTR____stack_chk_guard_1021e1840;
        goto LAB_100c4976f;
      }
      uVar19 = 0x41;
      uVar24 = 0x89;
    }
    else {
      uVar19 = 0x86;
      uVar24 = 0x82;
    }
  }
  else {
    uVar19 = 0x85;
    uVar24 = 0x76;
  }
  FUN_100c62ee0(4,0x95,uVar19,"rsa_pss.c",uVar24);
  lVar20 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar19 = 0;
LAB_100c4976f:
  FUN_100c65c50(local_a8);
  if (lVar20 == local_38) {
    return uVar19;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

