
void FUN_100133880(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  QVariant local_70;
  QVariant local_60;
  QVariant local_50;
  QVariant local_40;
  
  iVar5 = (int)param_1;
  QComboBox::itemData((int)&local_70,iVar5);
  uVar1 = QVariant::toUInt((bool *)&local_70);
  QVariant::~QVariant(&local_70);
  QComboBox::itemData((int)&local_60,iVar5);
  uVar2 = QVariant::toUInt((bool *)&local_60);
  QVariant::~QVariant(&local_60);
  QComboBox::itemData((int)&local_50,iVar5);
  uVar3 = QVariant::toUInt((bool *)&local_50);
  QVariant::~QVariant(&local_50);
  QComboBox::itemData((int)&local_40,iVar5);
  uVar4 = QVariant::toUInt((bool *)&local_40);
  QVariant::~QVariant(&local_40);
  FUN_1007fa4d0(param_1,uVar1,uVar2,uVar3,uVar4);
  return;
}

