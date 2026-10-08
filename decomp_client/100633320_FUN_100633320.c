
void FUN_100633320(long param_1,bool param_2)

{
  long lVar1;
  undefined8 uVar2;
  QVariant local_50;
  QArrayData *local_40;
  Data_conflict local_38;
  QString local_30 [2];
  undefined1 local_19;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
  }
  lVar1 = FUN_10061b510(uVar2);
  if (lVar1 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return;
  }
  QSettings::QSettings((QSettings *)local_30,(QObject *)0x0);
  local_38.field7 = QString::fromAscii_helper("DoNotShowRenewLicenseReminder/",0x1e);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
  }
  uVar2 = FUN_10061b510(uVar2);
  FUN_10015a2b0(&local_40,uVar2);
  QString::append((QString *)&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006333db;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006333db:
  QVariant::QVariant(&local_50,param_2);
  QSettings::setValue(local_30,(QVariant *)&local_38);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_38.field15 != -1) {
    if (*(int *)local_38.field15 != 0) {
      LOCK();
      *(int *)local_38.field15 = *(int *)local_38.field15 + -1;
      local_19 = *(int *)local_38.field15 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100633432;
    }
    QArrayData::deallocate((QArrayData *)local_38.field15,2,8);
  }
LAB_100633432:
  QSettings::~QSettings((QSettings *)local_30);
  return;
}

