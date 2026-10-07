
void FUN_100503360(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_100bc4180;
  pQVar1 = (QArrayData *)param_1[0xd];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1005033a3;
      pQVar1 = (QArrayData *)param_1[0xd];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1005033a3:
  pQVar1 = (QArrayData *)param_1[0xc];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1005033d3;
      pQVar1 = (QArrayData *)param_1[0xc];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1005033d3:
  *param_1 = &PTR_FUN_100bc4130;
  pQVar1 = (QArrayData *)param_1[0xb];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10050340d;
      pQVar1 = (QArrayData *)param_1[0xb];
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_10050340d:
  FUN_100502e60(param_1);
  return;
}

