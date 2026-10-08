
undefined4 FUN_1001d12b0(long param_1,undefined4 param_2,char param_3,int param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  Connection local_58 [8];
  QVariant local_50;
  QArrayData *local_40;
  _func_void_Node_ptr *local_38;
  undefined1 local_29;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    FUN_100df99c0("[APP_QUIT]","prl_client_app",0,"Application quit task is already running");
    return 0x80000013;
  }
  FUN_100df99c0("[APP_QUIT]","prl_client_app",0,"Start closing application...");
  local_38 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  local_40 = (QArrayData *)QString::fromAscii_helper("actionOnClose",0xd);
  QVariant::QVariant(&local_50,param_4);
  FUN_10007af00(&local_38,&local_40,&local_50);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001d139c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001d139c:
  uVar3 = FUN_1001d50a0();
  pQVar4 = (QObject *)FUN_1002ad220(uVar3);
  piVar5 = (int *)0x0;
  if (pQVar4 != (QObject *)0x0) {
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  }
  piVar6 = *(int **)(param_1 + 0x18);
  if (piVar6 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_29 = *piVar5 != 0;
      UNLOCK();
      piVar6 = *(int **)(param_1 + 0x18);
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_29 = *piVar6 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x18));
      }
    }
    *(int **)(param_1 + 0x18) = piVar5;
    *(QObject **)(param_1 + 0x20) = pQVar4;
  }
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    local_29 = *piVar5 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar5);
    }
  }
  if (param_3 == '\0') {
    uVar2 = CAbstractTask::executeAndWait();
  }
  else {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    QObject::connect(local_58,uVar3,"2taskFinished(PRL_RESULT)",param_1,
                     "1onCloseApplicationTaskFinished(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection(local_58);
    pQVar4 = (QObject *)0x0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pQVar4 = (QObject *)0x0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      pQVar4 = *(QObject **)(param_1 + 0x20);
    }
    uVar2 = 0x80000013;
    QTimer::singleShot(0,pQVar4,"1execute()");
  }
  if (*(int *)(local_38 + 0x10) != -1) {
    if (*(int *)(local_38 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_38 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return uVar2;
      }
      local_29 = 0;
    }
    QHashData::free_helper(local_38);
  }
  return uVar2;
}

