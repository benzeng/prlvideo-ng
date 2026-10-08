
void FUN_1001fe6c0(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  long local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  puVar3 = *(uint **)(param_1 + 0x78);
  uVar6 = puVar3[2];
  if (puVar3[3] == uVar6) {
    if ((*(long *)(param_1 + 0x68) == 0) || (*(int *)(*(long *)(param_1 + 0x68) + 0x3c) != 0)) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: backup copy job failed");
      uVar7 = 0x80000009;
      if (*(long *)(param_1 + 0x68) != 0) {
        uVar7 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x3c);
      }
    }
    else {
      uVar7 = 0;
    }
    FUN_1001ff8b0(param_1,uVar7);
    return;
  }
  if (1 < *puVar3) {
    FUN_100036c40((undefined8 *)(param_1 + 0x78),puVar3[1]);
    puVar3 = *(uint **)(param_1 + 0x78);
    uVar6 = puVar3[2];
  }
  local_30.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(puVar3 + (long)(int)uVar6 * 2 + 4);
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_21 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    QObject::deleteLater();
  }
  if (*(long *)(param_1 + 0x70) == 0) {
    pvVar4 = operator_new(0x20);
    FUN_100d969d0(pvVar4);
    *(void **)(param_1 + 0x70) = pvVar4;
    cVar1 = FUN_100d96fc0(pvVar4);
    if (cVar1 == '\0') {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: Failed to authorize user session");
      FUN_1001ff8b0(param_1,0x80000009);
      goto LAB_1001fe914;
    }
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
  }
  uVar5 = FUN_10018c2b0(uVar5);
  FUN_100109d60(&local_38,uVar5,0);
  uVar2 = operator==(&local_30,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001fe806;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1001fe806:
  pvVar4 = operator_new(0x40);
  FUN_100da52c0(pvVar4,*(undefined8 *)(param_1 + 0x70),&local_30,param_1 + 0x48,uVar2);
  *(void **)(param_1 + 0x68) = pvVar4;
  QObject::connect(&local_40,pvVar4,"2finished()",param_1,"1onPathCopied()",0);
  if (local_40 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  if (cVar1 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","connected",
                  "Tasks/CTaskConvertOldFormatVmPD.cpp",0x1c5,"copyNextPath");
  }
  QThread::start(*(undefined8 *)(param_1 + 0x68),7);
LAB_1001fe914:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

