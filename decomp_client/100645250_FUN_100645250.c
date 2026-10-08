
void FUN_100645250(void)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = CDeclarativeWizardProxyPage::sourcePage();
  if (lVar2 != 0) {
    bVar1 = (bool)CDeclarativeWizardProxyPage::sourcePage();
    QWidget::setDisabled(bVar1);
    return;
  }
  return;
}

