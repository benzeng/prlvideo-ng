
void FUN_100a2a110(CSdkCommunicator *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined **)param_1 = &DAT_102280d70;
  CSdkCommunicator::stopCommunication();
  pQVar1 = *(QArrayData **)(param_1 + 0x38);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100a2a15d;
      pQVar1 = *(QArrayData **)(param_1 + 0x38);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100a2a15d:
  if (*(long *)(param_1 + 0x28) != 0) {
    _PrlHandle_Free();
  }
  CSdkCommunicator::~CSdkCommunicator(param_1);
  return;
}

