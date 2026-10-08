
void FUN_100a337b0(long *param_1,ulong param_2)

{
  void *pvVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  
  puVar3 = (undefined1 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar3)) {
    do {
      *puVar3 = 0;
      puVar3 = (undefined1 *)(param_1[1] + 1);
      param_1[1] = (long)puVar3;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    return;
  }
  lVar2 = *param_1;
  puVar3 = puVar3 + (param_2 - lVar2);
  if ((long)puVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar7 = param_1[2] - lVar2;
  if (uVar7 < 0x3fffffffffffffff) {
    puVar4 = (undefined1 *)(uVar7 * 2);
    if (puVar4 < puVar3) {
      puVar4 = puVar3;
    }
    lVar2 = param_1[1] - lVar2;
    puVar3 = (undefined1 *)0x0;
    pvVar5 = (void *)0x0;
    if (puVar4 == (undefined1 *)0x0) goto LAB_100a3386d;
  }
  else {
    lVar2 = param_1[1] - lVar2;
    puVar4 = (undefined1 *)0x7fffffffffffffff;
  }
  puVar3 = puVar4;
  pvVar5 = operator_new((ulong)puVar3);
LAB_100a3386d:
  puVar4 = (undefined1 *)((long)pvVar5 + lVar2);
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  pvVar1 = (void *)*param_1;
  pvVar6 = (void *)((long)pvVar5 + (lVar2 - (param_1[1] - (long)pvVar1)));
  _memcpy(pvVar6,pvVar1,param_1[1] - (long)pvVar1);
  *param_1 = (long)pvVar6;
  param_1[1] = (long)puVar4;
  param_1[2] = (long)(puVar3 + (long)pvVar5);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar1);
  return;
}

