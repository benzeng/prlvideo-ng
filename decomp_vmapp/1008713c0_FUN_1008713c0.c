
undefined8
FUN_1008713c0(long param_1,ulong param_2,ulong param_3,long param_4,long param_5,ulong param_6,
             void *param_7,int *param_8,ulong *param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  uint uVar29;
  byte *pbVar30;
  undefined4 uVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  byte *pbVar35;
  uint uVar36;
  ulong uVar37;
  uint *puVar38;
  uint *puVar39;
  ulong uVar40;
  ulong uVar41;
  ulong local_d8;
  long local_c8;
  undefined4 local_b8;
  uint auStack_b4 [6];
  char acStack_99 [33];
  undefined4 local_78;
  uint auStack_74 [7];
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar40 = param_3 >> 3;
  uVar25 = 0;
  uVar36 = (uint)uVar40;
  if ((0x20 < uVar36) || ((0x110100000U >> (uVar40 & 0x3f) & 1) == 0)) goto LAB_100871fcd;
  local_c8 = param_4;
  if (param_4 == 0) {
    local_c8 = FUN_100891760();
  }
  lVar28 = local_c8;
  uVar32 = (ulong)(int)uVar36;
  local_d8 = param_6;
  if (uVar32 < param_6) {
    local_d8 = uVar32;
  }
  uVar25 = 0;
  if (param_6 < uVar32 && param_6 != 0) {
    bVar7 = false;
  }
  else {
    bVar7 = false;
    if (param_5 != 0) {
      ___memcpy_chk(local_58,param_5,local_d8,0x20);
      bVar7 = true;
    }
  }
  lVar15 = FUN_100857ed0();
  if (lVar15 == 0) goto LAB_100871fcd;
  lVar16 = FUN_10084c820();
  uVar25 = 0;
  if (lVar16 != 0) {
    FUN_10084ca60(lVar16);
    uVar17 = FUN_10084cc20(lVar16);
    puVar18 = (undefined8 *)FUN_10084cc20(lVar16);
    uVar19 = FUN_10084cc20(lVar16);
    uVar20 = FUN_10084cc20(lVar16);
    uVar21 = FUN_10084cc20(lVar16);
    uVar22 = FUN_10084cc20(lVar16);
    uVar23 = FUN_10084cc20(lVar16);
    uVar24 = FUN_10084cc20(lVar16);
    uVar25 = FUN_10084b310();
    uVar37 = (param_2 + 0x3f & 0xffffffffffffffc0) - 1;
    uVar41 = 0x1ff;
    if (0x1ff < param_2) {
      uVar41 = uVar37;
    }
    uVar31 = 0x1ff;
    if (0x1ff < param_2) {
      uVar31 = (undefined4)uVar37;
    }
    iVar9 = FUN_10084ffd0(uVar24,uVar25);
    uVar25 = 0;
    if (iVar9 != 0) {
      uVar29 = uVar36 - 1;
      lVar33 = (long)(int)uVar36;
      uVar37 = uVar40 & 0xf;
      lVar2 = ((ulong)uVar29 + 1) - uVar37;
      lVar1 = (ulong)uVar29 + 1;
      iVar9 = 0;
LAB_100871647:
      if (!bVar7) {
        do {
          uVar25 = 0;
          iVar10 = FUN_100852760(param_10,0,iVar9);
          if ((iVar10 == 0) || (iVar10 = FUN_100886f90(local_58,uVar40 & 0xffffffff), iVar10 < 0))
          goto LAB_100871f9d;
          ___memcpy_chk(acStack_99 + 1,local_58,uVar32,0x20);
          ___memcpy_chk(&local_b8,local_58,uVar32,0x20);
          lVar34 = lVar33;
          if (0 < (int)uVar36) {
            do {
              pcVar3 = acStack_99 + lVar34;
              *pcVar3 = *pcVar3 + '\x01';
              if (*pcVar3 != '\0') break;
              lVar26 = lVar34 + -1;
              bVar4 = 0 < lVar34;
              lVar34 = lVar26;
            } while (lVar26 != 0 && bVar4);
          }
          uVar25 = 0;
          iVar10 = FUN_10088ad10(local_58,uVar32,&local_78,0,lVar28,0);
          if (iVar10 == 0) goto LAB_100871f9d;
          uVar25 = 0;
          iVar10 = FUN_10088ad10(acStack_99 + 1,uVar32,&local_b8,0,lVar28,0);
          if (iVar10 == 0) goto LAB_100871f9d;
          if (0 < (int)uVar36) {
            puVar39 = &local_b8;
            lVar34 = lVar2;
            puVar38 = &local_78;
            lVar26 = 0;
            lVar8 = lVar1 - uVar37;
            while (lVar8 != 0) {
              uVar11 = puVar39[1];
              uVar5 = puVar39[2];
              uVar6 = puVar39[3];
              *puVar38 = *puVar38 ^ *puVar39;
              puVar38[1] = puVar38[1] ^ uVar11;
              puVar38[2] = puVar38[2] ^ uVar5;
              puVar38[3] = puVar38[3] ^ uVar6;
              puVar39 = puVar39 + 4;
              puVar38 = puVar38 + 4;
              lVar34 = lVar34 + -0x10;
              lVar26 = lVar1 - uVar37;
              lVar8 = lVar34;
            }
            if (lVar1 != lVar26) {
              uVar11 = (uint)lVar26;
              if ((uVar36 - uVar11 & 1) != 0) {
                pbVar30 = (byte *)((long)auStack_74 + lVar26 + -4);
                *pbVar30 = *pbVar30 ^ *(byte *)((long)auStack_b4 + lVar26 + -4);
                lVar26 = lVar26 + 1;
              }
              if (uVar29 != uVar11) {
                pbVar30 = (byte *)((long)auStack_b4 + lVar26 + -3);
                pbVar35 = (byte *)((long)auStack_74 + lVar26 + -3);
                iVar10 = (uVar36 + 1) - ((int)lVar26 + 1);
                do {
                  pbVar35[-1] = pbVar35[-1] ^ pbVar30[-1];
                  *pbVar35 = *pbVar35 ^ *pbVar30;
                  pbVar30 = pbVar30 + 2;
                  pbVar35 = pbVar35 + 2;
                  iVar10 = iVar10 + -2;
                } while (iVar10 != 0);
              }
            }
          }
          local_78._0_1_ = (byte)local_78 | 0x80;
          pbVar30 = (byte *)((long)auStack_74 + (long)(int)(uVar36 - 1) + -4);
          *pbVar30 = *pbVar30 | 1;
          lVar34 = FUN_10084bc20(&local_78,uVar40 & 0xffffffff,uVar20);
          if (lVar34 == 0) goto LAB_100871f9d;
          iVar9 = iVar9 + 1;
          iVar10 = FUN_100852eb0(uVar20,0x32,lVar16,1,param_10);
          if (0 < iVar10) goto LAB_100871acc;
          if (iVar10 != 0) goto LAB_100871f9d;
        } while( true );
      }
      do {
        iVar10 = FUN_100852760(param_10,0,iVar9);
        uVar25 = 0;
        if (iVar10 == 0) goto LAB_100871f9d;
        local_c8 = 0;
        if (local_d8 == 0) {
          iVar10 = FUN_100886f90(local_58,uVar40 & 0xffffffff);
          local_c8 = 1;
          uVar25 = 0;
          if (iVar10 < 0) goto LAB_100871f9d;
        }
        ___memcpy_chk(acStack_99 + 1,local_58,uVar32,0x20);
        ___memcpy_chk(&local_b8,local_58,uVar32,0x20);
        lVar34 = lVar33;
        if (0 < (int)uVar36) {
          do {
            pcVar3 = acStack_99 + lVar34;
            *pcVar3 = *pcVar3 + '\x01';
            if (*pcVar3 != '\0') break;
            lVar26 = lVar34 + -1;
            bVar4 = 0 < lVar34;
            lVar34 = lVar26;
          } while (lVar26 != 0 && bVar4);
        }
        iVar10 = FUN_10088ad10(local_58,uVar32,&local_78,0,lVar28,0);
        uVar25 = 0;
        if (iVar10 == 0) goto LAB_100871f9d;
        iVar10 = FUN_10088ad10(acStack_99 + 1,uVar32,&local_b8,0,lVar28,0);
        uVar25 = 0;
        if (iVar10 == 0) goto LAB_100871f9d;
        if (0 < (int)uVar36) {
          puVar39 = &local_b8;
          lVar34 = lVar2;
          puVar38 = &local_78;
          lVar26 = 0;
          lVar8 = lVar1 - uVar37;
          while (lVar8 != 0) {
            uVar11 = puVar39[1];
            uVar5 = puVar39[2];
            uVar6 = puVar39[3];
            *puVar38 = *puVar38 ^ *puVar39;
            puVar38[1] = puVar38[1] ^ uVar11;
            puVar38[2] = puVar38[2] ^ uVar5;
            puVar38[3] = puVar38[3] ^ uVar6;
            puVar39 = puVar39 + 4;
            puVar38 = puVar38 + 4;
            lVar34 = lVar34 + -0x10;
            lVar26 = lVar1 - uVar37;
            lVar8 = lVar34;
          }
          if (lVar1 != lVar26) {
            uVar11 = (uint)lVar26;
            if ((uVar36 - uVar11 & 1) != 0) {
              pbVar30 = (byte *)((long)auStack_74 + lVar26 + -4);
              *pbVar30 = *pbVar30 ^ *(byte *)((long)auStack_b4 + lVar26 + -4);
              lVar26 = lVar26 + 1;
            }
            if (uVar29 != uVar11) {
              pbVar30 = (byte *)((long)auStack_b4 + lVar26 + -3);
              pbVar35 = (byte *)((long)auStack_74 + lVar26 + -3);
              iVar10 = (uVar36 + 1) - ((int)lVar26 + 1);
              do {
                pbVar35[-1] = pbVar35[-1] ^ pbVar30[-1];
                *pbVar35 = *pbVar35 ^ *pbVar30;
                pbVar30 = pbVar30 + 2;
                pbVar35 = pbVar35 + 2;
                iVar10 = iVar10 + -2;
              } while (iVar10 != 0);
            }
          }
        }
        local_78._0_1_ = (byte)local_78 | 0x80;
        pbVar30 = (byte *)((long)auStack_74 + (long)(int)(uVar36 - 1) + -4);
        *pbVar30 = *pbVar30 | 1;
        lVar34 = FUN_10084bc20(&local_78,uVar40 & 0xffffffff,uVar20);
        if (lVar34 == 0) goto LAB_100871f9d;
        iVar9 = iVar9 + 1;
        iVar10 = FUN_100852eb0(uVar20,0x32,lVar16,local_c8,param_10);
        if (0 < iVar10) goto LAB_100871ac3;
        local_d8 = 0;
        uVar25 = 0;
        if (iVar10 != 0) goto LAB_100871f9d;
      } while( true );
    }
    goto LAB_100871fa9;
  }
  goto LAB_100871fc5;
LAB_100871ac3:
  local_d8 = 0;
LAB_100871acc:
  iVar10 = FUN_100852760(param_10,2,0);
  uVar25 = 0;
  if (iVar10 == 0) goto LAB_100871f9d;
  iVar12 = FUN_100852760(param_10,3,0);
  uVar25 = 0;
  iVar10 = 0;
  if (iVar12 == 0) goto LAB_100871f9d;
  do {
    if (iVar10 != 0) {
      iVar12 = FUN_100852760(param_10,0,iVar10);
      uVar25 = 0;
      if (iVar12 == 0) goto LAB_100871f9d;
    }
    FUN_10084bbb0(uVar19,0);
    iVar13 = (int)(uVar41 / 0xa0);
    iVar12 = 0;
    if (-1 < iVar13) {
      do {
        lVar34 = lVar33;
        if (0 < (int)uVar36) {
          do {
            pcVar3 = acStack_99 + lVar34;
            *pcVar3 = *pcVar3 + '\x01';
            if (*pcVar3 != '\0') break;
            lVar26 = lVar34 + -1;
            bVar4 = 0 < lVar34;
            lVar34 = lVar26;
          } while (lVar26 != 0 && bVar4);
        }
        uVar25 = 0;
        iVar14 = FUN_10088ad10(acStack_99 + 1,uVar32,&local_78,0,lVar28,0);
        if ((((iVar14 == 0) ||
             (lVar34 = FUN_10084bc20(&local_78,uVar40 & 0xffffffff,uVar17), lVar34 == 0)) ||
            (iVar14 = FUN_10084ffd0(uVar17,uVar17,iVar12 * ((uint)param_3 & 0xfffffff8)),
            iVar14 == 0)) || (iVar14 = FUN_100847940(uVar19,uVar19,uVar17), iVar14 == 0))
        goto LAB_100871f9d;
        bVar4 = iVar12 < iVar13;
        iVar12 = iVar12 + 1;
      } while (bVar4);
    }
    iVar12 = FUN_10084c1a0(uVar19,uVar31);
    uVar25 = 0;
    if (((iVar12 == 0) || (lVar34 = FUN_10084b950(uVar21,uVar19), lVar34 == 0)) ||
       ((iVar12 = FUN_100847940(uVar21,uVar21,uVar24), iVar12 == 0 ||
        (iVar12 = FUN_10084fd80(uVar17,uVar20), iVar12 == 0)))) goto LAB_100871f9d;
    uVar25 = 0;
    iVar12 = FUN_100847f70(0,uVar22,uVar21,uVar17,lVar16);
    if (iVar12 == 0) goto LAB_100871f9d;
    uVar27 = FUN_10084b310();
    iVar12 = FUN_100847e90(uVar17,uVar22,uVar27);
    if ((iVar12 == 0) || (iVar12 = FUN_100847e90(uVar23,uVar21,uVar17), iVar12 == 0))
    goto LAB_100871f9d;
    iVar12 = FUN_10084bf60(uVar23);
    if (-1 < iVar12) {
      iVar12 = FUN_100852eb0(uVar23,0x32,lVar16,1,param_10);
      if (0 < iVar12) {
        iVar9 = FUN_100852760(param_10,2,1);
        if (iVar9 == 0) goto LAB_100871f9d;
        uVar19 = FUN_10084b310();
        iVar9 = FUN_100847e90(uVar24,uVar23,uVar19);
        if (iVar9 == 0) goto LAB_100871f9d;
        uVar25 = 0;
        iVar9 = FUN_100847f70(uVar17,0,uVar24,uVar20,lVar16);
        if ((((iVar9 == 0) || (iVar9 = FUN_10084bbb0(uVar24,2), iVar9 == 0)) ||
            (iVar9 = FUN_100857fe0(lVar15,uVar23,lVar16), iVar9 == 0)) ||
           (iVar9 = FUN_100848c40(puVar18,uVar24,uVar17,uVar23,lVar16,lVar15), iVar9 == 0))
        goto LAB_100871f9d;
        uVar36 = 2;
        goto LAB_100871e3e;
      }
      if (iVar12 != 0) goto LAB_100871f9d;
    }
    bVar4 = iVar10 < 0xfff;
    iVar10 = iVar10 + 1;
  } while (bVar4);
  goto LAB_100871647;
  while( true ) {
    uVar19 = FUN_10084b310();
    iVar9 = FUN_100847940(uVar24,uVar24,uVar19);
    if (iVar9 == 0) break;
    uVar36 = uVar36 + 1;
    iVar9 = FUN_100848c40(puVar18,uVar24,uVar17,uVar23,lVar16,lVar15);
    if (iVar9 == 0) break;
LAB_100871e3e:
    if (((*(int *)(puVar18 + 1) != 1) || (*(long *)*puVar18 != 1)) || (*(int *)(puVar18 + 2) != 0))
    {
      iVar9 = FUN_100852760(param_10,3,1);
      if (iVar9 != 0) {
        if (*(long *)(param_1 + 0x18) != 0) {
          FUN_10084b4b0();
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          FUN_10084b4b0();
        }
        if (*(long *)(param_1 + 0x28) != 0) {
          FUN_10084b4b0();
        }
        uVar17 = FUN_10084b840(uVar23);
        *(undefined8 *)(param_1 + 0x18) = uVar17;
        uVar17 = FUN_10084b840(uVar20);
        *(undefined8 *)(param_1 + 0x20) = uVar17;
        lVar28 = FUN_10084b840(puVar18);
        *(long *)(param_1 + 0x28) = lVar28;
        if (((*(long *)(param_1 + 0x18) != 0) && (lVar28 != 0)) && (*(long *)(param_1 + 0x20) != 0))
        {
          if (param_8 != (int *)0x0) {
            *param_8 = iVar10;
          }
          if (param_9 != (ulong *)0x0) {
            *param_9 = (ulong)uVar36;
          }
          uVar25 = 1;
          if (param_7 != (void *)0x0) {
            _memcpy(param_7,local_58,uVar32);
            uVar25 = 1;
          }
        }
      }
      break;
    }
  }
LAB_100871f9d:
  if (lVar16 != 0) {
LAB_100871fa9:
    FUN_10084cb40(lVar16);
    FUN_10084c8b0(lVar16);
  }
  if (lVar15 == 0) goto LAB_100871fcd;
LAB_100871fc5:
  FUN_100857f90(lVar15);
LAB_100871fcd:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return uVar25;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

