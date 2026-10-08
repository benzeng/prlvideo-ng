
undefined8 FUN_1001fcb80(long param_1)

{
  char cVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_50;
  Data_conflict local_48;
  undefined4 local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)) ||
     (*(long *)(param_1 + 0x30) == 0)) {
    local_30 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  else {
    FUN_100188480(&local_30);
  }
  pQVar2 = operator_new(0x68);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100144480(pQVar2,uVar6);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  piVar4 = *(int **)(param_1 + 0xa0);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_21 = *piVar3 != 0;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0xa0);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_21 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (*(void **)(param_1 + 0xa0) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0xa0));
      }
    }
    *(int **)(param_1 + 0xa0) = piVar3;
    *(QObject **)(param_1 + 0xa8) = pQVar2;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_21 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar3);
    }
  }
  (**(code **)(**(long **)(param_1 + 0xa8) + 0x1a0))();
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x50) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x58);
  }
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_10018d860(&local_38,uVar7);
  local_40 = 0x80000000;
  local_48.field7 = 0;
  lVar5 = FUN_10015e230(uVar6,&local_38,0,&local_30,&local_48);
  QVariant::~QVariant((QVariant *)&local_48);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001fcd19;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1001fcd19:
  if (lVar5 != 0) {
    QObject::connect(&local_50,lVar5,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onConvertFinished(PRL_RESULT)",0);
    if (local_50 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    if (cVar1 == '\0') {
      FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","connected",
                    "Tasks/CTaskConvertOldFormatVmPD.cpp",0xce,"convertVm");
    }
  }
  cVar1 = FUN_100d80630(1);
  if (cVar1 == '\0') {
    FUN_1001fceb0(param_1);
  }
  FUN_10080da90(param_1,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return 0;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return 0;
}

