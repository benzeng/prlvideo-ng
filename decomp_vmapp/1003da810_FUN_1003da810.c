
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1003da810(uint *param_1,int *param_2,uint *param_3,int *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  uint uVar25;
  void *pvVar26;
  uint *puVar27;
  int iVar28;
  ulong uVar29;
  ulong uVar30;
  uint uVar31;
  void *pvVar32;
  void *pvVar33;
  uint uVar34;
  uint uVar35;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  float fVar49;
  long local_58;
  uint local_48;
  ulong uVar36;
  
  uVar6 = *param_1;
  bVar5 = (&DAT_100b3f717)[(ulong)uVar6 * 8];
  uVar7 = *param_3;
  uVar35 = param_2[2] - *param_2;
  uVar36 = (ulong)uVar35;
  iVar8 = param_4[2];
  iVar9 = *param_4;
  uVar24 = iVar8 - iVar9;
  iVar10 = param_2[3];
  iVar11 = param_2[1];
  uVar34 = (uVar24 + uVar35 * 2) * 0x10;
  lVar13 = *(long *)(param_1 + 4);
  local_58 = *(long *)(param_3 + 4);
  local_48 = param_4[1];
  uVar12 = param_4[3];
  pvVar26 = operator_new__((ulong)uVar34);
  iVar28 = param_2[1];
  uVar30 = (ulong)((uint)bVar5 * *param_2 + param_1[3] * iVar28);
  uVar25 = uVar12 - local_48;
  DAT_1011bbc70 = pvVar26;
  DAT_1011bbc78 = uVar34;
  if (local_48 <= uVar12 && uVar25 != 0) {
    pvVar32 = (void *)(uVar36 * 0x10 + (long)pvVar26);
    pvVar33 = (void *)(uVar36 * 0x20 + (long)pvVar26);
    local_58 = local_58 +
               (ulong)(param_3[3] * param_4[1] +
                      (*(uint *)(&DAT_100b3f714 + (ulong)uVar7 * 8) >> 0x18) * *param_4);
    fVar37 = 0.0;
    while( true ) {
      uVar34 = (param_2[3] - iVar28) - 1;
      iVar18 = (int)(long)fVar37;
      if (iVar18 + 1U <= uVar34) {
        uVar34 = iVar18 + 1U;
      }
      if ((ulong)uVar6 - 0x53 < 0x11) {
        FUN_1003cad80(param_1,pvVar26,*param_2,iVar28 + iVar18,uVar36);
        FUN_1003cad80(param_1,pvVar32,*param_2,uVar34 + param_2[1],uVar35);
      }
      else {
        FUN_1003d57d0(iVar18 * param_1[3] + uVar30 + lVar13,*param_1,pvVar26,uVar36);
        FUN_1003d57d0(uVar34 * param_1[3] + uVar30 + lVar13,*param_1,pvVar32,uVar35);
      }
      fVar23 = DAT_100b39678;
      fVar22 = _UNK_100b2ea3c;
      fVar21 = _UNK_100b2ea38;
      fVar20 = _UNK_100b2ea34;
      fVar19 = _DAT_100b2ea30;
      if (iVar8 != iVar9) {
        fVar38 = fVar37 - (float)((long)fVar37 & 0xffffffff);
        fVar49 = DAT_100b39678 - fVar38;
        fVar39 = 0.0;
        puVar27 = (uint *)(uVar36 * 0x20 + (long)pvVar26);
        uVar34 = uVar24;
        do {
          uVar31 = (int)(long)fVar39 + 1;
          if (uVar35 - 1 < uVar31) {
            uVar31 = uVar35 - 1;
          }
          uVar29 = (long)fVar39 & 0xffffffff;
          fVar44 = fVar39 - (float)uVar29;
          fVar40 = fVar23 - fVar44;
          pfVar1 = (float *)((long)pvVar26 + (uVar31 + uVar36) * 0x10);
          pfVar2 = (float *)((long)pvVar26 + (uVar29 + uVar36) * 0x10);
          pfVar3 = (float *)((long)pvVar26 + (ulong)uVar31 * 0x10);
          pfVar4 = (float *)((long)pvVar26 + uVar29 * 0x10);
          fVar45 = (*pfVar4 * fVar40 + *pfVar3 * fVar44) * fVar49 +
                   (*pfVar2 * fVar40 + *pfVar1 * fVar44) * fVar38;
          fVar46 = (pfVar4[1] * fVar40 + pfVar3[1] * fVar44) * fVar49 +
                   (pfVar2[1] * fVar40 + pfVar1[1] * fVar44) * fVar38;
          fVar47 = (pfVar4[2] * fVar40 + pfVar3[2] * fVar44) * fVar49 +
                   (pfVar2[2] * fVar40 + pfVar1[2] * fVar44) * fVar38;
          fVar40 = (pfVar4[3] * fVar40 + pfVar3[3] * fVar44) * fVar49 +
                   (pfVar2[3] * fVar40 + pfVar1[3] * fVar44) * fVar38;
          auVar48._4_4_ = fVar46;
          auVar48._0_4_ = fVar45;
          auVar48._8_4_ = fVar47;
          auVar48._12_4_ = fVar40;
          auVar48 = maxps(ZEXT816(0),auVar48);
          bVar14 = fVar19 < auVar48._0_4_;
          bVar15 = fVar20 < auVar48._4_4_;
          bVar16 = fVar21 < auVar48._8_4_;
          bVar17 = fVar22 < auVar48._12_4_;
          uVar31 = -(uint)(fVar45 < 0.0 || bVar14);
          uVar41 = -(uint)(fVar46 < 0.0 || bVar15);
          uVar42 = -(uint)(fVar47 < 0.0 || bVar16);
          uVar43 = -(uint)(fVar40 < 0.0 || bVar17);
          *puVar27 = ~uVar31 & (uint)fVar45 | -(uint)bVar14 & (uint)fVar19 & uVar31;
          puVar27[1] = ~uVar41 & (uint)fVar46 | -(uint)bVar15 & (uint)fVar20 & uVar41;
          puVar27[2] = ~uVar42 & (uint)fVar47 | -(uint)bVar16 & (uint)fVar21 & uVar42;
          puVar27[3] = ~uVar43 & (uint)fVar40 | -(uint)bVar17 & (uint)fVar22 & uVar43;
          fVar39 = fVar39 + (float)uVar36 / (float)uVar24;
          puVar27 = puVar27 + 4;
          uVar34 = uVar34 - 1;
        } while (uVar34 != 0);
      }
      if ((ulong)uVar7 - 0x53 < 0x11) {
        FUN_1003cbda0(pvVar33,param_3,*param_4,local_48);
      }
      else {
        FUN_1003d2880(pvVar33,*param_3,local_58,uVar24);
      }
      local_48 = local_48 + 1;
      if (local_48 == uVar12) break;
      fVar37 = fVar37 + (float)(uint)(iVar10 - iVar11) / (float)uVar25;
      local_58 = local_58 + (ulong)param_3[3];
      iVar28 = param_2[1];
    }
  }
  if ((DAT_1011bbc78 != 0) && (DAT_1011bbc70 != (void *)0x0)) {
    operator_delete__(DAT_1011bbc70);
  }
  DAT_1011bbc78 = 0;
  return 1;
}

