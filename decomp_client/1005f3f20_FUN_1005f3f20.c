
void FUN_1005f3f20(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  QVariant local_28;
  
  lVar1 = CDeclarativeWizardPage::pageContentItem();
  if (lVar1 != 0) {
    CDeclarativeWizardPage::pageContentItem();
    QObject::property((char *)&local_28);
    uVar2 = QVariant::toInt((bool *)&local_28);
    QVariant::~QVariant(&local_28);
    *(undefined4 *)(param_1 + 0x20) = uVar2;
  }
  return;
}

