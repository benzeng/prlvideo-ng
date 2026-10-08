
void FUN_10013da10(long param_1,uint param_2,QVariant *param_3,undefined4 param_4,undefined1 param_5
                  ,undefined8 param_6,undefined8 param_7,QString *param_8,undefined8 param_9)

{
  QString local_80;
  undefined1 local_78 [40];
  int local_50;
  int local_48;
  
  FUN_10013e010(local_78,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (*(int *)(param_1 + 0x48) < local_48) {
    *(int *)(param_1 + 0x48) = local_48;
  }
  if (*(int *)(param_1 + 0x4c) < local_50) {
    *(int *)(param_1 + 0x4c) = local_50;
  }
  FUN_10013e570(param_1 + 0x30,param_2,local_78);
  QIcon::QIcon((QIcon *)&local_80,param_8);
  QComboBox::insertItem((int)param_1,(QIcon *)(ulong)param_2,&local_80,param_3);
  QIcon::~QIcon((QIcon *)&local_80);
  FUN_10013e850(local_78);
  return;
}

