
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100359c40(undefined8 *param_1,long param_2,undefined1 (*param_3) [16],uint param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 (*pauVar9) [16];
  undefined8 *puVar10;
  ulong uVar11;
  short *psVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 auStack_60 [3];
  undefined8 uStack_48;
  ulong local_40;
  long local_38;
  
  puVar13 = &uStack_48;
  lVar21 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar21;
  if (param_4 != 0) {
    lVar4 = -((ulong)(param_4 + 1) + 0xf & 0xfffffffffffffff0);
    puVar13 = (undefined8 *)((long)&uStack_48 + lVar4);
    uVar19 = (ulong)(param_4 - 1);
    uVar11 = uVar19 + 1 & 0x1fffffff8;
    uVar16 = 0;
    if (uVar11 != 0) {
      uVar15 = uVar19 + 1 & 0xfffffffffffffff8;
      puVar6 = puVar13;
      pauVar9 = param_3;
      do {
        auVar23 = *pauVar9;
        auVar22._0_2_ =
             -(ushort)(_DAT_100b3c090 < (short)(auVar23._0_2_ + _DAT_100b3c070 ^ _DAT_100b3c080));
        auVar22._2_2_ =
             -(ushort)(_UNK_100b3c092 < (short)(auVar23._2_2_ + _UNK_100b3c072 ^ _UNK_100b3c082));
        auVar22._4_2_ =
             -(ushort)(_UNK_100b3c094 < (short)(auVar23._4_2_ + _UNK_100b3c074 ^ _UNK_100b3c084));
        auVar22._6_2_ =
             -(ushort)(_UNK_100b3c096 < (short)(auVar23._6_2_ + _UNK_100b3c076 ^ _UNK_100b3c086));
        auVar22._8_2_ =
             -(ushort)(_UNK_100b3c098 < (short)(auVar23._8_2_ + _UNK_100b3c078 ^ _UNK_100b3c088));
        auVar22._10_2_ =
             -(ushort)(_UNK_100b3c09a < (short)(auVar23._10_2_ + _UNK_100b3c07a ^ _UNK_100b3c08a));
        auVar22._12_2_ =
             -(ushort)(_UNK_100b3c09c < (short)(auVar23._12_2_ + _UNK_100b3c07c ^ _UNK_100b3c08c));
        auVar22._14_2_ =
             -(ushort)(_UNK_100b3c09e < (short)(auVar23._14_2_ + _UNK_100b3c07e ^ _UNK_100b3c08e));
        auVar23 = pshufb(auVar22 & _DAT_100b3c0a0 | ~auVar22 & auVar23,_DAT_100b3c0b0);
        *puVar6 = auVar23._0_8_;
        pauVar9 = pauVar9 + 1;
        puVar6 = puVar6 + 1;
        uVar15 = uVar15 - 8;
        uVar16 = uVar11;
      } while (uVar15 != 0);
    }
    if (uVar19 + 1 != uVar16) {
      uVar14 = (uint)uVar16;
      if ((param_4 & 1) != 0) {
        uVar7 = 0x3f;
        if ((ushort)(*(short *)(*param_3 + uVar16 * 2) - 0x20U) < 0x5f) {
          uVar7 = (undefined1)*(short *)(*param_3 + uVar16 * 2);
        }
        *(undefined1 *)((long)puVar13 + uVar16) = uVar7;
        uVar16 = uVar16 + 1;
      }
      if (param_4 - 1 != uVar14) {
        puVar18 = (undefined1 *)((long)&uStack_48 + uVar16 + lVar4 + 1);
        psVar12 = (short *)(*param_3 + uVar16 * 2 + 2);
        iVar20 = (param_4 + 1) - ((int)uVar16 + 1);
        do {
          uVar7 = 0x3f;
          uVar8 = 0x3f;
          if ((ushort)(psVar12[-1] - 0x20U) < 0x5f) {
            uVar8 = (undefined1)psVar12[-1];
          }
          puVar18[-1] = uVar8;
          if ((ushort)(*psVar12 - 0x20U) < 0x5f) {
            uVar7 = (undefined1)*psVar12;
          }
          *puVar18 = uVar7;
          puVar18 = puVar18 + 2;
          psVar12 = psVar12 + 2;
          iVar20 = iVar20 + -2;
        } while (iVar20 != 0);
      }
    }
    *(undefined1 *)(uVar19 + 1 + (long)puVar13) = 0;
    if (0 < DAT_1011b55f8) {
      uVar14 = *(uint *)(param_2 + 0x14);
      *(undefined8 **)((long)auStack_60 + lVar4 + 8) = puVar13;
      *(undefined8 *)((long)auStack_60 + lVar4) = 0x100359df6;
      FUN_1008e3970("","LocalDevices",1,"D3D%d.%d: %s",(int)uVar14 >> 0x10,uVar14 & 0xffff);
      puVar13 = (undefined8 *)((long)&uStack_48 + lVar4);
    }
  }
  uVar2 = *param_1;
  uVar3 = param_1[1];
  local_40 = (ulong)param_4;
  puVar13[-1] = 0x100359e0c;
  FUN_1002adb30(uVar2,uVar3);
  iVar20 = *(int *)(param_2 + 0x14);
  if (0x9ffff < iVar20) {
    puVar13[-1] = 0x100359e28;
    pvVar5 = operator_new(0x12898);
    uVar2 = *param_1;
    uVar3 = param_1[7];
    puVar13[-1] = 0x100359e41;
    FUN_100344bc0(pvVar5,iVar20,uVar2,uVar3,param_1);
    uVar16 = local_40;
    param_1[8] = pvVar5;
    lVar4 = param_1[7];
    puVar13[-1] = 0x100359e5b;
    FUN_10036ba00(lVar4 + 0x10,param_3,uVar16);
    goto LAB_100359f0d;
  }
  if ((undefined8 *)param_1[3] == (undefined8 *)0x0) {
LAB_100359eaa:
    puVar13[-1] = 0x100359eb7;
    pvVar5 = operator_new(0xbc08);
    uVar2 = *param_1;
    uVar3 = param_1[6];
    puVar13[-1] = 0x100359ed1;
    FUN_1003334e0(pvVar5,param_2,uVar2,uVar3,param_1);
    puVar13[-1] = 0x100359ee2;
    puVar6 = (undefined8 *)FUN_10035b2c0(param_1 + 2,(int *)(param_2 + 8));
    *puVar6 = pvVar5;
  }
  else {
    iVar20 = *(int *)(param_2 + 8);
    puVar6 = (undefined8 *)param_1[3];
    puVar17 = param_1 + 3;
    do {
      while (puVar10 = puVar6, iVar20 <= *(int *)(puVar10 + 4)) {
        puVar6 = (undefined8 *)*puVar10;
        puVar17 = puVar10;
        if ((undefined8 *)*puVar10 == (undefined8 *)0x0) goto LAB_100359ea0;
      }
      puVar1 = puVar10 + 1;
      puVar10 = puVar17;
      puVar6 = (undefined8 *)*puVar1;
    } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
LAB_100359ea0:
    if ((puVar10 == param_1 + 3) || (iVar20 < *(int *)(puVar10 + 4))) goto LAB_100359eaa;
  }
  uVar16 = local_40;
  lVar21 = param_1[6];
  puVar13[-1] = 0x100359f02;
  FUN_10036ba00(lVar21 + 0x10,param_3,uVar16);
  lVar21 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_100359f0d:
  if (lVar21 != local_38) {
                    /* WARNING: Subroutine does not return */
    puVar13[-1] = &UNK_100359f29;
    ___stack_chk_fail();
  }
  return 1;
}

