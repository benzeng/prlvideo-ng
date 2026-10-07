
void FUN_10005b940(QObject *param_1,undefined8 param_2)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  QArrayData *local_50;
  long *local_48;
  long local_40;
  long local_38;
  undefined1 local_29;
  
  QObject::QObject(param_1,(QObject *)0x0);
  FUN_1004c0650(param_1 + 0x10,param_2);
  *(undefined ***)param_1 = &PTR_FUN_100ba9e40;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100ba9ed0;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined **)(param_1 + 0x48) = PTR_shared_null_100ba2188;
  FUN_1004c0790(param_1 + 0x10,0x8800,0x8801);
  pvVar2 = operator_new(0x28);
  FUN_10005d580(pvVar2,param_1);
  *(void **)(param_1 + 0x40) = pvVar2;
  QObject::connect(&local_38,*(undefined8 *)(DAT_1011c3698 + 0xf0),
                   "2sigLightWeightClientAttachedDetached(const bool, const unsigned int)",param_1,
                   "1onLightWeightClientAttachedDetached(const bool, const unsigned int)",1);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  lVar3 = DAT_1011c3698;
  local_50 = (QArrayData *)QString::fromAscii_helper("parallels.GuestInfo.guest.win",0x1d);
  FUN_100477170(&local_48,lVar3 + 0x10840,&local_50);
  lVar3 = 0;
  if (local_48 != (long *)0x0) {
    lVar3 = local_48[2];
  }
  QObject::connect(&local_40,lVar3,
                   "2sigRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)",param_1
                   ,
                   "1onValidationRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)"
                   ,1);
  if (local_40 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  if (local_48 != (long *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10005bae1;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10005bae1:
  FUN_10005f200(&DAT_1011c3630,param_1);
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","vm",3,"CHostCEP host part initialized");
  }
  return;
}

