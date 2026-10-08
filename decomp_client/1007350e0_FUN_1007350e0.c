
/* WARNING: Type propagation algorithm not settling */

void FUN_1007350e0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  QPixmap *this;
  QPixmap local_120 [32];
  int *local_100;
  long local_f8;
  long local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8;
  long local_c0 [2];
  QImage local_b0 [32];
  QPixmap local_90 [32];
  QPixmap local_70 [32];
  QPixmap local_50 [39];
  undefined1 local_29;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x50) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    return;
  }
  uVar3 = FUN_10018c280();
  lVar4 = FUN_1003192a0(uVar3,*(undefined4 *)(param_1 + 0x20));
  if (lVar4 == 0) {
    return;
  }
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x50) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
  }
  iVar2 = FUN_10018a9d0(uVar3);
  if (iVar2 == 0x30000001) {
    QPixmap::QPixmap(local_50);
    FUN_100734e30(param_1,local_50);
    this = local_50;
    goto LAB_100735439;
  }
  QPixmap::QPixmap(local_70);
  if (iVar2 == 0x30000004) {
    pvVar5 = operator_new(0x90);
    local_e8 = 0xffffffff;
    local_e4 = 0xffffffff;
    local_e0 = 0;
    local_dc = 0;
    local_d8 = 0;
    local_d4 = 0xffffffff;
    local_d0 = 0xffffffff;
    local_cc = 0x50000008;
    local_c8 = 1;
    FUN_100292850(pvVar5,lVar4,&local_e8);
    QObject::connect(&local_f0,pvVar5,"2taskFinished(PRL_RESULT)",param_1,
                     "1onCurrentScreenshotUpdated(PRL_RESULT)",0);
    if (local_f0 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_f0);
    CAbstractTask::execute();
LAB_10073539d:
    uVar3 = FUN_100370280();
    FUN_100370e30(&local_100,uVar3,param_1 + 0x18,*(undefined4 *)(param_1 + 0x20));
    if (local_100 != (int *)0x0) {
      lVar4 = 0;
      if (local_100[1] != 0) {
        lVar4 = local_f8;
      }
      LOCK();
      *local_100 = *local_100 + -1;
      local_29 = *local_100 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_100 != (int *)0x0)) {
        operator_delete(local_100);
      }
      if (lVar4 != 0) {
        FUN_10037a2d0(local_120,lVar4);
        cVar1 = QPixmap::isNull();
        if (cVar1 == '\0') {
          FUN_100734e30(param_1,local_120);
        }
        QPixmap::~QPixmap(local_120);
      }
    }
  }
  else {
    if (iVar2 != 0x30000009) goto LAB_10073539d;
    cVar1 = QPixmap::isNull();
    if (cVar1 == '\0') {
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x50) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x58);
      }
      cVar1 = FUN_100123880(uVar3);
      if (cVar1 != '\0') {
        uVar3 = 0;
        if ((*(long *)(param_1 + 0x50) != 0) &&
           (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) {
          uVar3 = *(undefined8 *)(param_1 + 0x58);
        }
        FUN_10018c2b0(uVar3);
        CVmConfiguration::getVmSettings();
        CVmSettings::getVmTools();
        cVar1 = CVmTools::isLockGuestOnSuspend();
        if (cVar1 != '\0') goto LAB_1007352dc;
      }
    }
    else {
LAB_1007352dc:
      local_c0[1] = 0xffffffffffffffff;
      FUN_100326550(local_b0,lVar4,local_c0 + 1);
      QPixmap::fromImage(local_90,local_b0,0);
      QPixmap::operator=(local_70,local_90);
      QPixmap::~QPixmap(local_90);
      QImage::~QImage(local_b0);
      cVar1 = QPixmap::isNull();
      if (cVar1 == '\0') {
        FUN_100734e30(param_1,local_70);
      }
      QObject::connect(local_c0,lVar4,"2suspendedScreenImageUpdated(QImage)",param_1,
                       "1onSuspendedScreenImageUpdated(QImage)",0);
      if (local_c0[0] != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)local_c0);
    }
  }
  this = local_70;
LAB_100735439:
  QPixmap::~QPixmap(this);
  return;
}

