
void FUN_10060e4e0(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_100bc8220;
  pQVar1 = (QArrayData *)param_1[0xe];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10060e528;
      pQVar1 = (QArrayData *)param_1[0xe];
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_10060e528:
  pQVar1 = (QArrayData *)param_1[0xd];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10060e558;
      pQVar1 = (QArrayData *)param_1[0xd];
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_10060e558:
  *param_1 = &PTR_FUN_10111e628;
  FUN_1006139a0(param_1);
  QSemaphore::~QSemaphore((QSemaphore *)(param_1 + 9));
  return;
}

