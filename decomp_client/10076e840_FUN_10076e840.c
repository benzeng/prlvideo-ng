
void FUN_10076e840(long param_1)

{
  QString *pQVar1;
  CAbstractWizardModel *pCVar2;
  void *pvVar3;
  CDeclarativeWizardContentProvider *this;
  CContentArea *pCVar4;
  QWidget *pQVar5;
  QArrayData *local_38;
  undefined1 local_2a;
  
  WidgetUtils::setWindowResizeEnabled(*(QWidget **)(param_1 + 0x10),false);
  pQVar1 = *(QString **)(param_1 + 0x10);
  FUN_1001c72e0(&local_38);
  QWidget::setWindowTitle(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_2a = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_10076e8a8;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10076e8a8:
  pvVar3 = operator_new(0x48);
  FUN_10076f0a0(pvVar3,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),param_1);
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

