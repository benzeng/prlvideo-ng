
void FUN_1001369c0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  QVariant local_40;
  QVariant local_30;
  
  QAction::data();
  iVar1 = QComboBox::findData(param_1,&local_30,0x100,0x10);
  QVariant::~QVariant(&local_30);
  if (iVar1 != -1) {
    iVar2 = QComboBox::currentIndex();
    if (iVar2 == iVar1) {
      QAction::data();
      uVar3 = QVariant::toUInt((bool *)&local_40);
      FUN_1007fa980(param_1,uVar3);
      QVariant::~QVariant(&local_40);
    }
    else {
      QComboBox::setCurrentIndex((int)param_1);
    }
  }
  return;
}

