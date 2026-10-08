
undefined8 FUN_100266950(long param_1)

{
  QObject *pQVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Connection local_60 [8];
  Connection local_58 [8];
  Connection local_50 [8];
  Data_conflict local_48;
  undefined4 local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: server instance is invalid.");
    return 0x80000009;
  }
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  local_40 = 0x80000000;
  local_48.field7 = 0;
  pQVar1 = (QObject *)
           FUN_10015e4c0(*(long *)(param_1 + 0x20),param_1 + 0x30,param_1 + 0x60,0,&local_38,
                         &local_48);
  piVar2 = (int *)0x0;
  if (pQVar1 != (QObject *)0x0) {
    piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
  }
  piVar3 = *(int **)(param_1 + 0x78);
  if (piVar3 != piVar2) {
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_29 = *piVar2 != 0;
      UNLOCK();
      piVar3 = *(int **)(param_1 + 0x78);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_29 = *piVar3 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x78) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x78));
      }
    }
    *(int **)(param_1 + 0x78) = piVar2;
    *(QObject **)(param_1 + 0x80) = pQVar1;
  }
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_29 = *piVar2 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar2);
    }
  }
  QVariant::~QVariant((QVariant *)&local_48);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100266a66;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100266a66:
  uVar4 = 0x80000009;
  if (((*(long *)(param_1 + 0x78) != 0) && (*(int *)(*(long *)(param_1 + 0x78) + 4) != 0)) &&
     (*(long *)(param_1 + 0x80) != 0)) {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar5 = 0;
    QObject::connect(local_50,uVar4,"2afterVmAdded(const CVmWrap&)",param_1,
                     "1onAfterVmAdded(const CVmWrap&)",0);
    QMetaObject::Connection::~Connection(local_50);
    if ((*(long *)(param_1 + 0x78) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x78) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x80);
    }
    uVar4 = 0;
    QObject::connect(local_58,uVar5,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onConvertFinished(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection(local_58);
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x78) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x78) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x80);
    }
    QObject::connect(local_60,uVar5,"2jobProgressChanged(uint)",param_1,"1onConvertPogress(uint)",0)
    ;
    QMetaObject::Connection::~Connection(local_60);
    CAbstractTask::setWaitForSubTaskCompletion();
  }
  return uVar4;
}

