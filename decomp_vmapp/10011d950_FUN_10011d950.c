
undefined8 * FUN_10011d950(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  QArrayData *pQVar1;
  long lVar2;
  QString QVar3;
  
  QVar3.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_2 + 8) != 0) {
    QVar3.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_2 + 8) + 0x10);
  }
  pQVar1 = (QArrayData *)*param_3;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  lVar2 = CVmEvent::getEventParameter(QVar3);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10011d9c1;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10011d9c1:
  if (lVar2 == 0) {
    *param_1 = PTR_shared_null_100ba2188;
  }
  else {
    CVmEventParameter::getValuesList();
  }
  return param_1;
}

