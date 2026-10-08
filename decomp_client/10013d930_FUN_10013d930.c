
void FUN_10013d930(long param_1,QVariant *param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,QString *param_7,undefined8 param_8)

{
  uint uVar1;
  QString local_78;
  undefined1 local_70 [40];
  int local_48;
  int local_40;
  
  FUN_10013e010(local_70,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (*(int *)(param_1 + 0x48) < local_40) {
    *(int *)(param_1 + 0x48) = local_40;
  }
  if (*(int *)(param_1 + 0x4c) < local_48) {
    *(int *)(param_1 + 0x4c) = local_48;
  }
  FUN_10013ee70(param_1 + 0x30,local_70);
  QIcon::QIcon((QIcon *)&local_78,param_7);
  uVar1 = QComboBox::count();
  QComboBox::insertItem((int)param_1,(QIcon *)(ulong)uVar1,&local_78,param_2);
  QIcon::~QIcon((QIcon *)&local_78);
  FUN_10013e850(local_70);
  return;
}

