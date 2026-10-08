
int FUN_100cbbe10(long param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong local_108;
  undefined8 local_f0;
  undefined1 local_e4 [4];
  undefined1 local_e0 [168];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_f0 = 0;
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x18);
  lVar16 = *(long *)(param_2 + 8);
  local_38 = lVar1;
  FUN_100c66060(local_e0);
  if (*(long *)(lVar16 + 0x20) == 0) {
    uVar10 = 0xb2;
    uVar18 = 0x152;
  }
  else {
    puVar9 = *(undefined8 **)(lVar16 + 0x10);
    if ((puVar9 == (undefined8 *)0x0) || (iVar6 = FUN_100bf7220(*puVar9), iVar6 != 0x37d)) {
      uVar10 = 0xb3;
      uVar18 = 0x159;
    }
    else {
      if (*(int *)puVar9[1] == 0x10) {
        local_f0 = *(undefined8 *)(*(long *)((int *)puVar9[1] + 2) + 8);
        puVar9 = (undefined8 *)FUN_100c7ade0(0,&local_f0,(long)**(int **)(puVar9[1] + 8));
        if (puVar9 != (undefined8 *)0x0) {
          uVar7 = FUN_100bf7220(*puVar9);
          uVar10 = FUN_100bf70a0(uVar7);
          lVar11 = FUN_100c6bd50(uVar10);
          if (lVar11 == 0) {
            uVar10 = 0x94;
            uVar18 = 0x16b;
            goto LAB_100cbc397;
          }
          iVar8 = FUN_100c66110(local_e0,lVar11,0,0,0,param_3);
          puVar15 = (undefined1 *)0x0;
          iVar6 = 0;
          if (iVar8 != 0) {
            iVar6 = 0;
            FUN_100c66fd0(local_e0,0);
            iVar8 = FUN_100c6f910(local_e0,puVar9[1]);
            if (iVar8 < 0) {
              FUN_100c62ee0(0x2e,0xa7,0x66,"cms_pwri.c",0x175);
              puVar15 = (undefined1 *)0x0;
            }
            else {
              iVar6 = FUN_100c700a0(**(undefined8 **)(lVar16 + 8),*(undefined8 *)(lVar16 + 0x20),
                                    *(undefined4 *)(lVar16 + 0x28),(*(undefined8 **)(lVar16 + 8))[1]
                                    ,local_e0,param_3);
              if (iVar6 < 0) {
                uVar10 = 6;
                uVar18 = 0x180;
LAB_100cbc397:
                FUN_100c62ee0(0x2e,0xa7,uVar10,"cms_pwri.c",uVar18);
                iVar6 = 0;
                puVar15 = (undefined1 *)0x0;
              }
              else if (param_3 == 0) {
                puVar12 = (undefined1 *)
                          FUN_100bf3540(**(undefined4 **)(lVar16 + 0x18),"cms_pwri.c",0x195);
                if (puVar12 == (undefined1 *)0x0) {
                  uVar10 = 0x41;
                  uVar18 = 0x198;
                  goto LAB_100cbc397;
                }
                lVar11 = *(long *)(*(int **)(lVar16 + 0x18) + 2);
                iVar6 = **(int **)(lVar16 + 0x18);
                uVar19 = (ulong)iVar6;
                iVar8 = FUN_100c6fb80(local_e0);
                uVar14 = (ulong)iVar8;
                lVar16 = uVar19 + uVar14 * -2;
                if (((uVar14 * 2 <= uVar19) && (uVar19 % uVar14 == 0)) &&
                   (pbVar13 = (byte *)FUN_100bf3540(iVar6,"cms_pwri.c",0xec), pbVar13 != (byte *)0x0
                   )) {
                  FUN_100c66830(local_e0,pbVar13 + lVar16,local_e4,lVar16 + lVar11,uVar14 * 2);
                  FUN_100c66830(local_e0,pbVar13,local_e4,pbVar13 + (uVar19 - uVar14),iVar8);
                  FUN_100c66830(local_e0,pbVar13,local_e4,lVar11,uVar19 - uVar14 & 0xffffffff);
                  FUN_100c66e60(local_e0,0,0,0,0);
                  FUN_100c66830(local_e0,pbVar13,local_e4,pbVar13,iVar6);
                  bVar5 = (pbVar13[6] ^ pbVar13[3]) &
                          (pbVar13[5] ^ pbVar13[2]) & (pbVar13[4] ^ pbVar13[1]);
                  bVar4 = true;
                  local_108 = (ulong)bVar5;
                  if ((bVar5 == 0xff) && (local_108 = (ulong)*pbVar13, local_108 - 4 <= uVar19)) {
                    _memcpy(puVar12,pbVar13 + 4,local_108);
                    bVar4 = false;
                  }
                  _OPENSSL_cleanse(pbVar13,uVar19);
                  FUN_100bf3910(pbVar13);
                  if (!bVar4) {
                    *(undefined1 **)(lVar2 + 0x20) = puVar12;
                    *(ulong *)(lVar2 + 0x28) = local_108;
LAB_100cbc0fc:
                    iVar6 = 1;
                    puVar15 = puVar12;
                    goto LAB_100cbc3a0;
                  }
                }
                FUN_100c62ee0(0x2e,0xa7,0xb4,"cms_pwri.c",0x19e);
                iVar6 = 0;
                puVar15 = puVar12;
              }
              else {
                uVar19 = *(ulong *)(lVar2 + 0x28);
                iVar6 = FUN_100c6fb80(local_e0);
                uVar17 = (ulong)iVar6;
                uVar14 = uVar19 + 3 + uVar17;
                iVar6 = 0;
                if (uVar19 < 0x100) {
                  uVar14 = uVar14 - uVar14 % uVar17;
                  puVar15 = (undefined1 *)0x0;
                  iVar6 = 0;
                  if (uVar17 * 2 <= uVar14) {
                    puVar12 = (undefined1 *)FUN_100bf3540(uVar14 & 0xffffffff,"cms_pwri.c",0x18b);
                    iVar6 = 0;
                    puVar15 = (undefined1 *)0x0;
                    if (puVar12 != (undefined1 *)0x0) {
                      pbVar13 = *(byte **)(lVar2 + 0x20);
                      uVar19 = *(ulong *)(lVar2 + 0x28);
                      iVar6 = FUN_100c6fb80(local_e0);
                      uVar17 = (ulong)iVar6;
                      uVar14 = uVar19 + 3 + uVar17;
                      iVar6 = 0;
                      puVar15 = puVar12;
                      if ((uVar19 < 0x100) &&
                         (uVar14 = uVar14 - uVar14 % uVar17, uVar17 * 2 <= uVar14)) {
                        *puVar12 = (char)uVar19;
                        puVar12[1] = ~*pbVar13;
                        puVar12[2] = ~pbVar13[1];
                        puVar12[3] = ~pbVar13[2];
                        _memcpy(puVar12 + 4,pbVar13,uVar19);
                        if ((uVar14 <= uVar19 + 4) ||
                           (iVar8 = FUN_100c62190(puVar12 + uVar19 + 4,
                                                  (int)uVar14 + (-4 - (int)uVar19)), -1 < iVar8)) {
                          FUN_100c66640(local_e0,puVar12,local_e4,puVar12);
                          FUN_100c66640(local_e0,puVar12,local_e4,puVar12,uVar14 & 0xffffffff);
                          piVar3 = *(int **)(lVar16 + 0x18);
                          *(undefined1 **)(piVar3 + 2) = puVar12;
                          *piVar3 = (int)uVar14;
                          goto LAB_100cbc0fc;
                        }
                      }
                    }
                  }
                }
                else {
                  puVar15 = (undefined1 *)0x0;
                }
              }
            }
          }
LAB_100cbc3a0:
          FUN_100c66520(local_e0);
          if ((iVar6 == 0) && (puVar15 != (undefined1 *)0x0)) {
            FUN_100bf3910();
          }
          FUN_100c7ae40(puVar9);
          goto LAB_100cbc165;
        }
      }
      uVar10 = 0xb0;
      uVar18 = 0x164;
    }
  }
  FUN_100c62ee0(0x2e,0xa7,uVar10,"cms_pwri.c",uVar18);
  iVar6 = 0;
LAB_100cbc165:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

