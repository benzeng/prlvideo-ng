
void FUN_100136480(undefined8 param_1,uint param_2)

{
  uint uVar1;
  QVariant *this;
  QVariant local_70;
  QVariant local_60;
  QVariant local_50;
  QVariant local_40;
  
  if ((param_2 & 0xffffff00) == 0x700) {
    QVariant::QVariant(&local_40,0x701);
    uVar1 = QComboBox::findData(param_1,&local_40,0x100,0x10);
    QVariant::~QVariant(&local_40);
    if (uVar1 != 0xffffffff) goto LAB_1001366bd;
    QVariant::QVariant(&local_40,0x702);
    uVar1 = QComboBox::findData(param_1,&local_40,0x100,0x10);
    QVariant::~QVariant(&local_40);
    if (uVar1 != 0xffffffff) goto LAB_1001366bd;
    QVariant::QVariant(&local_40,0x703);
    uVar1 = QComboBox::findData(param_1,&local_40,0x100,0x10);
    this = &local_40;
  }
  else if ((param_2 == 0xaff) || (param_2 - 0xa01 < 9)) {
    QVariant::QVariant(&local_50,0xa04);
    uVar1 = QComboBox::findData(param_1,&local_50,0x100,0x10);
    QVariant::~QVariant(&local_50);
    if (uVar1 != 0xffffffff) goto LAB_1001366bd;
    QVariant::QVariant(&local_50,0xa05);
    uVar1 = QComboBox::findData(param_1,&local_50,0x100,0x10);
    QVariant::~QVariant(&local_50);
    if (uVar1 != 0xffffffff) goto LAB_1001366bd;
    QVariant::QVariant(&local_50,0xa06);
    uVar1 = QComboBox::findData(param_1,&local_50,0x100,0x10);
    QVariant::~QVariant(&local_50);
    if (uVar1 != 0xffffffff) goto LAB_1001366bd;
    QVariant::QVariant(&local_50,0xa07);
    uVar1 = QComboBox::findData(param_1,&local_50,0x100,0x10);
    QVariant::~QVariant(&local_50);
    if (uVar1 != 0xffffffff) goto LAB_1001366bd;
    QVariant::QVariant(&local_50,0xa08);
    uVar1 = QComboBox::findData(param_1,&local_50,0x100,0x10);
    QVariant::~QVariant(&local_50);
    if (uVar1 != 0xffffffff) goto LAB_1001366bd;
    QVariant::QVariant(&local_50,0xa09);
    uVar1 = QComboBox::findData(param_1,&local_50,0x100,0x10);
    this = &local_50;
  }
  else {
    QVariant::QVariant(&local_60,param_2);
    uVar1 = QComboBox::findData(param_1,&local_60,0x100,0x10);
    this = &local_60;
  }
  QVariant::~QVariant(this);
LAB_1001366bd:
  FUN_100134ea0();
  if (uVar1 != 0xffffffff) {
    QObject::blockSignals(SUB81(param_1,0));
    if ((((param_2 & 0xffffff00) == 0x700) || (param_2 == 0xaff)) || (param_2 - 0xa01 < 9)) {
      QVariant::QVariant(&local_70,param_2);
      QComboBox::setItemData((int)param_1,(QVariant *)(ulong)uVar1,(int)&local_70);
      QVariant::~QVariant(&local_70);
    }
    QComboBox::setCurrentIndex((int)param_1);
    QObject::blockSignals(SUB81(param_1,0));
    FUN_1001367e0(param_1);
  }
  return;
}

