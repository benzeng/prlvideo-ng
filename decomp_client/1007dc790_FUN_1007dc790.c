
void FUN_1007dc790(long param_1)

{
  QString *pQVar1;
  CAbstractWizardModel *pCVar2;
  void *pvVar3;
  CDeclarativeWizardContentProvider *this;
  CContentArea *pCVar4;
  QWidget *pQVar5;
  QArrayData *local_40;
  undefined1 local_32;
  
  WidgetUtils::setWindowResizeEnabled(*(QWidget **)(param_1 + 0x10),false);
  pQVar1 = *(QString **)(param_1 + 0x10);
  FUN_1001c72e0(&local_40);
  QWidget::setWindowTitle(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_32 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_1007dc7fa;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007dc7fa:
  pvVar3 = operator_new(0x48);
  FUN_1007dcf50(pvVar3,*(undefined4 *)(param_1 + 0x18),param_1);
  *(void **)(param_1 + 0x20) = pvVar3;
  this = operator_new(0x50);
  CContentWindow::contentWidget();
  pCVar4 = (CContentArea *)CContentWidget::contentArea();
  pCVar2 = *(CAbstractWizardModel **)(param_1 + 0x20);
  pQVar5 = (QWidget *)CContentWindow::contentWidget();
  CDeclarativeWizardContentProvider::CDeclarativeWizardContentProvider
            (this,pCVar4,pCVar2,pQVar5,(QObject *)0x0);
  *(CDeclarativeWizardContentProvider **)(param_1 + 0x28) = this;
  return;
}

