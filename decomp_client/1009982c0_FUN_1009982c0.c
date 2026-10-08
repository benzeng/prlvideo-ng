
void FUN_1009982c0(CDeclarativeWizardProxyPage *param_1,CAbstractWizardModel *param_2,int param_3,
                  QObject *param_4)

{
  void *pvVar1;
  long lVar2;
  QString *pQVar3;
  undefined8 uVar4;
  QPalette *pQVar5;
  
  CDeclarativeWizardProxyPage::CDeclarativeWizardProxyPage(param_1,param_2,param_3,param_4);
  *(undefined ***)param_1 = &PTR_FUN_102234130;
  pvVar1 = operator_new(0x38);
  FUN_100999860(pvVar1,param_1,0);
  CDeclarativeWizardProxyPage::setSourcePage((QWidget *)param_1);
  lVar2 = CDeclarativeWizardProxyPage::sourcePage();
  if (lVar2 != 0) {
    pQVar3 = (QString *)CDeclarativeWizardProxyPage::sourcePage();
    uVar4 = CAbstractWizardPage::wizardModel();
    FUN_100990b00(uVar4);
    QWidget::setStyleSheet(pQVar3);
    pQVar5 = (QPalette *)CDeclarativeWizardProxyPage::sourcePage();
    uVar4 = CAbstractWizardPage::wizardModel();
    FUN_100990b00(uVar4);
    QWidget::setPalette(pQVar5);
  }
  return;
}

