
undefined8 FUN_100297e80(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  QObject *pQVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  QWidget *pQVar8;
  long local_38;
  undefined1 local_2d;
  char local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  cVar1 = FUN_100296cb0(&local_2c,&local_2d);
  if (cVar1 == '\0') {
    pQVar3 = operator_new(0x38);
    if (DAT_1023108e8 == (void *)0x0) {
      pvVar4 = operator_new(0x18);
      FUN_1001ba940(pvVar4);
      DAT_1022727a8 = 1;
      DAT_1023108e8 = pvVar4;
    }
    uVar2 = FUN_1001baa90(DAT_1023108e8);
    FUN_10038ce30(pQVar3,uVar2,0);
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    piVar6 = *(int **)(param_1 + 0x30);
    if (piVar6 != piVar5) {
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        local_2b = *piVar5 != 0;
        UNLOCK();
        piVar6 = *(int **)(param_1 + 0x30);
      }
      if (piVar6 != (int *)0x0) {
        LOCK();
        *piVar6 = *piVar6 + -1;
        local_2a = *piVar6 != 0;
        UNLOCK();
        if ((!(bool)local_2a) && (*(void **)(param_1 + 0x30) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x30));
        }
      }
      *(int **)(param_1 + 0x30) = piVar5;
      *(QObject **)(param_1 + 0x38) = pQVar3;
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
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x38);
    }
    QObject::connect(&local_38,uVar7,"2finished(int)",param_1,"1presentationDialogFinished(int)",0);
    if (local_38 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar7 = FUN_1001d50a0();
    FUN_1001d50d0(uVar7);
    FUN_1001e1740();
    QWidget::show();
    QWidget::raise();
    QWidget::activateWindow();
    cVar1 = MacUtils::isFrontProcess();
    if (cVar1 == '\0') {
      pQVar8 = (QWidget *)0x0;
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (pQVar8 = (QWidget *)0x0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
        pQVar8 = *(QWidget **)(param_1 + 0x38);
      }
      QApplication::alert(pQVar8,0);
      MacUtils::bringProcessToFront();
    }
    CAbstractTask::setWaitForSubTaskCompletion();
    uVar7 = 0;
  }
  else {
    if (local_2c == '\0') {
      CAbstractTask::clearSubTaskList();
    }
    else {
      *(undefined1 *)(param_1 + 0x29) = local_2d;
    }
    uVar7 = 0x80000275;
    if (local_2c != '\0') {
      uVar7 = 0x3bfa;
    }
  }
  return uVar7;
}

