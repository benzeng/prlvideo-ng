
void FUN_100658400(int param_1,undefined8 param_2,QVariant *param_3)

{
  QString *pQVar1;
  uint uVar2;
  Data_conflict local_80;
  undefined4 local_78;
  QVariant local_70;
  long local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined4 local_48;
  QString local_40;
  QIcon local_38 [8];
  
  QComboBox::clear();
  FUN_1002101d0(&local_60,param_2);
  local_58 = (undefined8 *)(local_60 + 0x10 + (long)*(int *)(local_60 + 8) * 8);
  local_50 = (undefined8 *)(local_60 + 0x10 + (long)*(int *)(local_60 + 0xc) * 8);
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      local_48 = 1;
      pQVar1 = (QString *)*local_58;
      QVariant::QVariant(&local_70,pQVar1);
      uVar2 = QComboBox::count();
      QIcon::QIcon(local_38);
      QComboBox::insertItem
                (param_1,(QIcon *)(ulong)uVar2,(QString *)local_38,(QVariant *)(pQVar1 + 1));
      QIcon::~QIcon(local_38);
      QVariant::~QVariant(&local_70);
      local_58 = local_58 + 1;
    } while (local_58 != local_50);
  }
  local_48 = 1;
  FUN_1001e3400(&local_60);
  if (*(int *)((param_3->field0_0x0).field0_0x0.field7 + 4) != 0) {
    local_78 = 0x80000000;
    local_80.field7 = 0;
    QIcon::QIcon((QIcon *)&local_40);
    QComboBox::insertItem(param_1,(QIcon *)0x0,&local_40,param_3);
    QIcon::~QIcon((QIcon *)&local_40);
    QVariant::~QVariant((QVariant *)&local_80);
    QComboBox::insertSeparator(param_1);
    QComboBox::setCurrentIndex(param_1);
  }
  return;
}

