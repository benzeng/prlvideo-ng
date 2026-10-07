
undefined8 FUN_100363490(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  sbyte sVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float local_2c;
  
  iVar1 = *(int *)(param_2 + 4);
  if (param_3 == 0) {
    local_2c = 0.0;
    bVar3 = false;
    goto LAB_100363558;
  }
  fVar8 = (float)*(int *)(param_2 + 0x10);
  iVar2 = *(int *)(param_3 + 0x14);
  if (iVar2 < 0x2f) {
    if ((iVar2 == 0x1f) || (iVar2 == 0x28)) {
LAB_1003634e9:
      sVar5 = 0x18;
    }
    else {
LAB_1003634f0:
      sVar5 = 0;
    }
  }
  else {
    sVar5 = 0x10;
    if (iVar2 != 0x3d) {
      if (iVar2 == 0x2f) goto LAB_1003634e9;
      goto LAB_1003634f0;
    }
  }
  fVar7 = *(float *)(param_2 + 0x14) * (float)(1 << sVar5);
  if (fVar7 <= 0.0) {
    local_2c = fVar8;
    if ((fVar7 < 0.0) && (local_2c = fVar7, fVar7 <= fVar8)) {
      local_2c = fVar8;
    }
  }
  else {
    local_2c = fVar7;
    if (fVar8 <= fVar7) {
      local_2c = fVar8;
    }
  }
  fVar8 = (float)FUN_10038fd20(DAT_1011c8478);
  local_2c = fVar8 * local_2c;
  bVar3 = true;
  if ((local_2c == 0.0) && (!NAN(local_2c))) {
    bVar3 = *(float *)(param_2 + 0x18) != 0.0;
  }
LAB_100363558:
  if (iVar1 == 3) {
    if (bVar3) {
      puVar4 = &DAT_1011c5c78;
    }
    else {
      puVar4 = &DAT_1011c5bc0;
    }
    (*(code *)*puVar4)(0x8037);
    (*DAT_1011c5bc0)(0x2a02);
    uVar6 = 0x1b02;
  }
  else {
    if (iVar1 != 2) {
      return 3;
    }
    if (bVar3) {
      puVar4 = &DAT_1011c5c78;
    }
    else {
      puVar4 = &DAT_1011c5bc0;
    }
    (*(code *)*puVar4)(0x2a02);
    (*DAT_1011c5bc0)(0x8037);
    uVar6 = 0x1b01;
  }
  (*DAT_1011c6748)(0x408,uVar6);
  if (bVar3) {
    (*DAT_1011c6750)(*(undefined4 *)(param_2 + 0x18),local_2c);
  }
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 3) {
    (*DAT_1011c5c78)(0xb44);
    puVar4 = &DAT_1011c5b08;
    uVar6 = 0x405;
  }
  else if (iVar1 == 2) {
    (*DAT_1011c5c78)(0xb44);
    puVar4 = &DAT_1011c5b08;
    uVar6 = 0x404;
  }
  else {
    if (iVar1 != 1) {
      return 3;
    }
    puVar4 = &DAT_1011c5bc0;
    uVar6 = 0xb44;
  }
  (*(code *)*puVar4)(uVar6);
  uVar6 = 0x900;
  if (*(int *)(param_2 + 0xc) == 0) {
    uVar6 = 0x901;
  }
  (*DAT_1011c5e28)(uVar6);
  if ((*(int *)(param_2 + 0x28) == 0) || (*(int *)(param_2 + 0x24) != 0)) {
    puVar4 = &DAT_1011c5bc0;
  }
  else {
    puVar4 = &DAT_1011c5c78;
  }
  (*(code *)*puVar4)(0xb20);
  if (*(int *)(param_2 + 0x1c) == 0) {
    puVar4 = &DAT_1011c5c78;
  }
  else {
    puVar4 = &DAT_1011c5bc0;
  }
  (*(code *)*puVar4)(0x864f);
  return 0;
}

