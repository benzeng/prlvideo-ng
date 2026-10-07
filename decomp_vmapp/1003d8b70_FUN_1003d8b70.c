
undefined8 FUN_1003d8b70(undefined8 param_1,uint *param_2,uint *param_3,int *param_4)

{
  void *pvVar1;
  void *pvVar2;
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
  float fVar13;
  float fVar14;
  uint uVar15;
  void *pvVar16;
  ulong uVar17;
  undefined1 *puVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  iVar3 = *param_4;
  uVar4 = param_2[2];
  uVar5 = *param_2;
  uVar6 = param_2[1];
  iVar7 = param_4[2];
  uVar19 = iVar7 - iVar3;
  uVar8 = param_2[3];
  uVar25 = uVar6 & 0xfffffffc;
  uVar31 = uVar5 & 0xfffffffc;
  iVar29 = (uVar4 + 3 & 0xfffffffc) - uVar31;
  uVar26 = (uVar19 + iVar29 * 8) * 4;
  lVar23 = *(long *)(param_3 + 4);
  uVar27 = param_4[1];
  uVar9 = *param_3;
  uVar10 = param_4[3];
  pvVar16 = operator_new__((ulong)uVar26);
  uVar17 = (ulong)(uint)(iVar29 * 4);
  pvVar1 = (void *)((long)pvVar16 + uVar17 * 4);
  iVar11 = *param_4;
  iVar12 = param_4[1];
  uVar28 = *param_3;
  uVar15 = param_3[3];
  DAT_1011bbc70 = pvVar16;
  DAT_1011bbc78 = uVar26;
  FUN_1003cff00(param_1,pvVar16,uVar17,uVar31,uVar25,param_2[2] - uVar31);
  FUN_1003cff00(param_1,pvVar1,uVar17,uVar31,uVar25 + 4,param_2[2] - uVar31);
  uVar26 = uVar10 - uVar27;
  if (uVar27 <= uVar10 && uVar26 != 0) {
    lVar23 = lVar23 + (ulong)(uVar15 * iVar12 +
                             (*(uint *)(&DAT_100b3f714 + (ulong)uVar28 * 8) >> 0x18) * iVar11);
    pvVar2 = (void *)((long)pvVar16 + (ulong)(uint)(iVar29 * 8) * 4);
    uVar28 = (uVar4 - uVar5) - 1;
    fVar32 = 0.0;
    do {
      uVar15 = param_2[1];
      uVar30 = (param_2[3] - uVar15) - 1;
      iVar11 = (int)(long)fVar32;
      if (iVar11 + 1U <= uVar30) {
        uVar30 = iVar11 + 1U;
      }
      if (uVar25 + 8 <= uVar30 + uVar15) {
        uVar25 = uVar15 + iVar11 & 0xfffffffc;
        FUN_1003cff00(param_1,pvVar16,uVar17,uVar31,uVar25,param_2[2] - uVar31);
        FUN_1003cff00(param_1,pvVar1,uVar17,uVar31,uVar25 + 4,param_2[2] - uVar31);
        uVar15 = param_2[1];
      }
      fVar14 = DAT_100b44ca0;
      fVar13 = DAT_100b39678;
      if (iVar7 != iVar3) {
        fVar40 = fVar32 - (float)((long)fVar32 & 0xffffffff);
        fVar41 = DAT_100b39678 - fVar40;
        fVar33 = 0.0;
        puVar18 = (undefined1 *)
                  ((long)pvVar16 +
                  (ulong)((uVar4 * 8 + 0x18 & 0xffffffe0) + (uVar5 & 0x1ffffffc) * -8) * 4 + 3);
        uVar20 = uVar19;
        do {
          iVar12 = (int)(long)fVar33;
          uVar22 = iVar12 + 1;
          if (uVar28 < uVar22) {
            uVar22 = uVar28;
          }
          fVar35 = fVar33 - (float)((long)fVar33 & 0xffffffff);
          uVar24 = (ulong)(uVar22 + ((uVar30 - uVar25) + uVar15) * iVar29 + (uVar5 - uVar31));
          uVar21 = (ulong)(iVar12 + ((iVar11 - uVar25) + uVar15) * iVar29 + (uVar5 - uVar31));
          fVar34 = fVar13 - fVar35;
          fVar36 = (float)*(byte *)((long)pvVar16 + uVar21 * 4 + 2) * fVar34 +
                   (float)*(byte *)((long)pvVar16 + uVar24 * 4 + 2) * fVar35;
          fVar37 = fVar36 * fVar41 + fVar40 * fVar36;
          fVar36 = 0.0;
          if (0.0 <= fVar37) {
            fVar36 = fVar37;
          }
          fVar38 = (float)(-(uint)(fVar14 < fVar36) & (uint)fVar14);
          fVar39 = fVar38;
          if (fVar36 <= fVar14) {
            fVar39 = fVar37;
          }
          puVar18[-1] = (char)(int)(float)(-(uint)(fVar37 < 0.0) & (uint)fVar38 |
                                          ~-(uint)(fVar37 < 0.0) & (uint)fVar39);
          fVar36 = (float)*(byte *)((long)pvVar16 + uVar21 * 4 + 1) * fVar34 +
                   (float)*(byte *)((long)pvVar16 + uVar24 * 4 + 1) * fVar35;
          fVar37 = fVar36 * fVar41 + fVar40 * fVar36;
          fVar36 = 0.0;
          if (0.0 <= fVar37) {
            fVar36 = fVar37;
          }
          fVar38 = (float)(-(uint)(fVar14 < fVar36) & (uint)fVar14);
          fVar39 = fVar38;
          if (fVar36 <= fVar14) {
            fVar39 = fVar37;
          }
          puVar18[-2] = (char)(int)(float)(-(uint)(fVar37 < 0.0) & (uint)fVar38 |
                                          ~-(uint)(fVar37 < 0.0) & (uint)fVar39);
          fVar36 = (float)*(byte *)((long)pvVar16 + uVar21 * 4) * fVar34 +
                   (float)*(byte *)((long)pvVar16 + uVar24 * 4) * fVar35;
          fVar37 = fVar36 * fVar41 + fVar40 * fVar36;
          fVar36 = 0.0;
          if (0.0 <= fVar37) {
            fVar36 = fVar37;
          }
          fVar38 = (float)(-(uint)(fVar14 < fVar36) & (uint)fVar14);
          fVar39 = fVar38;
          if (fVar36 <= fVar14) {
            fVar39 = fVar37;
          }
          puVar18[-3] = (char)(int)(float)(-(uint)(fVar37 < 0.0) & (uint)fVar38 |
                                          ~-(uint)(fVar37 < 0.0) & (uint)fVar39);
          fVar36 = fVar34 * (float)*(byte *)((long)pvVar16 + uVar21 * 4 + 3) +
                   fVar35 * (float)*(byte *)((long)pvVar16 + uVar24 * 4 + 3);
          fVar34 = fVar36 * fVar41 + fVar40 * fVar36;
          fVar36 = 0.0;
          if (0.0 <= fVar34) {
            fVar36 = fVar34;
          }
          fVar37 = (float)(-(uint)(fVar14 < fVar36) & (uint)fVar14);
          fVar35 = fVar37;
          if (fVar36 <= fVar14) {
            fVar35 = fVar34;
          }
          *puVar18 = (char)(int)(float)(-(uint)(fVar34 < 0.0) & (uint)fVar37 |
                                       ~-(uint)(fVar34 < 0.0) & (uint)fVar35);
          fVar33 = fVar33 + (float)(uVar4 - uVar5) / (float)uVar19;
          puVar18 = puVar18 + 4;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      if ((ulong)uVar9 - 0x53 < 0x11) {
        FUN_1003cb6a0(pvVar2,param_3,*param_4,uVar27,uVar19);
      }
      else {
        FUN_1003ce230(pvVar2,*param_3,lVar23,uVar19);
      }
      lVar23 = lVar23 + (ulong)param_3[3];
      uVar27 = uVar27 + 1;
      fVar32 = fVar32 + (float)(uVar8 - uVar6) / (float)uVar26;
    } while (uVar27 != uVar10);
  }
  if ((DAT_1011bbc78 != 0) && (DAT_1011bbc70 != (void *)0x0)) {
    operator_delete__(DAT_1011bbc70);
  }
  DAT_1011bbc78 = 0;
  return 1;
}

