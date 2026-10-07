
undefined8 FUN_10038bd20(undefined8 param_1,float *param_2,float *param_3,uint param_4)

{
  sbyte sVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar2 = FUN_10038e1f0(param_4);
  iVar3 = FUN_10038e210(param_4);
  if (iVar3 == 0) {
    uVar6 = (ulong)*(uint *)(&DAT_100b3e3b4 + (ulong)param_4 * 8);
    if ((*(uint *)(&DAT_100b3e3b4 + (ulong)param_4 * 8) & 0x10) == 0) {
      return 0;
    }
    fVar8 = DAT_100b3e284;
    if ((iVar2 != 0x1402) && (fVar8 = DAT_100b3e280, iVar2 != 0x1400)) {
      return 0;
    }
    fVar9 = fVar8;
    if (fVar8 <= *param_2) {
      fVar9 = *param_2;
    }
    *param_3 = fVar9;
    fVar9 = fVar8;
    if (fVar8 <= param_2[1]) {
      fVar9 = param_2[1];
    }
    param_3[1] = fVar9;
    fVar9 = fVar8;
    if (fVar8 <= param_2[2]) {
      fVar9 = param_2[2];
    }
    param_3[2] = fVar9;
    if (fVar8 <= param_2[3]) {
      fVar8 = param_2[3];
    }
    param_3[3] = fVar8;
    goto LAB_10038bf51;
  }
  uVar5 = 0;
  sVar1 = 0;
  switch(iVar2) {
  case 0x1400:
    uVar5 = 0x18;
    break;
  case 0x1401:
    sVar1 = 0x18;
  case 0x1405:
switchD_10038bd6f_caseD_1405:
    fVar9 = (float)(0xffffffff >> sVar1);
    fVar8 = *param_2;
    fVar4 = 0.0;
    fVar7 = 0.0;
    if (0.0 <= fVar8) {
      fVar7 = fVar9;
      if (fVar8 <= fVar9) {
        fVar7 = fVar8;
      }
      fVar7 = (float)(long)fVar7;
    }
    *param_3 = fVar7;
    fVar8 = param_2[1];
    if (0.0 <= fVar8) {
      fVar4 = fVar9;
      if (fVar8 <= fVar9) {
        fVar4 = fVar8;
      }
      fVar4 = (float)(long)fVar4;
    }
    param_3[1] = fVar4;
    fVar8 = param_2[2];
    uVar6 = 0;
    fVar4 = 0.0;
    if (0.0 <= fVar8) {
      fVar4 = fVar9;
      if (fVar8 <= fVar9) {
        fVar4 = fVar8;
      }
      fVar4 = (float)(long)fVar4;
    }
    param_3[2] = fVar4;
    fVar8 = param_2[3];
    if (0.0 <= fVar8) {
      if (fVar8 <= fVar9) {
        fVar9 = fVar8;
      }
      uVar6 = (ulong)fVar9;
    }
    param_3[3] = (float)uVar6;
    goto LAB_10038bf51;
  case 0x1402:
    uVar5 = 0x10;
    break;
  case 0x1403:
    sVar1 = 0x10;
    goto switchD_10038bd6f_caseD_1405;
  case 0x1404:
    break;
  default:
    goto switchD_10038bd6f_default;
  }
  fVar4 = (float)(-0x80000000 >> (sbyte)uVar5);
  fVar7 = (float)(int)(0x7fffffff >> (sbyte)uVar5);
  fVar8 = *param_2;
  fVar9 = fVar4;
  if ((fVar4 <= fVar8) && (fVar9 = fVar7, fVar8 <= fVar7)) {
    fVar9 = fVar8;
  }
  *param_3 = (float)(int)fVar9;
  fVar8 = param_2[1];
  fVar9 = fVar4;
  if ((fVar4 <= fVar8) && (fVar9 = fVar7, fVar8 <= fVar7)) {
    fVar9 = fVar8;
  }
  param_3[1] = (float)(int)fVar9;
  fVar8 = param_2[2];
  fVar9 = fVar4;
  if ((fVar4 <= fVar8) && (fVar9 = fVar7, fVar8 <= fVar7)) {
    fVar9 = fVar8;
  }
  param_3[2] = (float)(int)fVar9;
  fVar8 = param_2[3];
  if ((fVar4 <= fVar8) && (fVar4 = fVar7, fVar8 <= fVar7)) {
    fVar4 = fVar8;
  }
  uVar6 = (ulong)(uint)(int)fVar4;
  param_3[3] = (float)(int)fVar4;
LAB_10038bf51:
  uVar5 = CONCAT71((int7)(uVar6 >> 8),1);
switchD_10038bd6f_default:
  return uVar5;
}

