
undefined8 FUN_100246760(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Connection local_48 [8];
  QArrayData *local_40;
  QArrayData *local_38;
  long local_30;
  undefined1 local_21;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x110) != 0) &&
     (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x110) + 4) != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x118);
  }
  FUN_10018c250(&local_30,uVar3);
  lVar1 = local_30;
  CBaseNode::toString(SUB81(&local_40,0),(bool)((char)param_1 + '('));
  QString::toUtf8();
  if ((1 < *(uint *)local_38) || (*(long *)(local_38 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_38,*(uint *)(local_38 + 4) + 1,*(uint *)(local_38 + 8) >> 0x1f);
  }
  iVar2 = _PrlVm_FromString(lVar1,local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100246821;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100246821:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100246851;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100246851:
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
  if (iVar2 < 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlVm_FromString failed.");
    uVar3 = 0x80000009;
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x110) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x110) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x118);
    }
    uVar4 = FUN_100197120(uVar4,0);
    QObject::connect(local_48,uVar4,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onValidationFinished(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection(local_48);
    CAbstractTask::setWaitForSubTaskCompletion();
  }
  return uVar3;
}

