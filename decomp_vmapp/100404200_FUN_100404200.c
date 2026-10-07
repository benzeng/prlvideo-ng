
void FUN_100404200(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar7 = (undefined8 *)*param_1;
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 == puVar7) {
    puVar1 = (undefined8 *)param_1[2];
    puVar5 = (undefined8 *)param_1[3];
    if (puVar1 < puVar5) {
      lVar2 = (long)puVar5 - (long)puVar1 >> 3;
      lVar2 = (lVar2 + 1) - (lVar2 + 1 >> 0x3f) >> 1;
      puVar7 = puVar1 + (lVar2 - ((ulong)((long)puVar1 - (long)puVar6) >> 3));
      _memmove(puVar7,puVar6,(long)puVar1 - (long)puVar6);
      param_1[1] = (long)puVar7;
      param_1[2] = param_1[2] + lVar2 * 8;
      puVar6 = puVar7;
    }
    else {
      lVar3 = (long)puVar5 - (long)puVar6 >> 2;
      lVar2 = 1;
      if (lVar3 != 0) {
        lVar2 = lVar3;
      }
      pvVar4 = operator_new(lVar2 * 8);
      puVar8 = (undefined8 *)((lVar2 * 2 + 6U & 0xfffffffffffffff8) + (long)pvVar4);
      puVar5 = puVar8;
      if (puVar6 != puVar1) {
        do {
          *puVar5 = *puVar6;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        } while (puVar1 != puVar6);
        puVar7 = (undefined8 *)*param_1;
      }
      *param_1 = (long)pvVar4;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = (long)((long)pvVar4 + lVar2 * 8);
      puVar6 = puVar8;
      if (puVar7 != (undefined8 *)0x0) {
        operator_delete(puVar7);
        puVar6 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar6[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}

