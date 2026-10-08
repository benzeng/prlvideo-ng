
void FUN_1002910e0(long *param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  QVariant local_60;
  QString local_50;
  QVariant local_48;
  Data_conflict local_38;
  QString local_30 [2];
  undefined1 local_19;
  
  uVar1 = FUN_100dddcf0(param_2);
  FUN_100df99c0("","prl_client_app",0,"Update Account Locale Request finished %s",uVar1);
  if (param_2 < 0) goto LAB_100291238;
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001554a0(uVar1);
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get server to update account email");
    goto LAB_100291238;
  }
  QSettings::QSettings((QSettings *)local_30,(QObject *)0x0);
  local_38.field7 = QString::fromAscii_helper("AccountLocaleUpdated",0x14);
  uVar1 = FUN_10016f500(lVar2);
  FUN_10061abe0(&local_60,uVar1,0x12);
  QVariant::toString();
  QVariant::QVariant(&local_48,&local_50);
  QSettings::setValue(local_30,(QVariant *)&local_38);
  QVariant::~QVariant(&local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_19 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002911d6;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1002911d6:
  QVariant::~QVariant(&local_60);
  if (*(int *)local_38.field15 != -1) {
    if (*(int *)local_38.field15 != 0) {
      LOCK();
      *(int *)local_38.field15 = *(int *)local_38.field15 + -1;
      local_19 = *(int *)local_38.field15 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10029120f;
    }
    QArrayData::deallocate((QArrayData *)local_38.field15,2,8);
  }
LAB_10029120f:
  QSettings::~QSettings((QSettings *)local_30);
LAB_100291238:
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

