
undefined1 *
FUN_100a2fb20(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  void *pvVar6;
  undefined1 *puVar7;
  void *pvVar8;
  void *pvVar9;
  long lVar10;
  
  lVar10 = (long)param_4 - (long)param_3;
  if (lVar10 < 1) {
    return param_2;
  }
  puVar7 = (undefined1 *)param_1[1];
  if (lVar10 <= param_1[2] - (long)puVar7) {
    lVar4 = (long)puVar7 - (long)param_2;
    puVar1 = puVar7;
    if (lVar4 < lVar10) {
      puVar5 = param_3 + lVar4;
      _memcpy(puVar7,puVar5,(long)param_4 - (long)puVar5);
      puVar1 = (undefined1 *)(((long)param_4 - (long)puVar5) + param_1[1]);
      param_1[1] = (long)puVar1;
      param_4 = puVar5;
      if (lVar4 < 1) {
        return param_2;
      }
    }
    puVar2 = puVar1 + -lVar10;
    puVar5 = puVar1;
    if (puVar2 < puVar7) {
      do {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        lVar4 = param_1[1];
        param_1[1] = lVar4 + 1;
        puVar5 = (undefined1 *)(lVar4 + 1);
      } while (puVar7 != puVar2);
    }
    _memmove(puVar1 + -((long)puVar1 - (long)(param_2 + lVar10)),param_2,
             (long)puVar1 - (long)(param_2 + lVar10));
    _memmove(param_2,param_3,(long)param_4 - (long)param_3);
    return param_2;
  }
  pvVar6 = (void *)*param_1;
  puVar7 = puVar7 + (lVar10 - (long)pvVar6);
  if ((long)puVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar3 = param_1[2] - (long)pvVar6;
  if (uVar3 < 0x3fffffffffffffff) {
    puVar1 = (undefined1 *)(uVar3 * 2);
    if (puVar1 < puVar7) {
      puVar1 = puVar7;
    }
    lVar10 = (long)param_2 - (long)pvVar6;
    puVar7 = (undefined1 *)0x0;
    pvVar8 = (void *)0x0;
    if (puVar1 == (undefined1 *)0x0) goto LAB_100a2fc38;
  }
  else {
    lVar10 = (long)param_2 - (long)pvVar6;
    puVar1 = (undefined1 *)0x7fffffffffffffff;
  }
  puVar7 = puVar1;
  pvVar8 = operator_new((ulong)puVar7);
LAB_100a2fc38:
  puVar1 = (undefined1 *)((long)pvVar8 + lVar10);
  puVar5 = puVar1;
  if (param_3 != param_4) {
    do {
      *puVar5 = *param_3;
      puVar5 = puVar5 + 1;
      param_3 = param_3 + 1;
    } while (param_4 != param_3);
    pvVar6 = (void *)*param_1;
  }
  pvVar9 = (void *)((long)pvVar8 + (lVar10 - ((long)param_2 - (long)pvVar6)));
  _memcpy(pvVar9,pvVar6,(long)param_2 - (long)pvVar6);
  lVar10 = param_1[1];
  _memcpy(puVar5,param_2,lVar10 - (long)param_2);
  pvVar6 = (void *)*param_1;
  *param_1 = (long)pvVar9;
  param_1[1] = (long)(puVar5 + (lVar10 - (long)param_2));
  param_1[2] = (long)(puVar7 + (long)pvVar8);
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  return puVar1;
}

