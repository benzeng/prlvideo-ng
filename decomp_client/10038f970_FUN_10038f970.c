
QObject * FUN_10038f970(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  QObject *pQVar4;
  int *piVar5;
  QObject *pQVar6;
  
  if ((DAT_102312290 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_102312290), iVar3 != 0)) {
    DAT_102312288 = (QObject *)0x0;
    DAT_102312280 = (int *)0x0;
    ___cxa_atexit(FUN_10038fcf0,&DAT_102312280,0x100000000);
    ___cxa_guard_release(&DAT_102312290);
  }
  if (((DAT_102312280 == (int *)0x0) || (DAT_102312280[1] == 0)) ||
     (DAT_102312288 == (QObject *)0x0)) {
    pQVar4 = operator_new(0x68);
    FUN_10038f8b0(pQVar4,0);
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
    piVar2 = DAT_102312280;
    pQVar6 = DAT_102312288;
    if (DAT_102312280 != piVar5) {
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      piVar1 = DAT_102312280;
      piVar2 = piVar5;
      pQVar6 = pQVar4;
      if (DAT_102312280 != (int *)0x0) {
        LOCK();
        *DAT_102312280 = *DAT_102312280 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (DAT_102312280 != (int *)0x0)) {
          operator_delete(DAT_102312280);
        }
      }
    }
    DAT_102312288 = pQVar6;
    DAT_102312280 = piVar2;
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 == 0) {
        operator_delete(piVar5);
      }
    }
    QWidget::show();
  }
  QWidget::raise();
  QWidget::activateWindow();
  if (DAT_102312280 == (int *)0x0) {
    pQVar6 = (QObject *)0x0;
  }
  else {
    pQVar6 = (QObject *)0x0;
    if (DAT_102312280[1] != 0) {
      pQVar6 = DAT_102312288;
    }
  }
  return pQVar6;
}

