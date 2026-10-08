
void FUN_10043d3b0(char *param_1,undefined4 param_2,QString *param_3,QString *param_4)

{
  uint uVar1;
  long lVar2;
  QVariant local_60;
  QVariant local_50;
  QVariant local_40;
  
  lVar2 = QDialogButtonBox::button(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10),0x400);
  if (lVar2 != 0) {
    QVariant::QVariant(&local_40,param_3);
    QObject::setProperty(param_1,(QVariant *)"systemName");
    QVariant::~QVariant(&local_40);
    QVariant::QVariant(&local_50,param_4);
    QObject::setProperty(param_1,(QVariant *)"userFriendlyName");
    QVariant::~QVariant(&local_50);
    uVar1 = FileDevSelectorHelpers::getEmulationType(param_2,*(undefined4 *)(param_1 + 0x70));
    QVariant::QVariant(&local_60,uVar1);
    QObject::setProperty(param_1,(QVariant *)"emulatedType");
    QVariant::~QVariant(&local_60);
    QWidget::setEnabled(SUB81(lVar2,0));
  }
  return;
}

