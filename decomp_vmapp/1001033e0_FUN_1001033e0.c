
void FUN_1001033e0(QObject *param_1)

{
  long lVar1;
  int iVar2;
  QTimer *this;
  int *piVar3;
  undefined8 uVar4;
  int *piVar5;
  Connection local_40 [8];
  Connection local_38 [15];
  undefined1 local_29;
  
  this = operator_new(0x20);
  QTimer::QTimer(this,param_1);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
  piVar5 = *(int **)(param_1 + 0x38);
  if (piVar5 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_29 = *piVar3 != 0;
      UNLOCK();
      piVar5 = *(int **)(param_1 + 0x38);
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_29 = *piVar5 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x38) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x38));
      }
    }
    *(int **)(param_1 + 0x38) = piVar3;
    *(QTimer **)(param_1 + 0x40) = this;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_29 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar3);
    }
  }
  *(byte *)(*(long *)(param_1 + 0x40) + 0x1c) = *(byte *)(*(long *)(param_1 + 0x40) + 0x1c) | 1;
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
  }
  QObject::connect(local_38,uVar4,"2timeout()",param_1,"1onGuestCommandTimout()",0);
  QMetaObject::Connection::~Connection(local_38);
  FUN_1008e3970("","vm",0,"collectData() started");
  iVar2 = FUN_100103720(param_1);
  FUN_1008e3970("","vm",0,"collectData() finished");
  if (-1 < iVar2) {
    QMutex::lock();
    lVar1 = DAT_1011cc7e0;
    if (DAT_1011cc7e0 != 0) {
      DAT_1011cc7e8 = DAT_1011cc7e8 + 1;
    }
    QMutex::unlock();
    QObject::connect(local_40,lVar1,"2reportCommandProcess( PRL_RESULT, uint, QString, QString )",
                     param_1,"1onGuestCommandProcess( PRL_RESULT, uint, QString, QString )",2);
    QMetaObject::Connection::~Connection(local_40);
    FUN_1008e3970("","vm",0,"runNextGuestProgram() started");
    iVar2 = FUN_100103800(param_1);
    FUN_1008e3970("","vm",0,"runNextGuestProgram() finished");
    if (iVar2 == -0x7fffffed) {
      if (lVar1 != 0) {
        FUN_10003b2b0(&DAT_1011cc7d0);
      }
      return;
    }
    uVar4 = FUN_1007dd120(iVar2);
    FUN_1008e3970("","vm",0,"Cannot run first guest programm with code %s",uVar4);
    piVar5 = (int *)___cxa_allocate_exception(4);
    *piVar5 = iVar2;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(piVar5,PTR_typeinfo_100ba22d8,0);
  }
  uVar4 = FUN_1007dd120(iVar2);
  FUN_1008e3970("","vm",0,"Failed to collect data with code %s",uVar4);
  piVar5 = (int *)___cxa_allocate_exception(4);
  *piVar5 = iVar2;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(piVar5,PTR_typeinfo_100ba22d8,0);
}

