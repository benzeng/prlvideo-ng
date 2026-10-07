
void FUN_10055a320(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *local_58;
  int local_4c;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_58 = param_2;
  local_48 = param_1;
LAB_10055a360:
  puVar3 = local_58 + -2;
  puVar10 = local_48;
LAB_10055a392:
  local_48 = puVar10;
  lVar8 = (long)local_58 - (long)local_48;
  lVar6 = lVar8 >> 4;
  switch(lVar6) {
  case 0:
  case 1:
    goto switchD_10055a6d8_caseD_0;
  case 2:
    cVar4 = (*(code *)*param_3)(puVar3,local_48);
    if (cVar4 == '\0') {
      return;
    }
    uVar1 = *(undefined4 *)local_48;
    *(undefined4 *)local_48 = *(undefined4 *)(local_58 + -2);
    *(undefined4 *)(local_58 + -2) = uVar1;
    uVar2 = local_48[1];
    local_48[1] = local_58[-1];
    local_58[-1] = uVar2;
    return;
  case 3:
    FUN_10055a870(local_48,local_48 + 2,puVar3,param_3);
    return;
  case 4:
    FUN_10055a9a0(local_48,local_48 + 2,local_48 + 4,puVar3,param_3);
    return;
  case 5:
    FUN_10055aa70(local_48,local_48 + 2,local_48 + 4,local_48 + 6,puVar3,param_3);
    return;
  default:
    if (0x6f < lVar8) {
      lVar9 = lVar6 - (lVar8 >> 0x3f) >> 1;
      puVar10 = local_48 + lVar9 * 2;
      if (lVar8 < 0x3e71) {
        local_4c = FUN_10055a870(local_48,puVar10,puVar3,param_3);
      }
      else {
        lVar6 = (long)(((ulong)(lVar8 >> 0x3f) >> 0x3e) + lVar6) >> 2;
        local_4c = FUN_10055aa70(local_48,local_48 + lVar6 * 2,puVar10,
                                 local_48 + (lVar6 + lVar9) * 2,puVar3,param_3);
      }
      cVar4 = (*(code *)*param_3)(local_48,puVar10);
      puVar13 = local_58;
      puVar11 = puVar3;
      puVar12 = puVar3;
      if (cVar4 == '\0') goto LAB_10055a460;
      goto LAB_10055a4a8;
    }
    FUN_10055a870(local_48,local_48 + 2,local_48 + 4,param_3);
    if (local_48 + 6 == local_58) {
      return;
    }
    lVar6 = 0;
    puVar3 = local_48 + 6;
    puVar10 = local_48 + 4;
  }
LAB_10055a740:
  puVar12 = puVar3;
  cVar4 = (*(code *)*param_3)(puVar12,puVar10);
  if (cVar4 != '\0') {
    local_40 = *puVar12;
    local_38 = puVar12[1];
    lVar8 = lVar6;
    do {
      lVar9 = lVar8;
      *(undefined4 *)((long)local_48 + lVar9 + 0x30) =
           *(undefined4 *)((long)local_48 + lVar9 + 0x20);
      *(undefined8 *)((long)local_48 + lVar9 + 0x38) =
           *(undefined8 *)((long)local_48 + lVar9 + 0x28);
      if (lVar9 == -0x20) break;
      cVar4 = (*(code *)*param_3)(&local_40,(long)local_48 + lVar9 + 0x10);
      lVar8 = lVar9 + -0x10;
    } while (cVar4 != '\0');
    *(undefined4 *)((long)local_48 + lVar9 + 0x20) = (undefined4)local_40;
    *(undefined8 *)((long)local_48 + lVar9 + 0x28) = local_38;
  }
  lVar6 = lVar6 + 0x10;
  puVar3 = puVar12 + 2;
  puVar10 = puVar12;
  if (puVar12 + 2 == local_58) {
switchD_10055a6d8_caseD_0:
    return;
  }
  goto LAB_10055a740;
LAB_10055a460:
  while (puVar7 = puVar13, puVar12 = puVar7 + -4, local_48 != puVar12) {
    cVar4 = (*(code *)*param_3)(puVar12,puVar10);
    puVar13 = puVar11;
    puVar11 = puVar12;
    if (cVar4 != '\0') goto code_r0x00010055a485;
  }
  puVar12 = local_48 + 2;
  cVar4 = (*(code *)*param_3)(local_48,puVar3);
  puVar10 = local_48;
  if (cVar4 == '\0') {
    while( true ) {
      puVar13 = puVar12;
      if (puVar13 == puVar3) {
        return;
      }
      cVar4 = (*(code *)*param_3)(local_48,puVar13);
      if (cVar4 != '\0') break;
      puVar12 = puVar10 + 4;
      puVar10 = puVar13;
    }
    uVar1 = *(undefined4 *)puVar13;
    *(undefined4 *)puVar13 = *(undefined4 *)(local_58 + -2);
    *(undefined4 *)(local_58 + -2) = uVar1;
    uVar2 = puVar13[1];
    puVar13[1] = local_58[-1];
    local_58[-1] = uVar2;
    puVar12 = puVar13 + 2;
  }
  puVar13 = puVar3;
  if (puVar12 == puVar3) {
    return;
  }
  while( true ) {
    do {
      puVar10 = puVar12;
      cVar4 = (*(code *)*param_3)(local_48,puVar10);
      puVar12 = puVar10 + 2;
    } while (cVar4 == '\0');
    do {
      puVar11 = puVar13;
      puVar13 = puVar11 + -2;
      cVar4 = (*(code *)*param_3)(local_48,puVar13);
    } while (cVar4 != '\0');
    if (puVar13 <= puVar10) break;
    uVar1 = *(undefined4 *)puVar10;
    *(undefined4 *)puVar10 = *(undefined4 *)puVar13;
    *(undefined4 *)puVar13 = uVar1;
    uVar2 = puVar10[1];
    puVar10[1] = puVar11[-1];
    puVar11[-1] = uVar2;
  }
  goto LAB_10055a392;
code_r0x00010055a485:
  uVar1 = *(undefined4 *)local_48;
  *(undefined4 *)local_48 = *(undefined4 *)(puVar7 + -4);
  *(undefined4 *)(puVar7 + -4) = uVar1;
  uVar2 = local_48[1];
  local_48[1] = puVar7[-3];
  puVar7[-3] = uVar2;
  local_4c = local_4c + 1;
LAB_10055a4a8:
  puVar13 = local_48 + 2;
  puVar11 = puVar13;
  if (puVar13 < puVar12) {
    while( true ) {
      do {
        puVar13 = puVar11;
        cVar4 = (*(code *)*param_3)(puVar13,puVar10);
        puVar11 = puVar13 + 2;
      } while (cVar4 != '\0');
      do {
        puVar7 = puVar12;
        puVar12 = puVar7 + -2;
        cVar4 = (*(code *)*param_3)(puVar12,puVar10);
      } while (cVar4 == '\0');
      if (puVar12 < puVar13) break;
      uVar1 = *(undefined4 *)puVar13;
      *(undefined4 *)puVar13 = *(undefined4 *)puVar12;
      *(undefined4 *)puVar12 = uVar1;
      uVar2 = puVar13[1];
      puVar13[1] = puVar7[-1];
      puVar7[-1] = uVar2;
      local_4c = local_4c + 1;
      if (puVar10 == puVar13) {
        puVar10 = puVar12;
      }
    }
  }
  if ((puVar13 != puVar10) && (cVar4 = (*(code *)*param_3)(puVar10,puVar13), cVar4 != '\0')) {
    uVar1 = *(undefined4 *)puVar13;
    *(undefined4 *)puVar13 = *(undefined4 *)puVar10;
    *(undefined4 *)puVar10 = uVar1;
    uVar2 = puVar13[1];
    puVar13[1] = puVar10[1];
    puVar10[1] = uVar2;
    local_4c = local_4c + 1;
  }
  if (local_4c == 0) {
    cVar4 = FUN_10055ab90(local_48,puVar13,param_3);
    cVar5 = FUN_10055ab90(puVar13 + 2,local_58,param_3);
    if (cVar5 != '\0') goto LAB_10055a6b6;
    puVar10 = puVar13 + 2;
    if (cVar4 != '\0') goto LAB_10055a392;
  }
  if ((long)local_58 - (long)puVar13 <= (long)puVar13 - (long)local_48) {
    FUN_10055a320(puVar13 + 2,local_58,param_3);
    local_58 = puVar13;
    goto LAB_10055a360;
  }
  FUN_10055a320(local_48,puVar13,param_3);
  puVar10 = puVar13 + 2;
  goto LAB_10055a392;
LAB_10055a6b6:
  local_58 = puVar13;
  if (cVar4 != '\0') {
    return;
  }
  goto LAB_10055a360;
}

