
void FUN_10026f5d0(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_100baf4a0;
  param_1[1] = &PTR_metaObject_100baf530;
  param_1[0xd] = &PTR_FUN_100baf5a8;
  param_1[0x14] = &PTR_FUN_100baf5d8;
  FUN_100257ee0();
  FUN_10026b7f0(param_1 + 0x14,1,0);
  if ((void *)param_1[0x46] != (void *)0x0) {
    _free((void *)param_1[0x46]);
  }
  QMutex::~QMutex((QMutex *)(param_1 + 0x44));
  pQVar1 = (QArrayData *)param_1[0x40];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10026f677;
      pQVar1 = (QArrayData *)param_1[0x40];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10026f677:
  param_1[0x14] = &PTR_FUN_100baf230;
  FUN_1003e08f0(param_1 + 0x1a);
  pQVar1 = (QArrayData *)param_1[0x17];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10026f6cb;
      pQVar1 = (QArrayData *)param_1[0x17];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10026f6cb:
  FUN_10025b110(param_1 + 0xd);
  FUN_100257ad0(param_1);
  return;
}

