
void FUN_1003f8850(undefined8 *param_1)

{
  undefined8 *puVar1;
  QArrayData *pQVar2;
  
  *param_1 = &PTR_FUN_101119bd0;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 == (undefined8 *)0x0) goto LAB_1003f88d6;
  pQVar2 = (QArrayData *)puVar1[1];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1003f88a0;
      pQVar2 = (QArrayData *)puVar1[1];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1003f88a0:
  pQVar2 = (QArrayData *)*puVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1003f88ce;
      pQVar2 = (QArrayData *)*puVar1;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1003f88ce:
  operator_delete(puVar1);
LAB_1003f88d6:
  operator_delete(param_1);
  return;
}

