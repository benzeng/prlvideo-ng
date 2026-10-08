
void FUN_1006017e0(QObject *param_1,undefined8 param_2,undefined1 param_3)

{
  CAbstractWizardModel *pCVar1;
  void *pvVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  CDeclarativeWizardContentProvider *this;
  CContentArea *pCVar6;
  QWidget *pQVar7;
  QString *pQVar8;
  QArrayData *local_40;
  long local_38;
  undefined1 local_29;
  
  pvVar2 = operator_new(0x38);
  FUN_1006021a0(pvVar2,param_2,param_3,param_1);
  *(void **)(param_1 + 0x18) = pvVar2;
  QObject::connect(&local_38,pvVar2,"2finished(PRL_RESULT)",param_1,"1onFinished(PRL_RESULT)",0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)) ||
     (*(long *)(param_1 + 0x30) == 0)) {
    pQVar3 = operator_new(0x48);
    CContentWindow::CContentWindow((CContentWindow *)pQVar3,0,0);
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    piVar5 = *(int **)(param_1 + 0x28);
    if (piVar5 != piVar4) {
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        local_29 = *piVar4 != 0;
        UNLOCK();
        piVar5 = *(int **)(param_1 + 0x28);
      }
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        local_29 = *piVar5 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x28));
        }
      }
      *(int **)(param_1 + 0x28) = piVar4;
      *(QObject **)(param_1 + 0x30) = pQVar3;
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar4);
      }
    }
  }
  else {
    param_1[0x38] = (QObject)0x1;
  }
  pQVar7 = (QWidget *)0x0;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (pQVar7 = (QWidget *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
    pQVar7 = *(QWidget **)(param_1 + 0x30);
  }
  pQVar8 = (QString *)0x0;
  WidgetUtils::setWindowResizeEnabled(pQVar7,false);
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (pQVar8 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
    pQVar8 = *(QString **)(param_1 + 0x30);
  }
  FUN_1001c72e0(&local_40);
  QWidget::setWindowTitle(pQVar8);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100601972;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100601972:
  this = operator_new(0x50);
  CContentWindow::contentWidget();
  pCVar6 = (CContentArea *)CContentWidget::contentArea();
  pCVar1 = *(CAbstractWizardModel **)(param_1 + 0x18);
  pQVar7 = (QWidget *)CContentWindow::contentWidget();
  CDeclarativeWizardContentProvider::CDeclarativeWizardContentProvider
            (this,pCVar6,pCVar1,pQVar7,param_1);
  *(CDeclarativeWizardContentProvider **)(param_1 + 0x20) = this;
  return;
}

