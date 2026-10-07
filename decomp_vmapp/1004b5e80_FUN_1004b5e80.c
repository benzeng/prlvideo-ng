
undefined8 * FUN_1004b5e80(undefined8 *param_1,void **param_2,long *param_3)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  QArrayData *pQVar6;
  
  puVar2 = *param_2;
  if (*puVar2 < 2) {
    puVar5 = (undefined8 *)*param_3;
  }
  else {
    lVar3 = *param_3;
    uVar1 = puVar2[2];
    FUN_1004b5cc0(param_2,puVar2[1]);
    puVar5 = (undefined8 *)
             ((long)*param_2 +
             ((long)(int)((ulong)(lVar3 - (long)(puVar2 + (ulong)uVar1 * 2 + 4)) >> 3) +
             (long)*(int *)((long)*param_2 + 8)) * 8 + 0x10);
    *param_3 = (long)puVar5;
  }
  puVar5 = (undefined8 *)*puVar5;
  if (puVar5 == (undefined8 *)0x0) goto LAB_1004b5f1a;
  pQVar6 = (QArrayData *)*puVar5;
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      UNLOCK();
      if (*(int *)pQVar6 != 0) goto LAB_1004b5f0f;
      pQVar6 = (QArrayData *)*puVar5;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_1004b5f0f:
  operator_delete(puVar5);
LAB_1004b5f1a:
  uVar4 = QListData::erase(param_2);
  *param_1 = uVar4;
  return param_1;
}

