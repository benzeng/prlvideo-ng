
void FUN_100408540(undefined8 param_1,undefined8 *param_2)

{
  QArrayData *pQVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_100408540(param_1,*param_2);
  FUN_100408540(param_1,param_2[1]);
  pQVar1 = (QArrayData *)param_2[4];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10040859d;
      pQVar1 = (QArrayData *)param_2[4];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10040859d:
  operator_delete(param_2);
  return;
}

