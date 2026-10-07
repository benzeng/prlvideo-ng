
void FUN_1004083c0(undefined8 param_1,undefined8 *param_2)

{
  QArrayData *pQVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_1004083c0(param_1,*param_2);
  FUN_1004083c0(param_1,param_2[1]);
  pQVar1 = (QArrayData *)param_2[4];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10040841d;
      pQVar1 = (QArrayData *)param_2[4];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10040841d:
  operator_delete(param_2);
  return;
}

