
undefined1 *
FUN_100a28930(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  void *pvVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  void *pvVar9;
  void *pvVar10;
  
  lVar1 = (long)param_4 - (long)param_3;
  if (lVar1 < 1) {
    return param_2;
  }
  puVar8 = (undefined1 *)param_1[1];
  if (lVar1 <= param_1[2] - (long)puVar8) {
    lVar4 = (long)puVar8 - (long)param_2;
    puVar7 = puVar8;
    if (lVar4 < lVar1) {
      for (puVar5 = param_3 + lVar4; puVar5 != param_4; puVar5 = puVar5 + 1) {
        *puVar7 = *puVar5;
        puVar7 = (undefined1 *)(param_1[1] + 1);
        param_1[1] = (long)puVar7;
      }
      param_4 = param_3 + lVar4;
      if (lVar4 < 1) {
        return param_2;
      }
    }
    puVar2 = puVar7 + -lVar1;
    puVar5 = puVar7;
    if (puVar2 < puVar8) {
      do {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        lVar4 = param_1[1];
        param_1[1] = lVar4 + 1;
        puVar5 = (undefined1 *)(lVar4 + 1);
      } while (puVar8 != puVar2);
    }
    _memmove(puVar7 + -((long)puVar7 - (long)(param_2 + lVar1)),param_2,
             (long)puVar7 - (long)(param_2 + lVar1));
    _memmove(param_2,param_3,(long)param_4 - (long)param_3);
    return param_2;
  }
  pvVar6 = (void *)*param_1;
  puVar8 = puVar8 + (lVar1 - (long)pvVar6);
  if ((long)puVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar3 = param_1[2] - (long)pvVar6;
  if (uVar3 < 0x3fffffffffffffff) {
    puVar7 = (undefined1 *)(uVar3 * 2);
    if (puVar7 < puVar8) {
      puVar7 = puVar8;
    }
    lVar1 = (long)param_2 - (long)pvVar6;
    puVar8 = (undefined1 *)0x0;
    pvVar9 = (void *)0x0;
    if (puVar7 == (undefined1 *)0x0) goto LAB_100a28a3d;
  }
  else {
    lVar1 = (long)param_2 - (long)pvVar6;
    puVar7 = (undefined1 *)0x7fffffffffffffff;
  }
  puVar8 = puVar7;
  pvVar9 = operator_new((ulong)puVar8);
LAB_100a28a3d:
  puVar7 = (undefined1 *)((long)pvVar9 + lVar1);
  puVar5 = puVar7;
  if (param_3 != param_4) {
    do {
      *puVar5 = *param_3;
      puVar5 = puVar5 + 1;
      param_3 = param_3 + 1;
    } while (param_4 != param_3);
    pvVar6 = (void *)*param_1;
  }
  pvVar10 = (void *)((long)pvVar9 + (lVar1 - ((long)param_2 - (long)pvVar6)));
  _memcpy(pvVar10,pvVar6,(long)param_2 - (long)pvVar6);
  lVar1 = param_1[1];
  _memcpy(puVar5,param_2,lVar1 - (long)param_2);
  pvVar6 = (void *)*param_1;
  *param_1 = (long)pvVar10;
  param_1[1] = (long)(puVar5 + (lVar1 - (long)param_2));
  param_1[2] = (long)(puVar8 + (long)pvVar9);
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  return puVar7;
}

