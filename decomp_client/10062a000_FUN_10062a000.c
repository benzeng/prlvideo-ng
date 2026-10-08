
undefined8 FUN_10062a000(QObject *param_1)

{
  QTimer *this;
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  Connection local_50 [8];
  Connection local_48 [8];
  code *local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  
  if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)) ||
     (*(long *)(param_1 + 0x30) == 0)) {
    this = operator_new(0x20);
    QTimer::QTimer(this,param_1);
    piVar1 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
    piVar2 = *(int **)(param_1 + 0x28);
    if (piVar2 != piVar1) {
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        local_30 = (undefined *)CONCAT71(local_30._1_7_,*piVar1 != 0);
        piVar2 = *(int **)(param_1 + 0x28);
      }
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        local_30 = (undefined *)CONCAT71(local_30._1_7_,*piVar2 != 0);
        if ((*piVar2 == 0) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x28));
        }
      }
      *(int **)(param_1 + 0x28) = piVar1;
      *(QTimer **)(param_1 + 0x30) = this;
    }
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      local_30 = (undefined *)CONCAT71(local_30._1_7_,*piVar1 != 0);
      if (*piVar1 == 0) {
        operator_delete(piVar1);
      }
    }
    *(byte *)(*(long *)(param_1 + 0x30) + 0x1c) = *(byte *)(*(long *)(param_1 + 0x30) + 0x1c) | 1;
    iVar6 = 0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (iVar6 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      iVar6 = (int)*(undefined8 *)(param_1 + 0x30);
    }
    QTimer::setInterval(iVar6);
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x30);
    }
    local_30 = PTR_timeout_1021e14c0;
    local_28 = 0;
    local_40 = FUN_100629d30;
    local_38 = 0;
    puVar3 = operator_new(0x20);
    *puVar3 = 1;
    *(code **)(puVar3 + 2) = FUN_10062a570;
    *(code **)(puVar3 + 4) = FUN_100629d30;
    *(undefined8 *)(puVar3 + 6) = 0;
    QObject::connectImpl
              (local_48,uVar5,&local_30,param_1,&local_40,puVar3,0,0,PTR_staticMetaObject_1021e14b8)
    ;
    QMetaObject::Connection::~Connection(local_48);
    QTimer::start();
  }
  pvVar4 = operator_new(0x50);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10062ae90(pvVar4,uVar5,param_1 + 0x40);
  local_30 = PTR_taskFinished_1021e1300;
  local_28 = 0;
  local_40 = FUN_10062a290;
  local_38 = 0;
  puVar3 = operator_new(0x20);
  *puVar3 = 1;
  *(code **)(puVar3 + 2) = FUN_10062a500;
  *(code **)(puVar3 + 4) = FUN_10062a290;
  *(undefined8 *)(puVar3 + 6) = 0;
  QObject::connectImpl
            (local_50,pvVar4,&local_30,param_1,&local_40,puVar3,0,0,PTR_staticMetaObject_1021e1308);
  QMetaObject::Connection::~Connection(local_50);
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::execute();
  return 0;
}

