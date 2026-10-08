
void FUN_1006e97f0(long param_1,int param_2)

{
  long lVar1;
  undefined1 local_e8 [88];
  undefined1 local_90 [40];
  QString local_68;
  QString local_60;
  undefined8 local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  undefined8 local_28;
  
  if (-1 < param_2) {
    lVar1 = QObject::sender();
    if (*(int *)(lVar1 + 0x80) == 2) {
      FUN_1006eac00(local_e8,lVar1);
      FUN_1006e9e20(&local_68,local_e8);
      QString::operator=((QString *)(param_1 + 0x18),&local_68);
      QString::operator=((QString *)(param_1 + 0x20),&local_60);
      *(undefined8 *)(param_1 + 0x28) = local_58;
      QString::operator=((QString *)(param_1 + 0x30),&local_50);
      QString::operator=((QString *)(param_1 + 0x38),&local_48);
      QString::operator=((QString *)(param_1 + 0x40),&local_40);
      QString::operator=((QString *)(param_1 + 0x48),&local_38);
      QString::operator=((QString *)(param_1 + 0x50),&local_30);
      *(undefined8 *)(param_1 + 0x58) = local_28;
      FUN_10024f950(&local_68);
      FUN_100252c80(local_90);
      FUN_100252e70(local_e8);
      CProductUpdateInfo::store();
      UpgradeUtils::setNeedToInstallUpdateOnAppStart(true,1,true);
    }
    else if (*(int *)(lVar1 + 0x80) == 3) {
      FUN_1006e9990(param_1,0);
    }
  }
  FUN_100851f40(*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}

