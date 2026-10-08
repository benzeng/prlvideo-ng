
undefined1 FUN_1005f3ea0(void)

{
  long lVar1;
  undefined1 uVar2;
  QVariant local_20;
  
  lVar1 = CDeclarativeWizardPage::pageContentItem();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    CDeclarativeWizardPage::pageContentItem();
    QObject::property((char *)&local_20);
    uVar2 = QVariant::toBool();
    QVariant::~QVariant(&local_20);
  }
  return uVar2;
}

