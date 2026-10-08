
void FUN_1007d77a0(long param_1,undefined8 *param_2)

{
  QArrayData *pQVar1;
  
  pQVar1 = (QArrayData *)*param_2;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  CSbaInstallation::setDstVer((QTypedArrayData<unsigned_short> *)(param_1 + 0x140));
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1007d7804;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1007d7804:
  FUN_1007d7460(param_1);
  return;
}

