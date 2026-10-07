
void FUN_10003c940(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_100ba7ec8;
  param_1[5] = &PTR_FUN_100ba7f58;
  FUN_100519360(DAT_1011c3698 + 0x10f0,0x11);
  QMutex::~QMutex((QMutex *)(param_1 + 0x17));
  pQVar1 = (QArrayData *)param_1[0x16];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10003c9c0;
      pQVar1 = (QArrayData *)param_1[0x16];
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_10003c9c0:
  FUN_10051bdd0(param_1);
  return;
}

