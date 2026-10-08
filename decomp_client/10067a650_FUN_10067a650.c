
void FUN_10067a650(long param_1,undefined4 param_2)

{
  CSocialSignInProgressDialog *this;
  QWidget *pQVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  long *plVar5;
  long local_38;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  if (((*(long *)(param_1 + 0x38) != 0) && (*(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) &&
     (*(long *)(param_1 + 0x40) != 0)) {
    QObject::deleteLater();
  }
  this = operator_new(0x68);
  CAbstractWizardModel::wizardCtrl();
  pQVar1 = (QWidget *)CWizardController::parentWidget();
  CSocialSignInProgressDialog::CSocialSignInProgressDialog(this,pQVar1);
  piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
  piVar3 = *(int **)(param_1 + 0x38);
  if (piVar3 != piVar2) {
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_2b = *piVar2 != 0;
      UNLOCK();
      piVar3 = *(int **)(param_1 + 0x38);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_2a = *piVar3 != 0;
      UNLOCK();
      if ((!(bool)local_2a) && (*(void **)(param_1 + 0x38) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x38));
      }
    }
    *(int **)(param_1 + 0x38) = piVar2;
    *(CSocialSignInProgressDialog **)(param_1 + 0x40) = this;
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
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
  }
  QWidget::setAttribute(uVar4,0x37,1);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
  }
  CSocialSignInProgressDialog::setMode(uVar4,param_2);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
  }
  QObject::connect(&local_38,uVar4,"2rejected()",param_1,"1onSocialSignInCancelled()",0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  plVar5 = (long *)0x0;
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (plVar5 = (long *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
    plVar5 = *(long **)(param_1 + 0x40);
  }
  (**(code **)(*plVar5 + 0x1a0))();
  return;
}

