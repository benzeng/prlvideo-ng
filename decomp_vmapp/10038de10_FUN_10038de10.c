
undefined8 * FUN_10038de10(undefined8 *param_1,long param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  long lVar22;
  
  param_1[7] = DAT_100b3e898;
  param_1[6] = DAT_100b3e890;
  param_1[5] = DAT_100b3e888;
  param_1[4] = DAT_100b3e880;
  param_1[3] = DAT_100b3e878;
  param_1[2] = DAT_100b3e870;
  param_1[1] = DAT_100b3e868;
  *param_1 = DAT_100b3e860;
  fVar6 = *param_3;
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  fVar9 = param_3[3];
  fVar10 = param_3[4];
  fVar11 = param_3[5];
  fVar12 = param_3[6];
  fVar13 = param_3[7];
  fVar14 = param_3[8];
  fVar15 = param_3[9];
  fVar16 = param_3[10];
  fVar17 = param_3[0xb];
  fVar18 = param_3[0xc];
  fVar19 = param_3[0xd];
  fVar20 = param_3[0xe];
  fVar21 = param_3[0xf];
  lVar22 = 0;
  do {
    fVar2 = *(float *)(param_2 + lVar22);
    fVar3 = *(float *)(param_2 + 4 + lVar22);
    fVar4 = *(float *)(param_2 + 8 + lVar22);
    fVar5 = *(float *)(param_2 + 0xc + lVar22);
    pfVar1 = (float *)((long)param_1 + lVar22);
    *pfVar1 = fVar5 * fVar18 + fVar4 * fVar14 + fVar3 * fVar10 + fVar2 * fVar6;
    pfVar1[1] = fVar5 * fVar19 + fVar4 * fVar15 + fVar3 * fVar11 + fVar2 * fVar7;
    pfVar1[2] = fVar5 * fVar20 + fVar4 * fVar16 + fVar3 * fVar12 + fVar2 * fVar8;
    pfVar1[3] = fVar5 * fVar21 + fVar4 * fVar17 + fVar3 * fVar13 + fVar2 * fVar9;
    lVar22 = lVar22 + 0x10;
  } while (lVar22 != 0x40);
  return param_1;
}

