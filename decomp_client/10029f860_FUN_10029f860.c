
undefined8 FUN_10029f860(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  long local_28;
  undefined1 local_19;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_100146b90(&local_28,uVar3);
  lVar2 = local_28;
  CBaseNode::toString(SUB81(&local_38,0),(bool)((char)*(undefined8 *)(param_1 + 0x18) + '\x10'));
  QString::toUtf8();
  if ((1 < *(uint *)local_30) || (*(long *)(local_30 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_30,*(uint *)(local_30 + 4) + 1,*(uint *)(local_30 + 8) >> 0x1f);
  }
  iVar1 = _PrlVmDev_FromString(lVar2,local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10029f91c;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10029f91c:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10029f94c;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10029f94c:
  if (local_28 != 0) {
    _PrlHandle_Free();
  }
  if (iVar1 < 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: failed to update device handle configuration. RC [%.8X]",iVar1);
    uVar3 = 0x80000009;
  }
  else {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
    }
    lVar2 = FUN_100147630(uVar3);
    uVar3 = 0x80000009;
    if (lVar2 != 0) {
      uVar3 = 0;
      QObject::connect(&local_40,lVar2,"2jobCompleted(PRL_RESULT)",param_1,
                       "1subTaskCompleted(PRL_RESULT)",0);
      if (local_40 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      CAbstractTask::setWaitForSubTaskCompletion();
    }
  }
  return uVar3;
}

