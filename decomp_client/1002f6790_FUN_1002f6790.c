
void FUN_1002f6790(long *param_1,int param_2)

{
  undefined8 uVar1;
  QString local_a0;
  QString local_98;
  QString local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  undefined1 local_50 [8];
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  QString local_28;
  
  *(int *)(param_1 + 0x10) = param_2;
  uVar1 = QObject::sender();
  FUN_1006f2b00(&local_a0,uVar1);
  QString::operator=((QString *)(param_1 + 0x11),&local_a0);
  QString::operator=((QString *)(param_1 + 0x12),&local_98);
  QString::operator=((QString *)(param_1 + 0x13),&local_90);
  QString::operator=((QString *)(param_1 + 0x14),&local_88);
  QString::operator=((QString *)(param_1 + 0x15),&local_80);
  QString::operator=((QString *)(param_1 + 0x16),&local_78);
  QString::operator=((QString *)(param_1 + 0x17),&local_70);
  QString::operator=((QString *)(param_1 + 0x18),&local_68);
  QString::operator=((QString *)(param_1 + 0x19),&local_60);
  QString::operator=((QString *)(param_1 + 0x1a),&local_58);
  FUN_100283c40(param_1 + 0x1b,local_50);
  QString::operator=((QString *)(param_1 + 0x1c),&local_48);
  QString::operator=((QString *)(param_1 + 0x1d),&local_40);
  QString::operator=((QString *)(param_1 + 0x1e),&local_38);
  QString::operator=((QString *)(param_1 + 0x1f),&local_30);
  QString::operator=((QString *)(param_1 + 0x20),&local_28);
  FUN_100252c80(&local_48);
  FUN_100252e70(&local_a0);
  uVar1 = 0;
  if ((param_2 != 3) && (uVar1 = 0x80000275, param_2 == 2)) {
    uVar1 = 0;
  }
  (**(code **)(*param_1 + 0xb0))(param_1,uVar1);
  return;
}

