
undefined8 FUN_1002916e0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  QArrayData *pQVar5;
  long local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  iVar1 = *(int *)(param_1 + 0x38);
  uVar2 = FUN_100152280();
  if (iVar1 == 0) {
    lVar3 = FUN_100152a20(uVar2,param_1 + 0x28);
    if (lVar3 == 0) {
      return 0x80000009;
    }
    local_30 = (QArrayData *)
               QString::fromAscii_helper("{7E94A5DF-AB86-47a1-B4EA-FECFC6A197DB}",0x26);
    if (*(char *)(param_1 + 0x3c) == '\0') {
      pcVar4 = "0";
    }
    else {
      pcVar4 = "1";
    }
    local_38 = (QArrayData *)QString::fromAscii_helper(pcVar4,1);
    lVar3 = FUN_100175d50(lVar3,&local_30,&local_38,0);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10029186c;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_10029186c:
    if (*(int *)local_30 == -1) goto LAB_10029189c;
    pQVar5 = local_30;
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      iVar1 = *(int *)local_30;
      UNLOCK();
      goto joined_r0x000100291887;
    }
  }
  else {
    lVar3 = FUN_1001548f0(uVar2,param_1 + 0x30);
    if (lVar3 == 0) {
      return 0x80000009;
    }
    local_40 = (QArrayData *)
               QString::fromAscii_helper("{8192FAEF-2E17-4c75-8B21-97E5180E30EE}",0x26);
    if (*(char *)(param_1 + 0x3c) == '\0') {
      pcVar4 = "0";
    }
    else {
      pcVar4 = "1";
    }
    local_48 = (QArrayData *)QString::fromAscii_helper(pcVar4,1);
    lVar3 = FUN_100198ac0(lVar3,&local_40,&local_48,0);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002917e3;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1002917e3:
    if (*(int *)local_40 == -1) goto LAB_10029189c;
    pQVar5 = local_40;
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      iVar1 = *(int *)local_40;
      UNLOCK();
joined_r0x000100291887:
      local_21 = iVar1 != 0;
      if ((bool)local_21) goto LAB_10029189c;
    }
  }
  QArrayData::deallocate(pQVar5,2,8);
LAB_10029189c:
  uVar2 = 0x80000009;
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0x60) = 1;
    CAbstractTask::setWaitForSubTaskCompletion();
    uVar2 = 0;
    QObject::connect(&local_50,lVar3,"2jobCompleted(PRL_RESULT)",param_1,
                     "1subTaskCompleted(PRL_RESULT)",0);
    if (local_50 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_50);
  }
  return uVar2;
}

