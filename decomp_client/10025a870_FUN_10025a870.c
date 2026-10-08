
undefined4 FUN_10025a870(long param_1)

{
  char cVar1;
  bool *pbVar2;
  undefined8 uVar3;
  Connection local_f0 [8];
  undefined4 local_e8;
  undefined1 local_e1;
  CVmSharing local_e0 [184];
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  CVmSharing::CVmSharing(local_e0,*(CVmSharing **)(param_1 + 0x30));
  pbVar2 = (bool *)FUN_100197ee0(uVar3,local_e0);
  CVmSharing::~CVmSharing(local_e0);
  local_e8 = 0x80000009;
  if (pbVar2 != (bool *)0x0) {
    local_e1 = 0;
    local_e8 = 0;
    cVar1 = CSdkRequest::isCompleted(pbVar2,(int *)&local_e1);
    if (cVar1 == '\0') {
      CAbstractTask::setWaitForSubTaskCompletion();
      QObject::connect(local_f0,pbVar2,"2jobCompleted(PRL_RESULT)",param_1,
                       "1onVmConfigCommitCompleted(PRL_RESULT)",0);
      QMetaObject::Connection::~Connection(local_f0);
      local_e8 = 0;
    }
  }
  return local_e8;
}

