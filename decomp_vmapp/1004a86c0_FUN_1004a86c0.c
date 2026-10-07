
undefined8 * FUN_1004a86c0(undefined8 *param_1,void **param_2,long *param_3)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  QArrayData *pQVar7;
  
  puVar2 = *param_2;
  if (*puVar2 < 2) {
    puVar6 = (undefined8 *)*param_3;
  }
  else {
    lVar3 = *param_3;
    uVar1 = puVar2[2];
    FUN_1004a8500(param_2,puVar2[1]);
    puVar6 = (undefined8 *)
             ((long)*param_2 +
             ((long)(int)((ulong)(lVar3 - (long)(puVar2 + (ulong)uVar1 * 2 + 4)) >> 3) +
             (long)*(int *)((long)*param_2 + 8)) * 8 + 0x10);
    *param_3 = (long)puVar6;
  }
  pvVar4 = (void *)*puVar6;
  if (pvVar4 == (void *)0x0) goto LAB_1004a875c;
  pQVar7 = *(QArrayData **)((long)pvVar4 + 8);
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (*(int *)pQVar7 != 0) goto LAB_1004a8751;
      pQVar7 = *(QArrayData **)((long)pvVar4 + 8);
    }
    QArrayData::deallocate(pQVar7,1,8);
  }
LAB_1004a8751:
  operator_delete(pvVar4);
LAB_1004a875c:
  uVar5 = QListData::erase(param_2);
  *param_1 = uVar5;
  return param_1;
}

