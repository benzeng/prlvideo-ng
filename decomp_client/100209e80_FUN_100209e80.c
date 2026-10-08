
int FUN_100209e80(QString *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  QObject *pQVar4;
  QTypedArrayData<unsigned_short> *pQVar5;
  QTypedArrayData<unsigned_short> *pQVar6;
  QArrayData *pQVar7;
  long local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  long local_40;
  long local_38;
  undefined1 local_29;
  
  local_38 = 0;
  pQVar5 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[5].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar5 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[5].field0_0x0 + 4) != 0)) {
    pQVar5 = param_1[6].field0_0x0;
  }
  FUN_10015aa20(&local_40,pQVar5);
  lVar2 = local_40;
  if (local_38 != 0) {
    _PrlHandle_Free();
  }
  local_38 = 0;
  iVar3 = _PrlSrv_CreateVm(lVar2,&local_38);
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  lVar2 = local_38;
  if (iVar3 < 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Can\'t create VM handle. Return code: [%.8X]",
                  iVar3);
    goto LAB_10020a1e5;
  }
  CBaseNode::toString(SUB81(&local_50,0),(bool)((char)param_1 + 'X'));
  QString::toUtf8();
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
  }
  iVar3 = _PrlVm_FromString(lVar2,local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100209f82;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100209f82:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100209fb2;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100209fb2:
  if (iVar3 < 0) goto LAB_10020a1e5;
  FUN_10080eb10(param_1,0);
  uVar1 = *(uint *)&param_1[0x2a].field0_0x0;
  pQVar5 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[5].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar5 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[5].field0_0x0 + 4) != 0)) {
    pQVar5 = param_1[6].field0_0x0;
  }
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getHomePath();
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  local_68 = local_38;
  if (local_38 != 0) {
    _PrlHandle_AddRef();
  }
  pQVar4 = (QObject *)FUN_10015e160(pQVar5,&local_58,&local_60,&local_68,(uVar1 & 4) << 9 | 0x1000);
  pQVar5 = (QTypedArrayData<unsigned_short> *)0x0;
  if (pQVar4 != (QObject *)0x0) {
    pQVar5 = (QTypedArrayData<unsigned_short> *)
             QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  }
  pQVar6 = param_1[0x28].field0_0x0;
  if (pQVar6 != pQVar5) {
    if (pQVar5 != (QTypedArrayData<unsigned_short> *)0x0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + 1;
      local_29 = *(int *)pQVar5 != 0;
      UNLOCK();
      pQVar6 = param_1[0x28].field0_0x0;
    }
    if (pQVar6 != (QTypedArrayData<unsigned_short> *)0x0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_29 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (param_1[0x28].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0))
      {
        operator_delete(param_1[0x28].field0_0x0);
      }
    }
    param_1[0x28].field0_0x0 = pQVar5;
    param_1[0x29].field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
  }
  if (pQVar5 != (QTypedArrayData<unsigned_short> *)0x0) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + -1;
    local_29 = *(int *)pQVar5 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(pQVar5);
    }
  }
  if (local_68 != 0) {
    _PrlHandle_Free();
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10020a105;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10020a105:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10020a135;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10020a135:
  iVar3 = -0x7ffffff7;
  if (((param_1[0x28].field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) ||
      (*(int *)(param_1[0x28].field0_0x0 + 4) == 0)) ||
     (pQVar4 = (QObject *)param_1[0x29].field0_0x0, pQVar4 == (QObject *)0x0)) goto LAB_10020a1e5;
  pQVar7 = (QArrayData *)QString::fromAscii_helper("handleCreationEvent",0x13);
  CSdkRequest::addEventFilter(pQVar4,param_1);
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_29 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10020a1b8;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_10020a1b8:
  iVar3 = 0;
  CAbstractTask::setWaitForSubTaskCompletion();
LAB_10020a1e5:
  if (local_38 != 0) {
    _PrlHandle_Free();
  }
  return iVar3;
}

