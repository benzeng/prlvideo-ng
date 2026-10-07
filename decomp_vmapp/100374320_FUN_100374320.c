
void FUN_100374320(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
  uVar17 = (long)param_3 - (long)param_2 >> 2;
  puVar4 = (undefined4 *)*param_1;
  lVar6 = param_1[2];
  if ((ulong)(lVar6 - (long)puVar4 >> 2) < uVar17) {
    if (puVar4 != (undefined4 *)0x0) {
      puVar10 = (undefined4 *)param_1[1];
      if (puVar10 != puVar4) {
        param_1[1] = (~((long)puVar10 + (-4 - (long)puVar4)) & 0xfffffffffffffffcU) + (long)puVar10;
      }
      operator_delete(puVar4);
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      lVar6 = 0;
    }
    if (0x3fffffffffffffff < uVar17) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)(lVar6 >> 2) < 0x1fffffffffffffff) {
      uVar7 = lVar6 >> 1;
      if ((ulong)(lVar6 >> 1) < uVar17) {
        uVar7 = uVar17;
      }
      if (0x3fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
    }
    else {
      uVar7 = 0x3fffffffffffffff;
    }
    puVar4 = operator_new(uVar7 * 4);
    param_1[1] = puVar4;
    *param_1 = puVar4;
    param_1[2] = puVar4 + uVar7;
    if (param_2 == param_3) {
      return;
    }
    uVar15 = (long)param_3 + (-4 - (long)param_2);
    uVar7 = (uVar15 >> 2) + 1;
    uVar14 = uVar7 & 0x7ffffffffffffff8;
    puVar10 = puVar4;
    uVar17 = 0;
    puVar8 = param_2;
    if (uVar14 != 0) {
      puVar10 = puVar4 + uVar14;
      puVar8 = param_2 + uVar14;
      puVar12 = (undefined8 *)(puVar4 + 4);
      puVar9 = (undefined8 *)(param_2 + 4);
      uVar13 = uVar7 & 0xfffffffffffffff8;
      do {
        uVar1 = puVar9[-1];
        uVar2 = *puVar9;
        uVar3 = puVar9[1];
        puVar12[-2] = puVar9[-2];
        puVar12[-1] = uVar1;
        *puVar12 = uVar2;
        puVar12[1] = uVar3;
        puVar12 = puVar12 + 4;
        puVar9 = puVar9 + 4;
        uVar13 = uVar13 - 8;
        uVar17 = uVar14;
      } while (uVar13 != 0);
    }
    if (uVar7 != uVar17) {
      do {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      } while (param_3 != puVar8);
    }
    lVar6 = (uVar15 & 0xfffffffffffffffc) + 4 + (long)puVar4;
  }
  else {
    puVar10 = (undefined4 *)param_1[1];
    uVar7 = (long)puVar10 - (long)puVar4 >> 2;
    puVar8 = param_3;
    if (uVar17 > uVar7) {
      puVar8 = param_2 + uVar7;
    }
    if (puVar8 != param_2) {
      uVar13 = (long)puVar8 + (-4 - (long)param_2);
      uVar15 = uVar13 >> 2;
      uVar14 = uVar15 + 1;
      uVar16 = uVar14 & 0x7ffffffffffffff8;
      if ((uVar16 == 0) || ((puVar4 <= param_2 + uVar15 && (param_2 <= puVar4 + uVar15)))) {
        uVar16 = 0;
        puVar5 = puVar4;
        puVar11 = param_2;
      }
      else {
        puVar5 = puVar4 + uVar16;
        puVar11 = param_2 + uVar16;
        puVar12 = (undefined8 *)(puVar4 + 4);
        puVar9 = (undefined8 *)(param_2 + 4);
        uVar15 = uVar14 & 0xfffffffffffffff8;
        do {
          uVar1 = puVar9[-1];
          uVar2 = *puVar9;
          uVar3 = puVar9[1];
          puVar12[-2] = puVar9[-2];
          puVar12[-1] = uVar1;
          *puVar12 = uVar2;
          puVar12[1] = uVar3;
          puVar12 = puVar12 + 4;
          puVar9 = puVar9 + 4;
          uVar15 = uVar15 - 8;
        } while (uVar15 != 0);
      }
      if (uVar14 != uVar16) {
        do {
          *puVar5 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar5 = puVar5 + 1;
        } while (puVar8 != puVar11);
      }
      puVar4 = (undefined4 *)((uVar13 & 0xfffffffffffffffc) + 4 + (long)puVar4);
    }
    if (uVar17 <= uVar7) {
      if (puVar10 == puVar4) {
        return;
      }
      lVar6 = (~((long)puVar10 + (-4 - (long)puVar4)) & 0xfffffffffffffffcU) + (long)puVar10;
    }
    else {
      if (puVar8 == param_3) {
        return;
      }
      uVar15 = (long)param_3 + (-4 - (long)puVar8);
      uVar7 = uVar15 >> 2;
      uVar17 = uVar7 + 1;
      uVar14 = uVar17 & 0x7ffffffffffffff8;
      if ((uVar14 == 0) || ((puVar10 <= puVar8 + uVar7 && (puVar8 <= puVar10 + uVar7)))) {
        uVar14 = 0;
        puVar4 = puVar10;
        puVar5 = puVar8;
      }
      else {
        puVar4 = puVar10 + uVar14;
        puVar5 = puVar8 + uVar14;
        puVar12 = (undefined8 *)(puVar10 + 4);
        puVar9 = (undefined8 *)(puVar8 + 4);
        uVar7 = uVar17 & 0xfffffffffffffff8;
        do {
          uVar1 = puVar9[-1];
          uVar2 = *puVar9;
          uVar3 = puVar9[1];
          puVar12[-2] = puVar9[-2];
          puVar12[-1] = uVar1;
          *puVar12 = uVar2;
          puVar12[1] = uVar3;
          puVar12 = puVar12 + 4;
          puVar9 = puVar9 + 4;
          uVar7 = uVar7 - 8;
        } while (uVar7 != 0);
      }
      if (uVar17 != uVar14) {
        do {
          *puVar4 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar4 = puVar4 + 1;
        } while (param_3 != puVar5);
      }
      lVar6 = (uVar15 & 0xfffffffffffffffc) + 4 + (long)puVar10;
    }
  }
  param_1[1] = lVar6;
  return;
}

