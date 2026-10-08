
void FUN_1003e43d0(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  QArrayData *local_30;
  
  CMappingModel::endSubmit((int)*(undefined8 *)(param_1 + 0x10));
  lVar3 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  if (lVar3 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: invalid VM instance.");
    return;
  }
  if (-1 < param_2) {
    return;
  }
  iVar2 = CMappingModel::getSubmitPolicy();
  if (iVar2 != 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  uVar4 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  cVar1 = FUN_10018c2b0(uVar4);
  CBaseNode::toString(true,(bool)(cVar1 + '\x10'));
  CBaseNode::fromString
            ((QTypedArrayData<unsigned_short> *)(lVar3 + 0x10),true,(QString *)0x0,(int *)0x0,
             (int *)0x0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_1003e4488;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1003e4488:
  FUN_1003e3340(param_1);
  FUN_1003e31a0(param_1);
  CMappingModel::dataChanged();
  return;
}

