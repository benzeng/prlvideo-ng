
undefined8 FUN_1002167a0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  long local_158;
  undefined4 local_150;
  undefined4 local_14c;
  Data *local_148;
  QArrayData *local_140;
  CVmConfiguration local_138 [248];
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (*(int *)(param_1 + 0x40) == -1) {
    return 0x3bfa;
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_100794960();
  CAppliance::getApplianceId();
  FUN_1007964b0(&local_38,uVar2,&local_40);
  lVar3 = FUN_10015cb20(uVar5,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10021685b;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10021685b:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10021688b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10021688b:
  if (lVar3 == 0) {
    return 0x80000009;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  cVar1 = FUN_10018c2b0(lVar3);
  CBaseNode::toString(SUB81(&local_140,0),(bool)(cVar1 + '\x10'));
  FUN_100129dd0(local_138,&local_140);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_29 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100216905;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_100216905:
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1001bc010(*(undefined4 *)(param_1 + 0x40),uVar5,local_138);
  local_148 = (Data *)PTR_shared_null_1021e15e8;
  local_14c = 4;
  FUN_100129840(&local_148,&local_14c);
  local_150 = 5;
  FUN_100129840(&local_148,&local_150);
  pvVar4 = operator_new(600);
  FUN_100210650(pvVar4,local_138,lVar3,&local_148,0);
  CAbstractTask::execute();
  QObject::connect(&local_158,pvVar4,"2taskFinished(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  if (local_158 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_158);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_29 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100216a16;
    }
    QListData::dispose(local_148);
  }
LAB_100216a16:
  CVmConfiguration::~CVmConfiguration(local_138);
  return 0;
}

