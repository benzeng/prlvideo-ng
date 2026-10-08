
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
_bn_mul_mont_gather5
          (ulong param_1,ulong *param_2,undefined1 (*param_3) [16],ulong *param_4,long *param_5,
          uint param_6,int param_7)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  bool bVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  undefined8 uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong *puVar38;
  ulong uVar39;
  ulong *puVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  long lVar44;
  long lVar45;
  ulong uVar46;
  bool bVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  int iVar50;
  int iVar52;
  int iVar53;
  int iVar54;
  undefined1 auVar51 [16];
  int iVar55;
  int iVar57;
  int iVar58;
  int iVar59;
  undefined1 auVar56 [16];
  int iVar60;
  int iVar61;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  undefined1 auVar62 [16];
  undefined1 auStack_138 [264];
  
  if (((param_6 & 3) == 0) && (7 < param_6)) {
    uVar34 = FUN_100c314d0();
    return uVar34;
  }
  uVar46 = (ulong)param_6;
  puVar40 = (ulong *)((ulong)(auStack_138 + (uVar46 + 2) * -8) & 0xfffffffffffffc00);
  puVar40[uVar46 + 1] = (ulong)&stack0xffffffffffffffd0;
  iVar33 = _UNK_100c3209c;
  iVar32 = _UNK_100c32098;
  iVar31 = _UNK_100c32094;
  iVar30 = _DAT_100c32090;
  uVar43 = (ulong)(puVar40 + (uVar46 - 0xb)) & 0xfffffffffffffff0;
  iVar50 = _DAT_100c32090 + _DAT_100c32080;
  iVar52 = _UNK_100c32094 + _UNK_100c32084;
  iVar53 = _UNK_100c32098 + _UNK_100c32088;
  iVar54 = _UNK_100c3209c + _UNK_100c3208c;
  bVar47 = _UNK_100c32084 == param_7;
  bVar17 = _UNK_100c32088 == param_7;
  bVar18 = _UNK_100c3208c == param_7;
  iVar55 = _DAT_100c32090 + iVar50;
  iVar57 = _UNK_100c32094 + iVar52;
  iVar58 = _UNK_100c32098 + iVar53;
  iVar59 = _UNK_100c3209c + iVar54;
  *(uint *)(uVar43 + 0x70) = -(uint)(_DAT_100c32080 == param_7);
  *(uint *)(uVar43 + 0x74) = -(uint)bVar47;
  *(uint *)(uVar43 + 0x78) = -(uint)bVar17;
  *(uint *)(uVar43 + 0x7c) = -(uint)bVar18;
  iVar60 = iVar30 + iVar55;
  iVar63 = iVar31 + iVar57;
  iVar65 = iVar32 + iVar58;
  iVar67 = iVar33 + iVar59;
  *(uint *)(uVar43 + 0x80) = -(uint)(iVar50 == param_7);
  *(uint *)(uVar43 + 0x84) = -(uint)(iVar52 == param_7);
  *(uint *)(uVar43 + 0x88) = -(uint)(iVar53 == param_7);
  *(uint *)(uVar43 + 0x8c) = -(uint)(iVar54 == param_7);
  iVar50 = iVar30 + iVar60;
  iVar52 = iVar31 + iVar63;
  iVar53 = iVar32 + iVar65;
  iVar54 = iVar33 + iVar67;
  *(uint *)(uVar43 + 0x90) = -(uint)(iVar55 == param_7);
  *(uint *)(uVar43 + 0x94) = -(uint)(iVar57 == param_7);
  *(uint *)(uVar43 + 0x98) = -(uint)(iVar58 == param_7);
  *(uint *)(uVar43 + 0x9c) = -(uint)(iVar59 == param_7);
  iVar55 = iVar30 + iVar50;
  iVar57 = iVar31 + iVar52;
  iVar58 = iVar32 + iVar53;
  iVar59 = iVar33 + iVar54;
  *(uint *)(uVar43 + 0xa0) = -(uint)(iVar60 == param_7);
  *(uint *)(uVar43 + 0xa4) = -(uint)(iVar63 == param_7);
  *(uint *)(uVar43 + 0xa8) = -(uint)(iVar65 == param_7);
  *(uint *)(uVar43 + 0xac) = -(uint)(iVar67 == param_7);
  iVar60 = iVar30 + iVar55;
  iVar63 = iVar31 + iVar57;
  iVar65 = iVar32 + iVar58;
  iVar67 = iVar33 + iVar59;
  *(uint *)(uVar43 + 0xb0) = -(uint)(iVar50 == param_7);
  *(uint *)(uVar43 + 0xb4) = -(uint)(iVar52 == param_7);
  *(uint *)(uVar43 + 0xb8) = -(uint)(iVar53 == param_7);
  *(uint *)(uVar43 + 0xbc) = -(uint)(iVar54 == param_7);
  iVar61 = iVar30 + iVar60;
  iVar64 = iVar31 + iVar63;
  iVar66 = iVar32 + iVar65;
  iVar68 = iVar33 + iVar67;
  *(uint *)(uVar43 + 0xc0) = -(uint)(iVar55 == param_7);
  *(uint *)(uVar43 + 0xc4) = -(uint)(iVar57 == param_7);
  *(uint *)(uVar43 + 200) = -(uint)(iVar58 == param_7);
  *(uint *)(uVar43 + 0xcc) = -(uint)(iVar59 == param_7);
  iVar50 = iVar30 + iVar61;
  iVar52 = iVar31 + iVar64;
  iVar53 = iVar32 + iVar66;
  iVar54 = iVar33 + iVar68;
  *(uint *)(uVar43 + 0xd0) = -(uint)(iVar60 == param_7);
  *(uint *)(uVar43 + 0xd4) = -(uint)(iVar63 == param_7);
  *(uint *)(uVar43 + 0xd8) = -(uint)(iVar65 == param_7);
  *(uint *)(uVar43 + 0xdc) = -(uint)(iVar67 == param_7);
  iVar55 = iVar30 + iVar50;
  iVar57 = iVar31 + iVar52;
  iVar58 = iVar32 + iVar53;
  iVar59 = iVar33 + iVar54;
  *(uint *)(uVar43 + 0xe0) = -(uint)(iVar61 == param_7);
  *(uint *)(uVar43 + 0xe4) = -(uint)(iVar64 == param_7);
  *(uint *)(uVar43 + 0xe8) = -(uint)(iVar66 == param_7);
  *(uint *)(uVar43 + 0xec) = -(uint)(iVar68 == param_7);
  iVar60 = iVar30 + iVar55;
  iVar63 = iVar31 + iVar57;
  iVar65 = iVar32 + iVar58;
  iVar67 = iVar33 + iVar59;
  *(uint *)(uVar43 + 0xf0) = -(uint)(iVar50 == param_7);
  *(uint *)(uVar43 + 0xf4) = -(uint)(iVar52 == param_7);
  *(uint *)(uVar43 + 0xf8) = -(uint)(iVar53 == param_7);
  *(uint *)(uVar43 + 0xfc) = -(uint)(iVar54 == param_7);
  iVar61 = iVar30 + iVar60;
  iVar64 = iVar31 + iVar63;
  iVar66 = iVar32 + iVar65;
  iVar68 = iVar33 + iVar67;
  *(uint *)(uVar43 + 0x100) = -(uint)(iVar55 == param_7);
  *(uint *)(uVar43 + 0x104) = -(uint)(iVar57 == param_7);
  *(uint *)(uVar43 + 0x108) = -(uint)(iVar58 == param_7);
  *(uint *)(uVar43 + 0x10c) = -(uint)(iVar59 == param_7);
  iVar50 = iVar30 + iVar61;
  iVar52 = iVar31 + iVar64;
  iVar53 = iVar32 + iVar66;
  iVar54 = iVar33 + iVar68;
  *(uint *)(uVar43 + 0x110) = -(uint)(iVar60 == param_7);
  *(uint *)(uVar43 + 0x114) = -(uint)(iVar63 == param_7);
  *(uint *)(uVar43 + 0x118) = -(uint)(iVar65 == param_7);
  *(uint *)(uVar43 + 0x11c) = -(uint)(iVar67 == param_7);
  iVar55 = iVar30 + iVar50;
  iVar57 = iVar31 + iVar52;
  iVar58 = iVar32 + iVar53;
  iVar59 = iVar33 + iVar54;
  auVar48._0_4_ = -(uint)(iVar50 == param_7);
  auVar48._4_4_ = -(uint)(iVar52 == param_7);
  auVar48._8_4_ = -(uint)(iVar53 == param_7);
  auVar48._12_4_ = -(uint)(iVar54 == param_7);
  *(uint *)(uVar43 + 0x120) = -(uint)(iVar61 == param_7);
  *(uint *)(uVar43 + 0x124) = -(uint)(iVar64 == param_7);
  *(uint *)(uVar43 + 0x128) = -(uint)(iVar66 == param_7);
  *(uint *)(uVar43 + 300) = -(uint)(iVar68 == param_7);
  iVar50 = iVar30 + iVar55;
  iVar52 = iVar31 + iVar57;
  iVar53 = iVar32 + iVar58;
  iVar54 = iVar33 + iVar59;
  auVar51._0_4_ = -(uint)(iVar55 == param_7);
  auVar51._4_4_ = -(uint)(iVar57 == param_7);
  auVar51._8_4_ = -(uint)(iVar58 == param_7);
  auVar51._12_4_ = -(uint)(iVar59 == param_7);
  *(undefined1 (*) [16])(uVar43 + 0x130) = auVar48;
  auVar56._0_4_ = -(uint)(iVar50 == param_7);
  auVar56._4_4_ = -(uint)(iVar52 == param_7);
  auVar56._8_4_ = -(uint)(iVar53 == param_7);
  auVar56._12_4_ = -(uint)(iVar54 == param_7);
  *(undefined1 (*) [16])(uVar43 + 0x140) = auVar51;
  auVar62._0_4_ = -(uint)(iVar30 + iVar50 == param_7);
  auVar62._4_4_ = -(uint)(iVar31 + iVar52 == param_7);
  auVar62._8_4_ = -(uint)(iVar32 + iVar53 == param_7);
  auVar62._12_4_ = -(uint)(iVar33 + iVar54 == param_7);
  *(undefined1 (*) [16])(uVar43 + 0x150) = auVar56;
  auVar49 = param_3[0xc];
  auVar2 = param_3[0xd];
  auVar3 = param_3[0xe];
  *(undefined1 (*) [16])(uVar43 + 0x160) = auVar62;
  auVar49 = auVar48 & auVar49 | auVar56 & auVar3 | *param_3 & *(undefined1 (*) [16])(uVar43 + 0x70)
            | param_3[2] & *(undefined1 (*) [16])(uVar43 + 0x90) |
            param_3[4] & *(undefined1 (*) [16])(uVar43 + 0xb0) |
            param_3[6] & *(undefined1 (*) [16])(uVar43 + 0xd0) |
            param_3[8] & *(undefined1 (*) [16])(uVar43 + 0xf0) |
            param_3[10] & *(undefined1 (*) [16])(uVar43 + 0x110) |
            auVar51 & auVar2 | auVar62 & param_3[0xf] |
            param_3[1] & *(undefined1 (*) [16])(uVar43 + 0x80) |
            param_3[3] & *(undefined1 (*) [16])(uVar43 + 0xa0) |
            param_3[5] & *(undefined1 (*) [16])(uVar43 + 0xc0) |
            param_3[7] & *(undefined1 (*) [16])(uVar43 + 0xe0) |
            param_3[9] & *(undefined1 (*) [16])(uVar43 + 0x100) |
            param_3[0xb] & *(undefined1 (*) [16])(uVar43 + 0x120);
  uVar39 = auVar49._0_8_ | auVar49._8_8_;
  param_3 = param_3 + 0x18;
  lVar45 = *param_5;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = *param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar39;
  uVar36 = SUB168(auVar49 * auVar3,8);
  uVar35 = SUB168(auVar49 * auVar3,0);
  uVar41 = lVar45 * uVar35;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *param_4;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar41;
  uVar43 = param_2[1];
  uVar37 = SUB168(auVar2 * auVar10,8) + (ulong)CARRY8(uVar35,SUB168(auVar2 * auVar10,0));
  uVar35 = 1;
  while( true ) {
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar37;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar36;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar37;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar43;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar39;
    auVar22 = auVar4 * auVar11 + auVar22;
    uVar43 = auVar22._0_8_;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar43;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar43;
    uVar36 = auVar22._8_8_;
    uVar42 = uVar35 + 1;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_4[uVar35];
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar41;
    if (uVar42 == uVar46) break;
    uVar43 = param_2[uVar42];
    auVar21 = auVar5 * auVar12 + auVar19 + auVar21;
    uVar37 = auVar21._8_8_;
    puVar40[uVar35 - 1] = auVar21._0_8_;
    uVar35 = uVar42;
  }
  uVar43 = *param_2;
  auVar24 = auVar5 * auVar12 + auVar23 + auVar24;
  uVar37 = auVar24._8_8_;
  puVar40[uVar35 - 1] = auVar24._0_8_;
  puVar40[uVar46 - 1] = uVar37 + uVar36;
  puVar40[uVar46] = (ulong)CARRY8(uVar37,uVar36);
  lVar44 = 1;
  do {
    puVar38 = (ulong *)((ulong)(puVar40 + uVar46 + 0x13) & 0xfffffffffffffff0);
    uVar41 = *(ulong *)(param_3[-8] + 8) & puVar38[-0xf] |
             *(ulong *)(param_3[-6] + 8) & puVar38[-0xb] | *(ulong *)(param_3[-4] + 8) & puVar38[-7]
             | *(ulong *)(param_3[-2] + 8) & puVar38[-3] | *(ulong *)(*param_3 + 8) & puVar38[1] |
             *(ulong *)(param_3[2] + 8) & puVar38[5] | *(ulong *)(param_3[4] + 8) & puVar38[9] |
             *(ulong *)(param_3[6] + 8) & puVar38[0xd] |
             *(ulong *)(param_3[-7] + 8) & puVar38[-0xd] | *(ulong *)(param_3[-5] + 8) & puVar38[-9]
             | *(ulong *)(param_3[-3] + 8) & puVar38[-5] | *(ulong *)(param_3[-1] + 8) & puVar38[-1]
             | *(ulong *)(param_3[1] + 8) & puVar38[3] | *(ulong *)(param_3[3] + 8) & puVar38[7] |
             *(ulong *)(param_3[5] + 8) & puVar38[0xb] | *(ulong *)(param_3[7] + 8) & puVar38[0xf] |
             *(ulong *)param_3[-8] & puVar38[-0x10] | *(ulong *)param_3[-6] & puVar38[-0xc] |
             *(ulong *)param_3[-4] & puVar38[-8] | *(ulong *)param_3[-2] & puVar38[-4] |
             *(ulong *)*param_3 & *puVar38 | *(ulong *)param_3[2] & puVar38[4] |
             *(ulong *)param_3[4] & puVar38[8] | *(ulong *)param_3[6] & puVar38[0xc] |
             *(ulong *)param_3[-7] & puVar38[-0xe] | *(ulong *)param_3[-5] & puVar38[-10] |
             *(ulong *)param_3[-3] & puVar38[-6] | *(ulong *)param_3[-1] & puVar38[-2] |
             *(ulong *)param_3[1] & puVar38[2] | *(ulong *)param_3[3] & puVar38[6] |
             *(ulong *)param_3[5] & puVar38[10] | *(ulong *)param_3[7] & puVar38[0xe];
    param_3 = param_3 + 0x10;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = *puVar40;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar43;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar41;
    auVar25 = auVar6 * auVar13 + auVar25;
    uVar35 = auVar25._0_8_;
    uVar37 = auVar25._8_8_;
    uVar42 = lVar45 * uVar35;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = *param_4;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar42;
    uVar43 = param_2[1];
    uVar39 = SUB168(auVar7 * auVar14,8) + (ulong)CARRY8(uVar35,SUB168(auVar7 * auVar14,0));
    uVar35 = puVar40[1];
    uVar36 = 1;
    while( true ) {
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar39;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar35;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar37;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar39;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar43;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar41;
      auVar28 = auVar8 * auVar15 + auVar27 + auVar28;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = auVar28._0_8_;
      uVar37 = auVar28._8_8_;
      uVar1 = uVar36 + 1;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_4[uVar36];
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar42;
      auVar9 = auVar9 * auVar16;
      if (uVar1 == uVar46) break;
      uVar43 = param_2[uVar1];
      auVar26 = auVar9 + auVar20 + auVar26;
      uVar35 = puVar40[uVar1];
      uVar39 = auVar26._8_8_;
      puVar40[uVar36 - 1] = auVar26._0_8_;
      uVar36 = uVar1;
    }
    uVar43 = *param_2;
    auVar49 = auVar28 + auVar9 + auVar29;
    uVar35 = puVar40[uVar1];
    puVar40[uVar36 - 1] = auVar49._0_8_;
    uVar36 = auVar49._8_8_;
    puVar40[uVar46 - 1] = uVar36 + uVar35;
    puVar40[uVar46] =
         (ulong)CARRY8(auVar9._8_8_ + (ulong)CARRY8(uVar39,auVar9._0_8_) +
                       (ulong)CARRY8(uVar39 + auVar9._0_8_,auVar28._0_8_),uVar37) +
         (ulong)CARRY8(uVar36,uVar35);
    lVar44 = lVar44 + 1;
  } while (lVar44 < (long)uVar46);
  bVar47 = false;
  lVar45 = 0;
  uVar43 = *puVar40;
  uVar35 = uVar46;
  do {
    uVar36 = (ulong)bVar47;
    uVar37 = uVar43 - param_4[lVar45];
    bVar47 = uVar43 < param_4[lVar45] || uVar37 < uVar36;
    *(ulong *)(param_1 + lVar45 * 8) = uVar37 - uVar36;
    uVar43 = puVar40[lVar45 + 1];
    lVar45 = lVar45 + 1;
    uVar35 = uVar35 - 1;
  } while (uVar35 != 0);
  uVar35 = 0;
  do {
    uVar34 = *(undefined8 *)
              (((ulong)puVar40 & uVar43 - bVar47 | param_1 & ~(uVar43 - bVar47)) + uVar35 * 8);
    puVar40[uVar35] = uVar35;
    *(undefined8 *)(param_1 + uVar35 * 8) = uVar34;
    uVar35 = uVar35 + 1;
    uVar46 = uVar46 - 1;
  } while (uVar46 != 0);
  return 1;
}

