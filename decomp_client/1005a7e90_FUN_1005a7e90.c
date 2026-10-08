
void FUN_1005a7e90(long param_1)

{
  CAbstractWizardModel *pCVar1;
  void *pvVar2;
  CDeclarativeWizardContentProvider *this;
  CContentArea *pCVar3;
  QWidget *pQVar4;
  
  WidgetUtils::setWindowResizeEnabled(*(QWidget **)(param_1 + 0x10),false);
  pvVar2 = operator_new(0x68);
  FUN_1005a89c0(pvVar2,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),param_1);
  *(void **)(param_1 + 0x28) = pvVar2;
  this = operator_new(0x50);
  CContentWindow::contentWidget();
  pCVar3 = (CContentArea *)CContentWidget::contentArea();
  pCVar1 = *(CAbstractWizardModel **)(param_1 + 0x28);
  pQVar4 = (QWidget *)CContentWindow::contentWidget();
  CDeclarativeWizardContentProvider::CDeclarativeWizardContentProvider
            (this,pCVar3,pCVar1,pQVar4,(QObject *)0x0);
  *(CDeclarativeWizardContentProvider **)(param_1 + 0x30) = this;
  return;
}

