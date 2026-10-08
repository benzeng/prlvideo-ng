
undefined8
FUN_100bdb0b0(ulong param_1,long param_2,int param_3,long param_4,int param_5,long param_6,
             int param_7,long param_8,int param_9,long param_10,uint param_11,uint *param_12,
             uint *param_13,uint param_14)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint *puVar18;
  uint *puVar19;
  long lVar20;
  undefined8 uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  long local_128;
  uint *local_118;
  long local_f8;
  long local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [48];
  undefined1 local_b0 [48];
  long local_80;
  undefined1 local_78 [64];
  long local_38;
  
  lVar20 = *(long *)PTR____stack_chk_guard_1021e1840;
  iVar23 = 0;
  local_38 = lVar20;
  iVar5 = FUN_100beaa30(0,&local_f0,&local_f8);
  if (iVar5 != 0) {
    local_128 = param_10;
    iVar5 = 1;
    do {
      iVar23 = (iVar23 + 1) - (uint)((local_f0 << 10 & param_1) == 0);
      iVar6 = FUN_100beaa30(iVar5,&local_f0,&local_f8);
      iVar5 = iVar5 + 1;
    } while (iVar6 != 0);
    lVar20 = *(long *)PTR____stack_chk_guard_1021e1840;
    if (iVar23 != 0) {
      ___bzero(param_12,(long)(int)param_14,(long)(int)param_11 % (long)iVar23 & 0xffffffff);
      iVar5 = FUN_100beaa30(0,&local_f0,&local_f8);
      if (iVar5 != 0) {
        uVar22 = param_11 & 1;
        if (iVar23 == 1) {
          uVar22 = 0;
        }
        lVar8 = (long)param_5;
        lVar9 = (long)param_7;
        lVar10 = (long)param_9;
        uVar14 = (ulong)(param_14 - 1);
        uVar1 = uVar14 + 1;
        iVar5 = 0;
        do {
          lVar4 = local_f8;
          if ((param_1 & local_f0 << 10) != 0) {
            lVar20 = *(long *)PTR____stack_chk_guard_1021e1840;
            if (local_f8 != 0) {
              iVar6 = FUN_100c6fc50();
              if (iVar6 < 0) {
                FUN_100bf2cd0("t1_enc.c",0xaa,"chunk >= 0");
              }
              FUN_100c65850(local_b0);
              FUN_100c65850(local_e0);
              FUN_100c6fcb0(local_b0,8);
              FUN_100c6fcb0(local_e0,8);
              lVar11 = FUN_100c72c60(0x357,0,local_128,uVar22 + (int)param_11 / iVar23);
              lVar20 = 0;
              if ((((((lVar11 != 0) &&
                     (iVar7 = FUN_100c72d30(local_b0,0,lVar4,0,lVar11), lVar20 = lVar11, iVar7 != 0)
                     ) && (iVar7 = FUN_100c72d30(local_e0,0,lVar4,0,lVar11), iVar7 != 0)) &&
                   ((param_2 == 0 ||
                    (iVar7 = FUN_100c65b10(local_b0,param_2,(long)param_3), iVar7 != 0)))) &&
                  (((param_4 == 0 || (iVar7 = FUN_100c65b10(local_b0,param_4,lVar8), iVar7 != 0)) &&
                   ((param_6 == 0 || (iVar7 = FUN_100c65b10(local_b0,param_6,lVar9), iVar7 != 0)))))
                  ) && (((param_8 == 0 ||
                         (iVar7 = FUN_100c65b10(local_b0,param_8,lVar10), iVar7 != 0)) &&
                        (iVar7 = FUN_100c72ec0(local_b0,local_78,&local_e8), iVar7 != 0)))) {
                local_118 = param_13;
                uVar24 = param_14;
                if (param_2 == 0) {
                  while( true ) {
                    iVar7 = FUN_100c72d30(local_b0,0,lVar4,0,lVar11);
                    if ((iVar7 == 0) ||
                       (iVar7 = FUN_100c72d30(local_e0,0,lVar4,0,lVar11), iVar7 == 0))
                    goto LAB_100bdb93f;
                    iVar7 = FUN_100c65b10(local_b0,local_78,local_e8);
                    if ((((iVar7 == 0) ||
                         (iVar7 = FUN_100c65b10(local_e0,local_78,local_e8), iVar7 == 0)) ||
                        (((param_4 != 0 &&
                          (iVar7 = FUN_100c65b10(local_b0,param_4,lVar8), iVar7 == 0)) ||
                         ((param_6 != 0 &&
                          (iVar7 = FUN_100c65b10(local_b0,param_6,lVar9), iVar7 == 0)))))) ||
                       ((param_8 != 0 &&
                        (iVar7 = FUN_100c65b10(local_b0,param_8,lVar10), iVar7 == 0))))
                    goto LAB_100bdb93f;
                    if ((int)uVar24 <= iVar6) break;
                    iVar7 = FUN_100c72ec0(local_b0,local_118,&local_80);
                    if (iVar7 == 0) goto LAB_100bdb93f;
                    local_118 = (uint *)((long)local_118 + local_80);
                    uVar24 = uVar24 - (int)local_80;
                    iVar7 = FUN_100c72ec0(local_e0,local_78,&local_e8);
                    if (iVar7 == 0) goto LAB_100bdb93f;
                  }
                }
                else {
                  while( true ) {
                    iVar7 = FUN_100c72d30(local_b0,0,lVar4,0,lVar11);
                    if ((iVar7 == 0) ||
                       (iVar7 = FUN_100c72d30(local_e0,0,lVar4,0,lVar11), iVar7 == 0))
                    goto LAB_100bdb93f;
                    iVar7 = FUN_100c65b10(local_b0,local_78,local_e8);
                    if ((((iVar7 == 0) ||
                         ((iVar7 = FUN_100c65b10(local_e0,local_78,local_e8), iVar7 == 0 ||
                          (iVar7 = FUN_100c65b10(local_b0,param_2,(long)param_3), iVar7 == 0)))) ||
                        ((param_4 != 0 &&
                         (iVar7 = FUN_100c65b10(local_b0,param_4,lVar8), iVar7 == 0)))) ||
                       (((param_6 != 0 &&
                         (iVar7 = FUN_100c65b10(local_b0,param_6,lVar9), iVar7 == 0)) ||
                        ((param_8 != 0 &&
                         (iVar7 = FUN_100c65b10(local_b0,param_8,lVar10), iVar7 == 0))))))
                    goto LAB_100bdb93f;
                    if ((int)uVar24 <= iVar6) break;
                    iVar7 = FUN_100c72ec0(local_b0,local_118,&local_80);
                    if (iVar7 == 0) goto LAB_100bdb93f;
                    local_118 = (uint *)((long)local_118 + local_80);
                    uVar24 = uVar24 - (int)local_80;
                    iVar7 = FUN_100c72ec0(local_e0,local_78,&local_e8);
                    if (iVar7 == 0) goto LAB_100bdb93f;
                  }
                }
                iVar6 = FUN_100c72ec0(local_b0,local_78,&local_e8);
                if (iVar6 != 0) {
                  _memcpy(local_118,local_78,(long)(int)uVar24);
                  FUN_100c6d8c0(lVar11);
                  FUN_100c65c50(local_b0);
                  FUN_100c65c50(local_e0);
                  _OPENSSL_cleanse(local_78,0x40);
                  local_128 = local_128 + (int)param_11 / iVar23;
                  if (0 < (int)param_14) {
                    uVar12 = 0;
                    if (((uVar1 & 0x1fffffff0) != 0) &&
                       ((uVar16 = uVar1 & 0xfffffffffffffff0, puVar18 = param_12, puVar19 = param_13
                        , (uint *)((long)param_13 + uVar14) < param_12 ||
                        (uVar12 = 0, (uint *)((long)param_12 + uVar14) < param_13)))) {
                      do {
                        uVar24 = puVar19[1];
                        uVar2 = puVar19[2];
                        uVar3 = puVar19[3];
                        *puVar18 = *puVar18 ^ *puVar19;
                        puVar18[1] = puVar18[1] ^ uVar24;
                        puVar18[2] = puVar18[2] ^ uVar2;
                        puVar18[3] = puVar18[3] ^ uVar3;
                        puVar19 = puVar19 + 4;
                        puVar18 = puVar18 + 4;
                        uVar16 = uVar16 - 0x10;
                        uVar12 = uVar1 & 0x1fffffff0;
                      } while (uVar16 != 0);
                    }
                    if (uVar1 != uVar12) {
                      if ((param_14 & 1) != 0) {
                        *(byte *)((long)param_12 + uVar12) =
                             *(byte *)((long)param_12 + uVar12) ^ *(byte *)((long)param_13 + uVar12)
                        ;
                        uVar12 = uVar12 + 1;
                      }
                      if (param_14 - 1 != 0) {
                        pbVar15 = (byte *)((long)param_13 + uVar12 + 1);
                        pbVar17 = (byte *)((long)param_12 + uVar12 + 1);
                        iVar6 = (param_14 + 1) - ((int)uVar12 + 1);
                        do {
                          pbVar17[-1] = pbVar17[-1] ^ pbVar15[-1];
                          *pbVar17 = *pbVar17 ^ *pbVar15;
                          pbVar15 = pbVar15 + 2;
                          pbVar17 = pbVar17 + 2;
                          iVar6 = iVar6 + -2;
                        } while (iVar6 != 0);
                      }
                    }
                  }
                  goto LAB_100bdb8f9;
                }
              }
LAB_100bdb93f:
              FUN_100c6d8c0(lVar20);
              FUN_100c65c50(local_b0);
              FUN_100c65c50(local_e0);
              _OPENSSL_cleanse(local_78,0x40);
              uVar13 = 0;
              goto LAB_100bdb96c;
            }
            uVar13 = 0x146;
            uVar21 = 0x115;
            goto LAB_100bdb933;
          }
LAB_100bdb8f9:
          iVar5 = iVar5 + 1;
          iVar6 = FUN_100beaa30(iVar5,&local_f0,&local_f8);
        } while (iVar6 != 0);
      }
      uVar13 = 1;
LAB_100bdb96c:
      lVar20 = *(long *)PTR____stack_chk_guard_1021e1840;
      goto LAB_100bdb977;
    }
  }
  uVar13 = 0x44;
  uVar21 = 0x10a;
LAB_100bdb933:
  FUN_100c62ee0(0x14,0x11c,uVar13,"t1_enc.c",uVar21);
  uVar13 = 0;
LAB_100bdb977:
  if (lVar20 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar13;
}

