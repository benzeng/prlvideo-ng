
undefined8 FUN_1002d46e0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  Data_conflict local_70;
  undefined4 local_68;
  QArrayData *local_60;
  int *local_58 [4];
  QVariant local_38 [2];
  undefined1 local_19;
  
  local_60 = (QArrayData *)QString::fromAscii_helper("1onTaskOpenVmDesktopFinished()",0x1e);
  local_68 = 0x80000000;
  local_70.field7 = 0;
  FUN_100a1c600(local_58,param_1,&local_60,&local_70);
  QVariant::~QVariant((QVariant *)&local_70);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002d475f;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1002d475f:
  cVar1 = FUN_100356ac0(param_1 + 0x58,local_58);
  if (cVar1 == '\0') {
    uVar2 = 0x80000009;
    FUN_100df99c0("","prl_client_app",0,"Failed to prepare window for the migrated VM");
  }
  else {
    uVar2 = 0;
    CAbstractTask::setWaitForSubTaskCompletion();
  }
  QVariant::~QVariant(local_38);
  if (local_58[0] != (int *)0x0) {
    LOCK();
    *local_58[0] = *local_58[0] + -1;
    local_19 = *local_58[0] != 0;
    UNLOCK();
    if ((!(bool)local_19) && (local_58[0] != (int *)0x0)) {
      operator_delete(local_58[0]);
    }
  }
  return uVar2;
}

