
void FUN_1004aa780(ulong *param_1,ulong param_2,ulong param_3,long param_4,ulong param_5,
                  long param_6,ulong param_7,undefined2 *param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined2 *puVar8;
  long lVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  byte *pbVar20;
  
  if (0x7fffffffffffffee - param_2 < param_3) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if ((*param_1 & 1) == 0) {
    pbVar20 = (byte *)((long)param_1 + 2);
  }
  else {
    pbVar20 = (byte *)param_1[2];
  }
  if (param_2 < 0x3fffffffffffffe7) {
    uVar14 = param_3 + param_2;
    if (param_3 + param_2 < param_2 * 2) {
      uVar14 = param_2 * 2;
    }
    uVar12 = 0xb;
    if (10 < uVar14) {
      uVar12 = uVar14 + 8 & 0xfffffffffffffff8;
    }
  }
  else {
    uVar12 = 0x7fffffffffffffef;
  }
  pbVar6 = operator_new(uVar12 * 2);
  if (param_5 != 0) {
    uVar17 = param_5 & 0xfffffffffffffff0;
    pbVar7 = pbVar6;
    pbVar13 = pbVar20;
    uVar14 = 0;
    uVar18 = param_5;
    if ((uVar17 != 0) &&
       ((pbVar20 + param_5 * 2 + -2 < pbVar6 || (uVar14 = 0, pbVar6 + param_5 * 2 + -2 < pbVar20))))
    {
      pbVar7 = pbVar6 + uVar17 * 2;
      uVar18 = param_5 - uVar17;
      pbVar13 = pbVar20 + uVar17 * 2;
      pbVar10 = pbVar6 + 0x10;
      pbVar15 = pbVar20 + 0x10;
      uVar16 = param_5 & 0xfffffffffffffff0;
      do {
        uVar3 = *(undefined8 *)(pbVar15 + -8);
        uVar4 = *(undefined8 *)pbVar15;
        uVar5 = *(undefined8 *)(pbVar15 + 8);
        *(undefined8 *)(pbVar10 + -0x10) = *(undefined8 *)(pbVar15 + -0x10);
        *(undefined8 *)(pbVar10 + -8) = uVar3;
        *(undefined8 *)pbVar10 = uVar4;
        *(undefined8 *)(pbVar10 + 8) = uVar5;
        pbVar10 = pbVar10 + 0x20;
        pbVar15 = pbVar15 + 0x20;
        uVar16 = uVar16 - 0x10;
        uVar14 = uVar17;
      } while (uVar16 != 0);
    }
    if (uVar14 != param_5) {
      do {
        *(undefined2 *)pbVar7 = *(undefined2 *)pbVar13;
        pbVar7 = pbVar7 + 2;
        pbVar13 = pbVar13 + 2;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  if (param_7 != 0) {
    uVar14 = param_7 & 0xfffffffffffffff0;
    if (uVar14 == 0) {
      uVar14 = 0;
      puVar8 = param_8;
      uVar18 = param_5;
      uVar17 = param_7;
    }
    else {
      uVar17 = param_7 - (param_7 & 0xfffffffffffffff0);
      uVar18 = (param_7 & 0xfffffffffffffff0) + param_5;
      puVar8 = param_8 + uVar14;
      puVar11 = (undefined8 *)(param_8 + 8);
      pbVar7 = pbVar6 + param_5 * 2 + 0x10;
      uVar16 = uVar14;
      do {
        uVar3 = puVar11[-1];
        uVar4 = *puVar11;
        uVar5 = puVar11[1];
        *(undefined8 *)(pbVar7 + -0x10) = puVar11[-2];
        *(undefined8 *)(pbVar7 + -8) = uVar3;
        *(undefined8 *)pbVar7 = uVar4;
        *(undefined8 *)(pbVar7 + 8) = uVar5;
        puVar11 = puVar11 + 4;
        pbVar7 = pbVar7 + 0x20;
        uVar16 = uVar16 - 0x10;
      } while (uVar16 != 0);
    }
    if (uVar14 != param_7) {
      pbVar7 = pbVar6 + uVar18 * 2;
      do {
        *(undefined2 *)pbVar7 = *puVar8;
        pbVar7 = pbVar7 + 2;
        puVar8 = puVar8 + 1;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  lVar19 = param_4 - param_6;
  lVar9 = lVar19 - param_5;
  if (lVar9 != 0) {
    lVar1 = param_6 + param_5;
    pbVar7 = pbVar20 + lVar1 * 2;
    lVar2 = param_7 + param_5;
    pbVar13 = pbVar6 + lVar2 * 2;
    if (((param_4 + -1) - param_6) - param_5 != -1) {
      param_5 = lVar19 - param_5;
      uVar18 = param_5 & 0xfffffffffffffff0;
      uVar14 = 0;
      if ((uVar18 != 0) &&
         ((pbVar20 + param_4 * 2 + -2 < pbVar6 + lVar2 * 2 ||
          (uVar14 = 0, pbVar6 + (param_4 + param_7) * 2 + -2 + param_6 * -2 < pbVar20 + lVar1 * 2)))
         ) {
        pbVar13 = pbVar6 + (lVar2 + uVar18) * 2;
        lVar9 = lVar9 - uVar18;
        pbVar7 = pbVar20 + (lVar1 + uVar18) * 2;
        pbVar15 = pbVar20 + lVar1 * 2 + 0x10;
        pbVar10 = pbVar6 + lVar2 * 2 + 0x10;
        uVar17 = param_5 & 0xfffffffffffffff0;
        do {
          uVar3 = *(undefined8 *)(pbVar15 + -8);
          uVar4 = *(undefined8 *)pbVar15;
          uVar5 = *(undefined8 *)(pbVar15 + 8);
          *(undefined8 *)(pbVar10 + -0x10) = *(undefined8 *)(pbVar15 + -0x10);
          *(undefined8 *)(pbVar10 + -8) = uVar3;
          *(undefined8 *)pbVar10 = uVar4;
          *(undefined8 *)(pbVar10 + 8) = uVar5;
          pbVar15 = pbVar15 + 0x20;
          pbVar10 = pbVar10 + 0x20;
          uVar17 = uVar17 - 0x10;
          uVar14 = uVar18;
        } while (uVar17 != 0);
      }
      if (param_5 == uVar14) goto LAB_1004aaa83;
    }
    do {
      *(undefined2 *)pbVar13 = *(undefined2 *)pbVar7;
      pbVar13 = pbVar13 + 2;
      pbVar7 = pbVar7 + 2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
LAB_1004aaa83:
  if (param_2 != 10) {
    operator_delete(pbVar20);
  }
  param_1[2] = (ulong)pbVar6;
  *param_1 = uVar12 | 1;
  param_1[1] = lVar19 + param_7;
  (pbVar6 + (lVar19 + param_7) * 2)[0] = 0;
  (pbVar6 + (lVar19 + param_7) * 2)[1] = 0;
  return;
}

