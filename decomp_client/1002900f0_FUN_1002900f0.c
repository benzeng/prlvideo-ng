
void FUN_1002900f0(long *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  QVariant local_50;
  QArrayData *local_40;
  QString local_38 [2];
  undefined1 local_21;
  
  uVar4 = FUN_100dddcf0(param_2);
  FUN_100df99c0("","prl_client_app",0,"Renew License finished %s",uVar4);
  QSettings::QSettings((QSettings *)local_38,(QObject *)0x0);
  local_40 = (QArrayData *)QString::fromAscii_helper("LicenseUpgradeToPro",0x13);
  QSettings::remove(local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029018c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10029018c:
  QSettings::~QSettings((QSettings *)local_38);
  if (-1 < param_2) {
    QObject::sender();
    lVar5 = QMetaObject::cast((QObject *)&PTR_PTR_1022065b0);
    if (lVar5 != 0) {
      QObject::property((char *)&local_50);
      iVar2 = QVariant::toInt((bool *)&local_50);
      QVariant::~QVariant(&local_50);
      iVar3 = FUN_1006268d0();
      if (iVar2 != iVar3) {
        uVar1 = FUN_1006269e0(iVar2);
        local_88 = (int *)0x0;
        uStack_80 = 0;
        local_70 = 0;
        local_78 = 0;
        local_60 = 0x80000000;
        local_68.field7 = 0;
        local_58 = 1;
        FUN_100622920(uVar1,0,&local_88);
        QVariant::~QVariant((QVariant *)&local_68);
        if (local_88 != (int *)0x0) {
          LOCK();
          *local_88 = *local_88 + -1;
          local_21 = *local_88 != 0;
          UNLOCK();
          if ((!(bool)local_21) && (local_88 != (int *)0x0)) {
            operator_delete(local_88);
          }
        }
      }
    }
  }
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

