
void FUN_100746200(QObject *param_1,int param_2)

{
  CReminder *this;
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  long local_30;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  *(int *)(param_1 + 0x84) = param_2;
  if (param_2 != 0) {
    if (((*(long *)(param_1 + 0x88) == 0) || (*(int *)(*(long *)(param_1 + 0x88) + 4) == 0)) ||
       (*(long *)(param_1 + 0x90) == 0)) {
      this = operator_new(0x20);
      CReminder::CReminder(this,param_1);
      piVar1 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
      piVar2 = *(int **)(param_1 + 0x88);
      if (piVar2 != piVar1) {
        if (piVar1 != (int *)0x0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          local_23 = *piVar1 != 0;
          UNLOCK();
          piVar2 = *(int **)(param_1 + 0x88);
        }
        if (piVar2 != (int *)0x0) {
          LOCK();
          *piVar2 = *piVar2 + -1;
          local_22 = *piVar2 != 0;
          UNLOCK();
          if ((!(bool)local_22) && (*(void **)(param_1 + 0x88) != (void *)0x0)) {
            operator_delete(*(void **)(param_1 + 0x88));
          }
        }
        *(int **)(param_1 + 0x88) = piVar1;
        *(CReminder **)(param_1 + 0x90) = this;
      }
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        local_21 = *piVar1 != 0;
        UNLOCK();
        if (!(bool)local_21) {
          operator_delete(piVar1);
        }
      }
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x88) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x88) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x90);
      }
      QObject::connect(&local_30,uVar3,"2timeout()",param_1,"1onAutoloadRemind()",0);
      if (local_30 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_30);
    }
    QTimer::stop();
    iVar4 = 0;
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (iVar4 = 0, *(int *)(*(long *)(param_1 + 0x88) + 4) != 0)) {
      iVar4 = (int)*(undefined8 *)(param_1 + 0x90);
    }
    CReminder::start(iVar4);
  }
  return;
}

