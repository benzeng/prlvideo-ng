
void FUN_1005a5e40(long param_1)

{
  QString QVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  QArrayData *local_30;
  
  cVar2 = CMappingModel::hasDataToSubmit();
  if (cVar2 != '\0') {
    return;
  }
  QVar1.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x20);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
  }
  bVar3 = (bool)FUN_10015a330(uVar4);
  CBaseNode::toString(true,bVar3);
  CBaseNode::fromString(QVar1,true,(QString *)0x0,(int *)0x0,(int *)0x0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_1005a5ed5;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005a5ed5:
  CMappingModel::dataChanged();
  FUN_10083e480(param_1);
  return;
}

