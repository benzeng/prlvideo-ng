
undefined2 *
FUN_1009d1190(undefined8 *param_1,undefined2 *param_2,ulong param_3,undefined2 *param_4)

{
  void *pvVar1;
  void *pvVar2;
  undefined2 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *pvVar8;
  ulong uVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  size_t sVar12;
  undefined2 *puVar13;
  ulong uVar14;
  undefined2 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  
  if (param_3 == 0) {
    return param_2;
  }
  pvVar2 = (void *)*param_1;
  puVar3 = (undefined2 *)param_1[1];
  if (param_3 <= (ulong)(param_1[2] - (long)puVar3 >> 1)) {
    uVar20 = (long)puVar3 - (long)param_2 >> 1;
    uVar17 = param_3;
    puVar13 = puVar3;
    if (uVar20 < param_3) {
      do {
        *puVar13 = *param_4;
        puVar13 = puVar13 + 1;
        uVar17 = uVar17 - 1;
      } while (uVar20 != uVar17);
      puVar13 = puVar3 + (param_3 - uVar20);
      param_1[1] = puVar13;
      uVar17 = uVar20;
      if (uVar20 == 0) {
        return param_2;
      }
    }
    sVar12 = (long)puVar13 -
             (long)((long)pvVar2 + (((long)param_2 - (long)pvVar2 >> 1) + param_3) * 2);
    lVar19 = (long)sVar12 >> 1;
    puVar15 = (undefined2 *)((sVar12 & 0xfffffffffffffffe) + (long)param_2);
    if (puVar15 < puVar3) {
      uVar9 = (long)puVar3 + ~(ulong)param_2 + lVar19 * -2 >> 1;
      uVar20 = uVar9 + 1;
      uVar18 = uVar20 & 0xfffffffffffffff0;
      puVar10 = puVar13;
      uVar14 = 0;
      if ((uVar18 != 0) &&
         ((param_2 + lVar19 + uVar9 < puVar13 || (uVar14 = 0, puVar13 + uVar9 < param_2 + lVar19))))
      {
        puVar10 = puVar13 + uVar18;
        puVar15 = param_2 + lVar19 + uVar18;
        puVar16 = (undefined8 *)(puVar13 + 8);
        puVar11 = (undefined8 *)(param_2 + lVar19 + 8);
        uVar9 = uVar20 & 0xfffffffffffffff0;
        do {
          uVar5 = puVar11[-1];
          uVar6 = *puVar11;
          uVar7 = puVar11[1];
          puVar16[-2] = puVar11[-2];
          puVar16[-1] = uVar5;
          *puVar16 = uVar6;
          puVar16[1] = uVar7;
          puVar16 = puVar16 + 4;
          puVar11 = puVar11 + 4;
          uVar9 = uVar9 - 0x10;
          uVar14 = uVar18;
        } while (uVar9 != 0);
      }
      if (uVar20 != uVar14) {
        do {
          *puVar10 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar10 = puVar10 + 1;
        } while (puVar15 < puVar3);
      }
      param_1[1] = (long)puVar13 +
                   ((long)puVar3 + ~(ulong)param_2 + lVar19 * -2 & 0xfffffffffffffffe) + 2;
    }
    _memmove(puVar13 + -lVar19,param_2,sVar12);
    if ((param_2 <= param_4) && (param_4 < (undefined2 *)param_1[1])) {
      param_4 = param_4 + param_3;
    }
    uVar20 = 0;
    do {
      param_2[uVar20] = *param_4;
      uVar20 = uVar20 + 1;
    } while (uVar17 != uVar20);
    return param_2;
  }
  uVar17 = ((long)puVar3 - (long)pvVar2 >> 1) + param_3;
  if ((long)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar20 = param_1[2] - (long)pvVar2;
  if ((ulong)((long)uVar20 >> 1) < 0x3fffffffffffffff) {
    if (uVar20 < uVar17) {
      uVar20 = uVar17;
    }
    lVar19 = (long)param_2 - (long)pvVar2 >> 1;
    uVar17 = 0;
    pvVar8 = (void *)0x0;
    if (uVar20 == 0) goto LAB_1009d13a5;
  }
  else {
    lVar19 = (long)param_2 - (long)pvVar2 >> 1;
    uVar20 = 0x7fffffffffffffff;
  }
  uVar17 = uVar20;
  pvVar8 = operator_new(uVar17 * 2);
LAB_1009d13a5:
  puVar3 = (undefined2 *)((long)pvVar8 + lVar19 * 2);
  uVar20 = param_3;
  puVar13 = puVar3;
  do {
    *puVar13 = *param_4;
    puVar13 = puVar13 + 1;
    uVar20 = uVar20 - 1;
  } while (uVar20 != 0);
  pvVar1 = (void *)((long)pvVar8 + (lVar19 - ((ulong)((long)param_2 - (long)pvVar2) >> 1)) * 2);
  _memcpy(pvVar1,pvVar2,(long)param_2 - (long)pvVar2);
  lVar4 = param_1[1];
  _memcpy((void *)((long)pvVar8 + (param_3 + lVar19) * 2),param_2,lVar4 - (long)param_2);
  *param_1 = pvVar1;
  param_1[1] = (void *)((long)pvVar8 +
                       (((ulong)(lVar4 - (long)param_2) >> 1) + param_3 + lVar19) * 2);
  param_1[2] = (void *)((long)pvVar8 + uVar17 * 2);
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  return puVar3;
}

