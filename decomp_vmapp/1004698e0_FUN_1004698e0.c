
undefined8 * FUN_1004698e0(undefined8 *param_1,void **param_2,long *param_3)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar2 = *param_2;
  if (*puVar2 < 2) {
    puVar7 = (undefined8 *)*param_3;
  }
  else {
    lVar3 = *param_3;
    uVar1 = puVar2[2];
    FUN_100469720(param_2,puVar2[1]);
    puVar7 = (undefined8 *)
             ((long)*param_2 +
             ((long)(int)((ulong)(lVar3 - (long)(puVar2 + (ulong)uVar1 * 2 + 4)) >> 3) +
             (long)*(int *)((long)*param_2 + 8)) * 8 + 0x10);
    *param_3 = (long)puVar7;
  }
  pvVar4 = (void *)*puVar7;
  if (pvVar4 != (void *)0x0) {
    pvVar5 = *(void **)((long)pvVar4 + 8);
    if (pvVar5 != (void *)0x0) {
      if (*(void **)((long)pvVar4 + 0x10) != pvVar5) {
        *(void **)((long)pvVar4 + 0x10) = pvVar5;
      }
      operator_delete(pvVar5);
    }
    operator_delete(pvVar4);
  }
  uVar6 = QListData::erase(param_2);
  *param_1 = uVar6;
  return param_1;
}

