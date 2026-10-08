
undefined8 FUN_100215940(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  CAppliance::getApplianceId();
  lVar1 = FUN_10015c320(uVar2,&local_30);
  *(long *)(param_1 + 0x38) = lVar1;
  if (*(int *)local_30 == -1) goto LAB_1002159d3;
  if (*(int *)local_30 == 0) {
LAB_1002159c0:
    QArrayData::deallocate(local_30,2,8);
  }
  else {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + -1;
    local_21 = *(int *)local_30 != 0;
    UNLOCK();
    if (!(bool)local_21) goto LAB_1002159c0;
  }
  lVar1 = *(long *)(param_1 + 0x38);
LAB_1002159d3:
  if (lVar1 == 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: failed to create an async request for appliance install");
    uVar2 = 0x80000009;
  }
  else {
    *(undefined1 *)(lVar1 + 0x60) = 1;
    CAbstractTask::setWaitForSubTaskCompletion();
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x30);
    }
    FUN_10079d6a0(uVar2);
    uVar2 = 0;
    QObject::connect(&local_38,*(undefined8 *)(param_1 + 0x38),"2jobCompleted(PRL_RESULT)",param_1,
                     "1onDownloadFinished(PRL_RESULT)",0);
    if (local_38 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_38);
  }
  return uVar2;
}

