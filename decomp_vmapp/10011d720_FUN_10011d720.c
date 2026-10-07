
bool FUN_10011d720(long param_1,undefined8 *param_2,int param_3)

{
  QArrayData *pQVar1;
  int iVar2;
  long lVar3;
  QString QVar4;
  bool bVar5;
  
  QVar4.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar4.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  pQVar1 = (QArrayData *)*param_2;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  lVar3 = CVmEvent::getEventParameter(QVar4);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10011d791;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10011d791:
  if (lVar3 == 0) {
    bVar5 = false;
  }
  else {
    iVar2 = CVmEventParameter::getParamType();
    bVar5 = iVar2 == param_3;
  }
  return bVar5;
}

