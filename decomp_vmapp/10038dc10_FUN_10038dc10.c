
undefined8 FUN_10038dc10(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[5];
  fVar14 = param_1[10];
  fVar16 = param_1[6];
  fVar4 = param_1[9];
  fVar11 = fVar3 * fVar14 - fVar16 * fVar4;
  fVar5 = param_1[4];
  fVar6 = param_1[8];
  fVar10 = fVar14 * fVar5 - fVar16 * fVar6;
  fVar7 = param_1[2];
  fVar15 = fVar4 * fVar5 - fVar3 * fVar6;
  fVar12 = fVar7 * fVar15 + (fVar1 * fVar11 - fVar2 * fVar10);
  if ((fVar12 != 0.0) || (NAN(fVar12))) {
    fVar12 = DAT_100b39678 / fVar12;
    fVar11 = fVar11 * fVar12;
    *param_2 = fVar11;
    fVar13 = (float)(DAT_100b3f6c0 ^ (uint)fVar12);
    fVar17 = (fVar14 * fVar2 - fVar4 * fVar7) * fVar13;
    param_2[4] = fVar17;
    fVar18 = (fVar16 * fVar2 - fVar3 * fVar7) * fVar12;
    param_2[8] = fVar18;
    fVar10 = fVar10 * fVar13;
    param_2[1] = fVar10;
    fVar14 = (fVar1 * fVar14 - fVar6 * fVar7) * fVar12;
    param_2[5] = fVar14;
    fVar16 = (fVar1 * fVar16 - fVar7 * fVar5) * fVar13;
    param_2[9] = fVar16;
    fVar15 = fVar15 * fVar12;
    param_2[2] = fVar15;
    fVar13 = fVar13 * (fVar1 * fVar4 - fVar2 * fVar6);
    param_2[6] = fVar13;
    fVar12 = fVar12 * (fVar1 * fVar3 - fVar2 * fVar5);
    param_2[10] = fVar12;
    uVar8 = DAT_100b3f6c0;
    uVar9 = 1;
    if (param_3 == 4) {
      param_2[0xc] = (float)((uint)(fVar18 * param_1[0xb] +
                                   fVar17 * param_1[7] + fVar11 * param_1[3]) ^ DAT_100b3f6c0);
      param_2[0xd] = (float)((uint)(fVar16 * param_1[0xb] +
                                   fVar14 * param_1[7] + fVar10 * param_1[3]) ^ uVar8);
      param_2[0xe] = (float)((uint)(fVar12 * param_1[0xb] +
                                   fVar13 * param_1[7] + fVar15 * param_1[3]) ^ uVar8);
    }
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}

