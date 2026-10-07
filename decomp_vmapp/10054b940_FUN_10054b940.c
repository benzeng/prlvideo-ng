
void FUN_10054b940(undefined8 *param_1)

{
  void *pvVar1;
  QArrayData *pQVar2;
  
  *param_1 = &PTR_FUN_100bc5680;
  pvVar1 = (void *)param_1[0x18];
  if (pvVar1 != (void *)0x0) {
    FUN_100546d50(pvVar1);
    operator_delete(pvVar1);
  }
  pQVar2 = (QArrayData *)param_1[0x15];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_10054b9ae;
      pQVar2 = (QArrayData *)param_1[0x15];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10054b9ae:
  FUN_100544840(param_1 + 0x11);
  pQVar2 = (QArrayData *)param_1[0xe];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_10054b9ee;
      pQVar2 = (QArrayData *)param_1[0xe];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10054b9ee:
  FUN_1007614a0(param_1 + 0xd);
  pQVar2 = (QArrayData *)param_1[0xb];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_10054ba26;
      pQVar2 = (QArrayData *)param_1[0xb];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10054ba26:
  pQVar2 = (QArrayData *)param_1[10];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_10054ba56;
      pQVar2 = (QArrayData *)param_1[10];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10054ba56:
  FUN_100544f50(param_1);
  return;
}

