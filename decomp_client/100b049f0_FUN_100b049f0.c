
void FUN_100b049f0(undefined8 *param_1)

{
  Data *pDVar1;
  
  *param_1 = &PTR_FUN_1022cf110;
  pDVar1 = (Data *)param_1[2];
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_100b04a2e;
      pDVar1 = (Data *)param_1[2];
    }
    QListData::dispose(pDVar1);
  }
LAB_100b04a2e:
  FUN_100dd8b30(param_1);
  return;
}

