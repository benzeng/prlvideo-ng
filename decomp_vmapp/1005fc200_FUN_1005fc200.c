
void FUN_1005fc200(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_100bc7980;
  pQVar1 = (QArrayData *)param_1[0xe];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1005fc248;
      pQVar1 = (QArrayData *)param_1[0xe];
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_1005fc248:
  pQVar1 = (QArrayData *)param_1[0xd];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1005fc278;
      pQVar1 = (QArrayData *)param_1[0xd];
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_1005fc278:
  FUN_1005fa1b0(param_1);
  return;
}

