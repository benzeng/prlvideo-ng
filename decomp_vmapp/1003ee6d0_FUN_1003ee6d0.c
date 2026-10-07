
void FUN_1003ee6d0(undefined8 *param_1)

{
  void *pvVar1;
  QArrayData *pQVar2;
  
  *param_1 = &PTR_FUN_100bbf530;
  pvVar1 = (void *)param_1[0xe4];
  if (pvVar1 != (void *)0x0) {
    FUN_1003ee7e0(pvVar1);
    operator_delete(pvVar1);
    param_1[0xe4] = 0;
  }
  *param_1 = &PTR_FUN_101119b98;
  if ((void *)param_1[2] != (void *)0x0) {
    _free((void *)param_1[2]);
    param_1[2] = 0;
  }
  pQVar2 = (QArrayData *)param_1[0xe3];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) {
        return;
      }
      pQVar2 = (QArrayData *)param_1[0xe3];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
  return;
}

