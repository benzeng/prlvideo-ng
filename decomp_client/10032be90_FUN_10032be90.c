
void FUN_10032be90(QObject *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10220bc90;
  FUN_10032bf90();
  if (*(long *)(param_1 + 0x20) != 0) {
    _PrlHandle_Free();
  }
  pQVar1 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10032beef;
      pQVar1 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10032beef:
  if (*(long *)(param_1 + 0x10) != 0) {
    _PrlHandle_Free();
  }
  QObject::~QObject(param_1);
  return;
}

