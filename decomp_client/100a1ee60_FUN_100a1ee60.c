
undefined8 * FUN_100a1ee60(undefined8 *param_1,void **param_2,long *param_3)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar2 = *param_2;
  if (*puVar2 < 2) {
    puVar6 = (undefined8 *)*param_3;
  }
  else {
    lVar3 = *param_3;
    uVar1 = puVar2[2];
    FUN_100a1edb0(param_2,puVar2[1]);
    puVar6 = (undefined8 *)
             ((long)*param_2 +
             ((long)(int)((ulong)(lVar3 - (long)(puVar2 + (ulong)uVar1 * 2 + 4)) >> 3) +
             (long)*(int *)((long)*param_2 + 8)) * 8 + 0x10);
    *param_3 = (long)puVar6;
  }
  puVar6 = (undefined8 *)*puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    QVariant::~QVariant((QVariant *)(puVar6 + 4));
    piVar4 = (int *)*puVar6;
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if ((*piVar4 == 0) && ((void *)*puVar6 != (void *)0x0)) {
        operator_delete((void *)*puVar6);
      }
    }
    operator_delete(puVar6);
  }
  uVar5 = QListData::erase(param_2);
  *param_1 = uVar5;
  return param_1;
}

