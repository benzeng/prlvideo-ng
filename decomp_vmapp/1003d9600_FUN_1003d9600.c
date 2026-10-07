
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1003d9600(undefined8 param_1,uint *param_2,uint *param_3,int *param_4)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  void *pvVar23;
  void *pvVar24;
  void *pvVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  int iVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  undefined1 auVar50 [16];
  float fVar51;
  
  iVar3 = *param_4;
  uVar4 = param_2[2];
  uVar5 = *param_2;
  uVar6 = param_2[1];
  iVar7 = param_4[2];
  uVar27 = iVar7 - iVar3;
  uVar8 = param_2[3];
  uVar29 = uVar6 & 0xfffffffc;
  uVar33 = uVar5 & 0xfffffffc;
  iVar37 = (uVar4 + 3 & 0xfffffffc) - uVar33;
  uVar30 = (uVar27 + iVar37 * 8) * 0x10;
  lVar32 = *(long *)(param_3 + 4);
  uVar34 = param_4[1];
  uVar9 = *param_3;
  uVar10 = param_4[3];
  pvVar23 = operator_new__((ulong)uVar30);
  pvVar24 = (void *)((ulong)(uint)(iVar37 * 4) * 0x10 + (long)pvVar23);
  iVar11 = *param_4;
  iVar12 = param_4[1];
  uVar35 = *param_3;
  uVar22 = param_3[3];
  iVar38 = iVar37 * 0x10;
  DAT_1011bbc70 = pvVar23;
  DAT_1011bbc78 = uVar30;
  FUN_1003d14f0(param_1,pvVar23,iVar38,uVar33,uVar29,param_2[2] - uVar33);
  FUN_1003d14f0(param_1,pvVar24,iVar38,uVar33,uVar29 + 4,param_2[2] - uVar33);
  uVar30 = uVar10 - uVar34;
  if (uVar34 <= uVar10 && uVar30 != 0) {
    lVar32 = lVar32 + (ulong)(uVar22 * iVar12 +
                             (*(uint *)(&DAT_100b3f714 + (ulong)uVar35 * 8) >> 0x18) * iVar11);
    pvVar25 = (void *)((ulong)(uint)(iVar37 * 8) * 0x10 + (long)pvVar23);
    uVar35 = (uVar4 - uVar5) - 1;
    fVar39 = 0.0;
    do {
      uVar22 = param_2[1];
      uVar36 = (param_2[3] - uVar22) - 1;
      iVar11 = (int)(long)fVar39;
      if (iVar11 + 1U <= uVar36) {
        uVar36 = iVar11 + 1U;
      }
      if (uVar29 + 8 <= uVar36 + uVar22) {
        uVar29 = uVar22 + iVar11 & 0xfffffffc;
        FUN_1003d14f0(param_1,pvVar23,iVar38,uVar33,uVar29,param_2[2] - uVar33);
        FUN_1003d14f0(param_1,pvVar24,iVar38,uVar33,uVar29 + 4,param_2[2] - uVar33);
        uVar22 = param_2[1];
      }
      fVar21 = _UNK_100b3f6ac;
      fVar20 = _UNK_100b3f6a8;
      fVar19 = _UNK_100b3f6a4;
      fVar18 = _DAT_100b3f6a0;
      fVar17 = DAT_100b39678;
      if (iVar7 != iVar3) {
        fVar51 = fVar39 - (float)((long)fVar39 & 0xffffffff);
        fVar40 = DAT_100b39678 - fVar51;
        fVar41 = 0.0;
        puVar26 = (uint *)((ulong)((uVar4 * 8 + 0x18 & 0xffffffe0) + (uVar5 & 0x1ffffffc) * -8) *
                           0x10 + (long)pvVar23);
        uVar28 = uVar27;
        do {
          iVar12 = (int)(long)fVar41;
          uVar31 = iVar12 + 1;
          if (uVar35 < uVar31) {
            uVar31 = uVar35;
          }
          fVar46 = fVar41 - (float)((long)fVar41 & 0xffffffff);
          fVar42 = fVar17 - fVar46;
          pfVar1 = (float *)((long)pvVar23 +
                            (ulong)(uVar31 + ((uVar36 - uVar29) + uVar22) * iVar37 +
                                             (uVar5 - uVar33)) * 0x10);
          pfVar2 = (float *)((long)pvVar23 +
                            (ulong)(iVar12 + ((iVar11 - uVar29) + uVar22) * iVar37 +
                                             (uVar5 - uVar33)) * 0x10);
          fVar43 = fVar42 * *pfVar2 + fVar46 * *pfVar1;
          fVar44 = fVar42 * pfVar2[1] + fVar46 * pfVar1[1];
          fVar45 = fVar42 * pfVar2[2] + fVar46 * pfVar1[2];
          fVar46 = fVar42 * pfVar2[3] + fVar46 * pfVar1[3];
          fVar42 = fVar43 * fVar40 + fVar43 * fVar51;
          fVar43 = fVar44 * fVar40 + fVar44 * fVar51;
          fVar44 = fVar45 * fVar40 + fVar45 * fVar51;
          fVar45 = fVar46 * fVar40 + fVar46 * fVar51;
          auVar50._4_4_ = fVar43;
          auVar50._0_4_ = fVar42;
          auVar50._8_4_ = fVar44;
          auVar50._12_4_ = fVar45;
          auVar50 = maxps(ZEXT816(0),auVar50);
          bVar13 = fVar18 < auVar50._0_4_;
          bVar14 = fVar19 < auVar50._4_4_;
          bVar15 = fVar20 < auVar50._8_4_;
          bVar16 = fVar21 < auVar50._12_4_;
          uVar31 = -(uint)(fVar42 < 0.0 || bVar13);
          uVar47 = -(uint)(fVar43 < 0.0 || bVar14);
          uVar48 = -(uint)(fVar44 < 0.0 || bVar15);
          uVar49 = -(uint)(fVar45 < 0.0 || bVar16);
          *puVar26 = ~uVar31 & (uint)fVar42 | -(uint)bVar13 & (uint)fVar18 & uVar31;
          puVar26[1] = ~uVar47 & (uint)fVar43 | -(uint)bVar14 & (uint)fVar19 & uVar47;
          puVar26[2] = ~uVar48 & (uint)fVar44 | -(uint)bVar15 & (uint)fVar20 & uVar48;
          puVar26[3] = ~uVar49 & (uint)fVar45 | -(uint)bVar16 & (uint)fVar21 & uVar49;
          fVar41 = fVar41 + (float)(uVar4 - uVar5) / (float)uVar27;
          puVar26 = puVar26 + 4;
          uVar28 = uVar28 - 1;
        } while (uVar28 != 0);
      }
      if ((ulong)uVar9 - 0x53 < 0x11) {
        FUN_1003cbda0(pvVar25,param_3,*param_4,uVar34,uVar27);
      }
      else {
        FUN_1003d2880(pvVar25,*param_3,lVar32,uVar27);
      }
      lVar32 = lVar32 + (ulong)param_3[3];
      uVar34 = uVar34 + 1;
      fVar39 = fVar39 + (float)(uVar8 - uVar6) / (float)uVar30;
    } while (uVar34 != uVar10);
  }
  if ((DAT_1011bbc78 != 0) && (DAT_1011bbc70 != (void *)0x0)) {
    operator_delete__(DAT_1011bbc70);
  }
  DAT_1011bbc78 = 0;
  return 1;
}

