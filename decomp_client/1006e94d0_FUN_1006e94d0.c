
void FUN_1006e94d0(long param_1,int param_2)

{
  undefined8 uVar1;
  QString local_70;
  QString local_68;
  undefined8 local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined8 local_30;
  
  if (-1 < param_2) {
    uVar1 = 0;
    if ((*(long *)(param_1 + 0x60) != 0) &&
       (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x60) + 4) != 0)) {
      uVar1 = *(undefined8 *)(param_1 + 0x68);
    }
    FUN_10024e3f0(&local_70,uVar1);
    QString::operator=((QString *)(param_1 + 0x18),&local_70);
    QString::operator=((QString *)(param_1 + 0x20),&local_68);
    *(undefined8 *)(param_1 + 0x28) = local_60;
    QString::operator=((QString *)(param_1 + 0x30),&local_58);
    QString::operator=((QString *)(param_1 + 0x38),&local_50);
    QString::operator=((QString *)(param_1 + 0x40),&local_48);
    QString::operator=((QString *)(param_1 + 0x48),&local_40);
    QString::operator=((QString *)(param_1 + 0x50),&local_38);
    *(undefined8 *)(param_1 + 0x58) = local_30;
    FUN_10024f950(&local_70);
    CProductUpdateInfo::store();
  }
  FUN_100851ef0(*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}

