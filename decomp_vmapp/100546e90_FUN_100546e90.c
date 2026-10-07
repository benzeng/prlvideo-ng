
void FUN_100546e90(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_100bc54a8;
  if ((void *)param_1[8] != (void *)0x0) {
    _free((void *)param_1[8]);
  }
  if ((void *)param_1[9] != (void *)0x0) {
    _free((void *)param_1[9]);
  }
  pQVar1 = (QArrayData *)param_1[1];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100546ef4;
      pQVar1 = (QArrayData *)param_1[1];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100546ef4:
  operator_delete(param_1);
  return;
}

