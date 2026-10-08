
void FUN_1008464b0(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_102221910;
  pQVar1 = (QArrayData *)param_1[9];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1008464f8;
      pQVar1 = (QArrayData *)param_1[9];
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_1008464f8:
  FUN_100824650(param_1);
  return;
}

