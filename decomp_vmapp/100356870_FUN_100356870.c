
undefined4 *
FUN_100356870(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  void *pvVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  size_t sVar13;
  undefined4 *puVar14;
  ulong uVar15;
  undefined4 *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined4 *local_40;
  
  if ((long)param_4 - (long)param_3 < 1) {
    return param_2;
  }
  pvVar2 = (void *)*param_1;
  lVar20 = (long)param_4 - (long)param_3 >> 2;
  puVar3 = (undefined4 *)param_1[1];
  if (lVar20 <= param_1[2] - (long)puVar3 >> 2) {
    uVar17 = (long)puVar3 - (long)param_2 >> 2;
    puVar14 = puVar3;
    local_40 = param_4;
    if ((long)uVar17 < lVar20) {
      local_40 = param_3 + uVar17;
      if (local_40 != param_4) {
        uVar19 = (long)param_4 + (~uVar17 * 4 - (long)param_3) >> 2;
        uVar18 = uVar19 + 1;
        uVar10 = uVar18 & 0x7ffffffffffffff8;
        puVar16 = local_40;
        uVar15 = 0;
        if ((uVar10 != 0) &&
           ((param_3 + uVar17 + uVar19 < puVar3 || (uVar15 = 0, puVar3 + uVar19 < param_3 + uVar17))
           )) {
          puVar14 = puVar3 + uVar10;
          puVar16 = param_3 + uVar17 + uVar10;
          puVar9 = (undefined8 *)(puVar3 + 4);
          puVar8 = (undefined8 *)(param_3 + uVar17 + 4);
          uVar17 = uVar18 & 0xfffffffffffffff8;
          do {
            uVar4 = puVar8[-1];
            uVar5 = *puVar8;
            uVar6 = puVar8[1];
            puVar9[-2] = puVar8[-2];
            puVar9[-1] = uVar4;
            *puVar9 = uVar5;
            puVar9[1] = uVar6;
            puVar9 = puVar9 + 4;
            puVar8 = puVar8 + 4;
            uVar17 = uVar17 - 8;
            uVar15 = uVar10;
          } while (uVar17 != 0);
        }
        if (uVar18 != uVar15) {
          do {
            *puVar14 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar14 = puVar14 + 1;
          } while (param_4 != puVar16);
        }
        puVar14 = (undefined4 *)
                  (((long)param_4 + (-4 - (long)local_40) & 0xfffffffffffffffcU) + 4 + (long)puVar3)
        ;
        param_1[1] = puVar14;
      }
      if ((long)puVar3 - (long)param_2 < 1) {
        return param_2;
      }
    }
    sVar13 = (long)puVar14 -
             (long)((long)pvVar2 + (((long)param_2 - (long)pvVar2 >> 2) + lVar20) * 4);
    lVar20 = (long)sVar13 >> 2;
    puVar16 = (undefined4 *)((sVar13 & 0xfffffffffffffffc) + (long)param_2);
    if (puVar16 < puVar3) {
      uVar19 = (long)puVar3 + ~(ulong)param_2 + lVar20 * -4 >> 2;
      uVar17 = uVar19 + 1;
      uVar18 = uVar17 & 0x7ffffffffffffff8;
      puVar12 = puVar14;
      uVar15 = 0;
      if ((uVar18 != 0) &&
         ((param_2 + lVar20 + uVar19 < puVar14 || (uVar15 = 0, puVar14 + uVar19 < param_2 + lVar20))
         )) {
        puVar12 = puVar14 + uVar18;
        puVar16 = param_2 + lVar20 + uVar18;
        puVar9 = (undefined8 *)(puVar14 + 4);
        puVar8 = (undefined8 *)(param_2 + lVar20 + 4);
        uVar19 = uVar17 & 0xfffffffffffffff8;
        do {
          uVar4 = puVar8[-1];
          uVar5 = *puVar8;
          uVar6 = puVar8[1];
          puVar9[-2] = puVar8[-2];
          puVar9[-1] = uVar4;
          *puVar9 = uVar5;
          puVar9[1] = uVar6;
          puVar9 = puVar9 + 4;
          puVar8 = puVar8 + 4;
          uVar19 = uVar19 - 8;
          uVar15 = uVar18;
        } while (uVar19 != 0);
      }
      if (uVar17 != uVar15) {
        do {
          *puVar12 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar12 = puVar12 + 1;
        } while (puVar16 < puVar3);
      }
      param_1[1] = (long)puVar14 +
                   ((long)puVar3 + ~(ulong)param_2 + lVar20 * -4 & 0xfffffffffffffffc) + 4;
    }
    _memmove(puVar14 + -lVar20,param_2,sVar13);
    _memmove(param_2,param_3,(long)local_40 - (long)param_3);
    return param_2;
  }
  uVar17 = ((long)puVar3 - (long)pvVar2 >> 2) + lVar20;
  if (uVar17 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar20 = param_1[2] - (long)pvVar2;
  if ((ulong)(lVar20 >> 2) < 0x1fffffffffffffff) {
    uVar18 = lVar20 >> 1;
    if (uVar18 < uVar17) {
      uVar18 = uVar17;
    }
    lVar20 = (long)param_2 - (long)pvVar2 >> 2;
    uVar17 = 0;
    pvVar7 = (void *)0x0;
    if (uVar18 == 0) goto LAB_100356a91;
  }
  else {
    lVar20 = (long)param_2 - (long)pvVar2 >> 2;
    uVar18 = 0x3fffffffffffffff;
  }
  uVar17 = uVar18;
  pvVar7 = operator_new(uVar17 * 4);
LAB_100356a91:
  puVar3 = (undefined4 *)((long)pvVar7 + lVar20 * 4);
  lVar11 = lVar20;
  puVar14 = puVar3;
  if (param_3 != param_4) {
    uVar19 = (ulong)((long)param_4 + (-4 - (long)param_3)) >> 2;
    uVar18 = uVar19 + 1;
    uVar15 = uVar18 & 0x7ffffffffffffff8;
    if ((uVar15 == 0) ||
       (((undefined4 *)((long)pvVar7 + lVar20 * 4) <= param_3 + uVar19 &&
        (param_3 <= (undefined4 *)((long)pvVar7 + (lVar20 + uVar19) * 4))))) {
      uVar15 = 0;
      puVar16 = param_3;
    }
    else {
      puVar14 = (undefined4 *)((long)pvVar7 + (lVar20 + uVar15) * 4);
      puVar16 = param_3 + uVar15;
      puVar8 = (undefined8 *)(param_3 + 4);
      puVar9 = (undefined8 *)((long)pvVar7 + lVar20 * 4 + 0x10);
      uVar10 = uVar18 & 0xfffffffffffffff8;
      do {
        uVar4 = puVar8[-1];
        uVar5 = *puVar8;
        uVar6 = puVar8[1];
        puVar9[-2] = puVar8[-2];
        puVar9[-1] = uVar4;
        *puVar9 = uVar5;
        puVar9[1] = uVar6;
        puVar8 = puVar8 + 4;
        puVar9 = puVar9 + 4;
        uVar10 = uVar10 - 8;
      } while (uVar10 != 0);
    }
    if (uVar18 != uVar15) {
      do {
        *puVar14 = *puVar16;
        puVar14 = puVar14 + 1;
        puVar16 = puVar16 + 1;
      } while (param_4 != puVar16);
    }
    lVar11 = uVar19 + 1 + lVar20;
    puVar14 = (undefined4 *)((long)pvVar7 + (uVar19 + lVar20) * 4 + 4);
  }
  pvVar1 = (void *)((long)pvVar7 + (lVar20 - ((ulong)((long)param_2 - (long)pvVar2) >> 2)) * 4);
  _memcpy(pvVar1,pvVar2,(long)param_2 - (long)pvVar2);
  lVar20 = param_1[1];
  _memcpy(puVar14,param_2,lVar20 - (long)param_2);
  *param_1 = pvVar1;
  param_1[1] = (void *)((long)pvVar7 + (((ulong)(lVar20 - (long)param_2) >> 2) + lVar11) * 4);
  param_1[2] = (void *)((long)pvVar7 + uVar17 * 4);
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  return puVar3;
}

