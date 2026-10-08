
void FUN_1003e5c20(QString *param_1)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  undefined *puVar2;
  int iVar3;
  size_t sVar4;
  QArrayData *pQVar5;
  QString QVar6;
  QArrayData *local_30;
  
  QVar6.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)(*(long *)(param_1[3].field0_0x0 + 0x20) + 0x10);
  CBaseNode::toString(true,SUB81(QVar6.field0_0x0,0));
  CBaseNode::fromString(QVar6,true,(QString *)0x0,(int *)0x0,(int *)0x0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_1003e5c94;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1003e5c94:
  puVar2 = PTR_s_VmConfig_1021f1e00;
  iVar3 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar3 = (int)sVar4;
  }
  pQVar5 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar3);
  CMappingModel::addStorageToSubmit(param_1);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_1003e5cfb;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1003e5cfb:
  iVar3 = CMappingModel::getSubmitPolicy();
  if (iVar3 == 0) {
    CMappingModel::submit();
  }
  pQVar1 = param_1[3].field0_0x0;
  FUN_1003e3340(pQVar1);
  FUN_1003e31a0(pQVar1);
  CMappingModel::dataChanged();
  return;
}

