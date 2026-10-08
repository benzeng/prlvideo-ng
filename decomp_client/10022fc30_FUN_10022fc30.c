
undefined8 FUN_10022fc30(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  Connection *this;
  char *pcVar4;
  Connection local_50 [8];
  Connection local_48 [8];
  Connection local_40 [8];
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 == 2) {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
    }
    lVar2 = FUN_10019ba90(uVar3);
    if (lVar2 == 0) {
      return 0x80000009;
    }
    QObject::connect(local_50,lVar2,"2jobCompleted(PRL_RESULT)",param_1,
                     "1subTaskCompleted(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection(local_50);
    return 0;
  }
  if (iVar1 == 1) {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
    }
    lVar2 = FUN_10019b8a0(uVar3,param_1 + 0x38,param_1 + 0x40);
    if (lVar2 == 0) {
      return 0x80000009;
    }
    pcVar4 = "1subTaskCompleted(PRL_RESULT)";
    this = local_48;
  }
  else {
    if (iVar1 != 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: unsupported task type.");
      goto LAB_10022fe0c;
    }
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    local_30 = (QArrayData *)QString::fromAscii_helper("531582ac-3dce-446f-8c26-dd7e3384dcf4",0x24);
    local_38 = (QArrayData *)PTR_shared_null_1021e1288;
    lVar2 = FUN_100198ef0(uVar3,&local_30,&local_38,0);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10022fd87;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_10022fd87:
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10022fdb7;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_10022fdb7:
    if (lVar2 == 0) {
      return 0x80000009;
    }
    pcVar4 = "1onLoginCompleted(PRL_RESULT)";
    this = local_40;
  }
  QObject::connect(this,lVar2,"2jobCompleted(PRL_RESULT)",param_1,pcVar4,0);
  QMetaObject::Connection::~Connection(this);
LAB_10022fe0c:
  CAbstractTask::setWaitForSubTaskCompletion();
  return 0;
}

