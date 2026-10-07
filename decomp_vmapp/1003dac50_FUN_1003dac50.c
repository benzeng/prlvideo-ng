
undefined8 FUN_1003dac50(uint *param_1,int *param_2,uint *param_3,int *param_4)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  void *pvVar19;
  undefined1 *puVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  uint uVar27;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  uint local_44;
  long local_38;
  ulong uVar28;
  
  uVar6 = *param_1;
  bVar5 = (&DAT_100b3f717)[(ulong)uVar6 * 8];
  uVar7 = *param_3;
  uVar27 = param_2[2] - *param_2;
  uVar28 = (ulong)uVar27;
  iVar8 = param_4[2];
  iVar9 = *param_4;
  uVar17 = iVar8 - iVar9;
  iVar10 = param_2[3];
  iVar11 = param_2[1];
  uVar25 = (uVar17 + uVar27 * 2) * 4;
  lVar13 = *(long *)(param_1 + 4);
  local_38 = *(long *)(param_3 + 4);
  local_44 = param_4[1];
  uVar12 = param_4[3];
  pvVar19 = operator_new__((ulong)uVar25);
  iVar21 = param_2[1];
  uVar26 = (ulong)((uint)bVar5 * *param_2 + param_1[3] * iVar21);
  uVar18 = uVar12 - local_44;
  DAT_1011bbc70 = pvVar19;
  DAT_1011bbc78 = uVar25;
  if (local_44 <= uVar12 && uVar18 != 0) {
    pvVar1 = (void *)((long)pvVar19 + uVar28 * 4);
    pvVar2 = (void *)((long)pvVar19 + uVar28 * 8);
    local_38 = local_38 +
               (ulong)(param_3[3] * param_4[1] +
                      (*(uint *)(&DAT_100b3f714 + (ulong)uVar7 * 8) >> 0x18) * *param_4);
    fVar29 = 0.0;
    while( true ) {
      uVar25 = (param_2[3] - iVar21) - 1;
      iVar14 = (int)(long)fVar29;
      if (iVar14 + 1U <= uVar25) {
        uVar25 = iVar14 + 1U;
      }
      if ((ulong)uVar6 - 0x53 < 0x11) {
        FUN_1003ca660(param_1,pvVar19,*param_2,iVar21 + iVar14,uVar28);
        FUN_1003ca660(param_1,pvVar1,*param_2,uVar25 + param_2[1],uVar27);
      }
      else {
        FUN_1003cc7b0(iVar14 * param_1[3] + uVar26 + lVar13,*param_1,pvVar19,uVar28);
        FUN_1003cc7b0(uVar25 * param_1[3] + uVar26 + lVar13,*param_1,pvVar1,uVar27);
      }
      fVar16 = DAT_100b44ca0;
      fVar15 = DAT_100b39678;
      if (iVar8 != iVar9) {
        fVar38 = fVar29 - (float)((long)fVar29 & 0xffffffff);
        fVar37 = DAT_100b39678 - fVar38;
        fVar31 = 0.0;
        puVar20 = (undefined1 *)((long)pvVar19 + uVar28 * 8 + 3);
        uVar25 = uVar17;
        do {
          uVar22 = (int)(long)fVar31 + 1;
          if (uVar27 - 1 < uVar22) {
            uVar22 = uVar27 - 1;
          }
          uVar23 = (long)fVar31 & 0xffffffff;
          fVar32 = fVar31 - (float)uVar23;
          uVar24 = (ulong)uVar22;
          lVar3 = uVar24 + uVar28;
          lVar4 = uVar23 + uVar28;
          fVar33 = fVar15 - fVar32;
          fVar34 = ((float)*(byte *)((long)pvVar19 + uVar23 * 4 + 2) * fVar33 +
                   (float)*(byte *)((long)pvVar19 + uVar24 * 4 + 2) * fVar32) * fVar37 +
                   ((float)*(byte *)((long)pvVar19 + lVar4 * 4 + 2) * fVar33 +
                   (float)*(byte *)((long)pvVar19 + lVar3 * 4 + 2) * fVar32) * fVar38;
          fVar30 = 0.0;
          if (0.0 <= fVar34) {
            fVar30 = fVar34;
          }
          fVar35 = (float)(-(uint)(fVar16 < fVar30) & (uint)fVar16);
          fVar36 = fVar35;
          if (fVar30 <= fVar16) {
            fVar36 = fVar34;
          }
          puVar20[-1] = (char)(int)(float)(-(uint)(fVar34 < 0.0) & (uint)fVar35 |
                                          ~-(uint)(fVar34 < 0.0) & (uint)fVar36);
          fVar34 = ((float)*(byte *)((long)pvVar19 + uVar23 * 4 + 1) * fVar33 +
                   (float)*(byte *)((long)pvVar19 + uVar24 * 4 + 1) * fVar32) * fVar37 +
                   ((float)*(byte *)((long)pvVar19 + lVar4 * 4 + 1) * fVar33 +
                   (float)*(byte *)((long)pvVar19 + lVar3 * 4 + 1) * fVar32) * fVar38;
          fVar30 = 0.0;
          if (0.0 <= fVar34) {
            fVar30 = fVar34;
          }
          fVar35 = (float)(-(uint)(fVar16 < fVar30) & (uint)fVar16);
          fVar36 = fVar35;
          if (fVar30 <= fVar16) {
            fVar36 = fVar34;
          }
          puVar20[-2] = (char)(int)(float)(-(uint)(fVar34 < 0.0) & (uint)fVar35 |
                                          ~-(uint)(fVar34 < 0.0) & (uint)fVar36);
          fVar34 = ((float)*(byte *)((long)pvVar19 + uVar23 * 4) * fVar33 +
                   (float)*(byte *)((long)pvVar19 + uVar24 * 4) * fVar32) * fVar37 +
                   ((float)*(byte *)((long)pvVar19 + lVar4 * 4) * fVar33 +
                   (float)*(byte *)((long)pvVar19 + lVar3 * 4) * fVar32) * fVar38;
          fVar30 = 0.0;
          if (0.0 <= fVar34) {
            fVar30 = fVar34;
          }
          fVar35 = (float)(-(uint)(fVar16 < fVar30) & (uint)fVar16);
          fVar36 = fVar35;
          if (fVar30 <= fVar16) {
            fVar36 = fVar34;
          }
          puVar20[-3] = (char)(int)(float)(-(uint)(fVar34 < 0.0) & (uint)fVar35 |
                                          ~-(uint)(fVar34 < 0.0) & (uint)fVar36);
          fVar32 = ((float)*(byte *)((long)pvVar19 + uVar23 * 4 + 3) * fVar33 +
                   (float)*(byte *)((long)pvVar19 + uVar24 * 4 + 3) * fVar32) * fVar37 +
                   ((float)*(byte *)((long)pvVar19 + lVar4 * 4 + 3) * fVar33 +
                   (float)*(byte *)((long)pvVar19 + lVar3 * 4 + 3) * fVar32) * fVar38;
          fVar30 = 0.0;
          if (0.0 <= fVar32) {
            fVar30 = fVar32;
          }
          fVar34 = (float)(-(uint)(fVar16 < fVar30) & (uint)fVar16);
          fVar33 = fVar34;
          if (fVar30 <= fVar16) {
            fVar33 = fVar32;
          }
          *puVar20 = (char)(int)(float)(-(uint)(fVar32 < 0.0) & (uint)fVar34 |
                                       ~-(uint)(fVar32 < 0.0) & (uint)fVar33);
          fVar31 = fVar31 + (float)uVar28 / (float)uVar17;
          puVar20 = puVar20 + 4;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
      if ((ulong)uVar7 - 0x53 < 0x11) {
        FUN_1003cb6a0(pvVar2,param_3,*param_4,local_44,uVar17);
      }
      else {
        FUN_1003ce230(pvVar2,*param_3,local_38,uVar17);
      }
      local_44 = local_44 + 1;
      if (local_44 == uVar12) break;
      fVar29 = fVar29 + (float)(uint)(iVar10 - iVar11) / (float)uVar18;
      local_38 = local_38 + (ulong)param_3[3];
      iVar21 = param_2[1];
    }
  }
  if ((DAT_1011bbc78 != 0) && (DAT_1011bbc70 != (void *)0x0)) {
    operator_delete__(DAT_1011bbc70);
  }
  DAT_1011bbc78 = 0;
  return 1;
}

