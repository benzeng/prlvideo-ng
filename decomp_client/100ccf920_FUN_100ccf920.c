
void FUN_100ccf920(undefined8 *param_1)

{
  undefined8 *puVar1;
  QArrayData *pQVar2;
  
  *param_1 = &PTR_FUN_10230f430;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 == (undefined8 *)0x0) goto LAB_100ccf9a6;
  pQVar2 = (QArrayData *)puVar1[1];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100ccf970;
      pQVar2 = (QArrayData *)puVar1[1];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100ccf970:
  pQVar2 = (QArrayData *)*puVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100ccf99e;
      pQVar2 = (QArrayData *)*puVar1;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100ccf99e:
  operator_delete(puVar1);
LAB_100ccf9a6:
  operator_delete(param_1);
  return;
}

