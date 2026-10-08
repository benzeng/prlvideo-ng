
void FUN_1004da200(QObject *param_1,long param_2,QObject *param_3)

{
  undefined4 uVar1;
  
  QObject::QObject(param_1,param_3);
  QListWidgetItem::QListWidgetItem((QListWidgetItem *)(param_1 + 0x10),(QListWidget *)param_3,0);
  *(undefined **)param_1 = &DAT_102274030;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1022740a0;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1003a4d50(param_2);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    uVar1 = FUN_1003a4db0(param_2);
  }
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  return;
}

