
void FUN_1005a4a70(undefined8 param_1,undefined8 *param_2)

{
  QArrayData *pQVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_1005a4a70(param_1,*param_2);
  FUN_1005a4a70(param_1,param_2[1]);
  pQVar1 = (QArrayData *)param_2[5];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1005a4acd;
      pQVar1 = (QArrayData *)param_2[5];
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_1005a4acd:
  operator_delete(param_2);
  return;
}

