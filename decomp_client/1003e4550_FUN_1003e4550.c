
void FUN_1003e4550(long param_1,char param_2)

{
  long lVar1;
  char cVar2;
  QArrayData *local_38;
  
  cVar2 = CMappingModel::hasDataToSubmit();
  if ((cVar2 != '\0') && (cVar2 = CMappingModel::isSubmiting(), cVar2 != '\0')) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  CBaseNode::toString(true,(bool)(param_2 + '\x10'));
  CBaseNode::fromString
            ((QTypedArrayData<unsigned_short> *)(lVar1 + 0x10),true,(QString *)0x0,(int *)0x0,
             (int *)0x0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_1003e45e3;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1003e45e3:
  FUN_1003e3340(param_1);
  FUN_1003e31a0(param_1);
  CMappingModel::dataChanged();
  return;
}

