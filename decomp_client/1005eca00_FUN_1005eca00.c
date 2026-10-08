
void FUN_1005eca00(CDeclarativeWizardProxyPage *param_1,CAbstractWizardModel *param_2,int param_3,
                  QObject *param_4)

{
  void *pvVar1;
  
  CDeclarativeWizardProxyPage::CDeclarativeWizardProxyPage(param_1,param_2,param_3,param_4);
  *(CAbstractWizardModel **)(param_1 + 0x48) = param_2;
  *(undefined ***)param_1 = &PTR_FUN_10221f7e0;
  pvVar1 = operator_new(0x60);
  FUN_1001a5d00(pvVar1,param_1,0);
  CDeclarativeWizardProxyPage::setSourcePage((QWidget *)param_1);
  return;
}

