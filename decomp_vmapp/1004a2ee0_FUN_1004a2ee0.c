
void FUN_1004a2ee0(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar14 = (long)param_3 - (long)param_2;
  puVar6 = (undefined1 *)*param_1;
  uVar5 = param_1[2];
  if (uVar5 - (long)puVar6 < uVar14) {
    if (puVar6 != (undefined1 *)0x0) {
      if ((undefined1 *)param_1[1] != puVar6) {
        param_1[1] = puVar6;
      }
      operator_delete(puVar6);
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      uVar5 = 0;
    }
    if (-1 < (long)uVar14) {
      if (uVar5 < 0x3fffffffffffffff) {
        uVar13 = uVar5 * 2;
        if ((uVar5 * 2 < uVar14) && (uVar13 = uVar14, (long)uVar14 < 0)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
      }
      else {
        uVar13 = 0x7fffffffffffffff;
      }
      puVar6 = operator_new(uVar13);
      param_1[1] = puVar6;
      *param_1 = puVar6;
      param_1[2] = puVar6 + uVar13;
      for (; param_2 != param_3; param_2 = param_2 + 1) {
        *puVar6 = *param_2;
        puVar6 = (undefined1 *)(param_1[1] + 1);
        param_1[1] = puVar6;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  puVar9 = (undefined1 *)param_1[1];
  uVar5 = (long)puVar9 - (long)puVar6;
  puVar7 = param_3;
  if (uVar14 > uVar5) {
    puVar7 = param_2 + uVar5;
  }
  uVar13 = (long)puVar7 - (long)param_2;
  if (uVar13 == 0) goto LAB_1004a30a6;
  puVar9 = puVar6;
  if (puVar7 + ~(ulong)param_2 == (undefined1 *)0xffffffffffffffff) {
LAB_1004a3090:
    do {
      *puVar9 = *param_2;
      param_2 = param_2 + 1;
      puVar9 = puVar9 + 1;
    } while (puVar7 != param_2);
  }
  else {
    uVar12 = uVar13 & 0xffffffffffffffe0;
    if ((uVar12 == 0) ||
       ((puVar6 <= puVar7 + -1 && (param_2 <= puVar6 + ~(ulong)param_2 + (long)puVar7)))) {
      uVar12 = 0;
    }
    else {
      puVar9 = puVar6 + uVar12;
      puVar8 = (undefined8 *)(puVar6 + 0x10);
      puVar1 = param_2 + uVar12;
      puVar11 = (undefined8 *)(param_2 + 0x10);
      uVar10 = uVar13 & 0xffffffffffffffe0;
      do {
        uVar2 = puVar11[-1];
        uVar3 = *puVar11;
        uVar4 = puVar11[1];
        puVar8[-2] = puVar11[-2];
        puVar8[-1] = uVar2;
        *puVar8 = uVar3;
        puVar8[1] = uVar4;
        puVar8 = puVar8 + 4;
        puVar11 = puVar11 + 4;
        uVar10 = uVar10 - 0x20;
        param_2 = puVar1;
      } while (uVar10 != 0);
    }
    if (uVar13 != uVar12) goto LAB_1004a3090;
  }
  puVar6 = puVar6 + uVar13;
  puVar9 = (undefined1 *)param_1[1];
LAB_1004a30a6:
  if (uVar14 <= uVar5) {
    if (puVar9 != puVar6) {
      param_1[1] = puVar6;
    }
  }
  else {
    for (; puVar7 != param_3; puVar7 = puVar7 + 1) {
      *puVar9 = *puVar7;
      puVar9 = (undefined1 *)(param_1[1] + 1);
      param_1[1] = puVar9;
    }
  }
  return;
}

