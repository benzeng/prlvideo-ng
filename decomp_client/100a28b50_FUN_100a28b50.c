
undefined1 *
FUN_100a28b50(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  void *pvVar10;
  void *pvVar11;
  undefined1 *puVar12;
  void *pvVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  
  lVar4 = (long)param_4 - (long)param_3;
  if (lVar4 < 1) {
    return param_2;
  }
  puVar15 = (undefined1 *)param_1[1];
  if (lVar4 <= param_1[2] - (long)puVar15) {
    lVar8 = (long)puVar15 - (long)param_2;
    puVar12 = puVar15;
    if (lVar8 < lVar4) {
      for (puVar16 = param_3 + lVar8; puVar16 != param_4; puVar16 = puVar16 + 1) {
        *puVar12 = *puVar16;
        puVar12 = (undefined1 *)(param_1[1] + 1);
        param_1[1] = (long)puVar12;
      }
      param_4 = param_3 + lVar8;
      if (lVar8 < 1) {
        return param_2;
      }
    }
    puVar6 = puVar12 + -lVar4;
    puVar16 = puVar12;
    if (puVar6 < puVar15) {
      do {
        *puVar16 = *puVar6;
        puVar6 = puVar6 + 1;
        lVar8 = param_1[1];
        param_1[1] = lVar8 + 1;
        puVar16 = (undefined1 *)(lVar8 + 1);
      } while (puVar15 != puVar6);
    }
    _memmove(puVar12 + -((long)puVar12 - (long)(param_2 + lVar4)),param_2,
             (long)puVar12 - (long)(param_2 + lVar4));
    uVar7 = (long)param_4 - (long)param_3;
    if (uVar7 == 0) {
      return param_2;
    }
    puVar15 = param_2;
    if (param_4 + ~(ulong)param_3 != (undefined1 *)0xffffffffffffffff) {
      uVar9 = uVar7 & 0xffffffffffffffe0;
      if ((uVar9 == 0) ||
         ((param_2 <= param_4 + -1 && (param_3 <= param_2 + ~(ulong)param_3 + (long)param_4)))) {
        uVar9 = 0;
        puVar12 = param_3;
      }
      else {
        puVar15 = param_2 + uVar9;
        puVar14 = (undefined8 *)(param_2 + 0x10);
        puVar12 = param_3 + uVar9;
        puVar17 = (undefined8 *)(param_3 + 0x10);
        uVar5 = uVar7 & 0xffffffffffffffe0;
        do {
          uVar1 = puVar17[-1];
          uVar2 = *puVar17;
          uVar3 = puVar17[1];
          puVar14[-2] = puVar17[-2];
          puVar14[-1] = uVar1;
          *puVar14 = uVar2;
          puVar14[1] = uVar3;
          puVar14 = puVar14 + 4;
          puVar17 = puVar17 + 4;
          uVar5 = uVar5 - 0x20;
        } while (uVar5 != 0);
      }
      param_3 = puVar12;
      if (uVar7 == uVar9) {
        return param_2;
      }
    }
    do {
      *puVar15 = *param_3;
      param_3 = param_3 + 1;
      puVar15 = puVar15 + 1;
    } while (param_4 != param_3);
    return param_2;
  }
  pvVar10 = (void *)*param_1;
  puVar15 = puVar15 + (lVar4 - (long)pvVar10);
  if ((long)puVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar7 = param_1[2] - (long)pvVar10;
  if (uVar7 < 0x3fffffffffffffff) {
    puVar12 = (undefined1 *)(uVar7 * 2);
    if (puVar12 < puVar15) {
      puVar12 = puVar15;
    }
    lVar4 = (long)param_2 - (long)pvVar10;
    puVar15 = (undefined1 *)0x0;
    pvVar11 = (void *)0x0;
    if (puVar12 == (undefined1 *)0x0) goto LAB_100a28c60;
  }
  else {
    lVar4 = (long)param_2 - (long)pvVar10;
    puVar12 = (undefined1 *)0x7fffffffffffffff;
  }
  puVar15 = puVar12;
  pvVar11 = operator_new((ulong)puVar15);
LAB_100a28c60:
  puVar12 = (undefined1 *)((long)pvVar11 + lVar4);
  puVar16 = puVar12;
  if (param_3 != param_4) {
    do {
      *puVar16 = *param_3;
      puVar16 = puVar16 + 1;
      param_3 = param_3 + 1;
    } while (param_4 != param_3);
    pvVar10 = (void *)*param_1;
  }
  pvVar13 = (void *)((long)pvVar11 + (lVar4 - ((long)param_2 - (long)pvVar10)));
  _memcpy(pvVar13,pvVar10,(long)param_2 - (long)pvVar10);
  lVar4 = param_1[1];
  _memcpy(puVar16,param_2,lVar4 - (long)param_2);
  pvVar10 = (void *)*param_1;
  *param_1 = (long)pvVar13;
  param_1[1] = (long)(puVar16 + (lVar4 - (long)param_2));
  param_1[2] = (long)(puVar15 + (long)pvVar11);
  if (pvVar10 != (void *)0x0) {
    operator_delete(pvVar10);
  }
  return puVar12;
}

