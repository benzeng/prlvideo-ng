
void FUN_1003ecd50(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_101119b98;
  if ((void *)param_1[2] != (void *)0x0) {
    _free((void *)param_1[2]);
    param_1[2] = 0;
  }
  pQVar1 = (QArrayData *)param_1[0xe3];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1003ecdb4;
      pQVar1 = (QArrayData *)param_1[0xe3];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1003ecdb4:
  operator_delete(param_1);
  return;
}

