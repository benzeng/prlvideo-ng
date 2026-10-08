
void FUN_1005f2970(long param_1)

{
  char cVar1;
  QVariant local_28;
  
  QObject::sender();
  QObject::property((char *)&local_28);
  cVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_28);
  if (*(char *)(param_1 + 0x40) != cVar1) {
    *(char *)(param_1 + 0x40) = cVar1;
    CAbstractWizardPage::completeChanged();
  }
  return;
}

