
void FUN_10051e570(QObject *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  QArrayData *local_50;
  long *local_48;
  long local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,(QObject *)0x0);
  FUN_1004c0650(param_1 + 0x10,param_2);
  *(undefined ***)param_1 = &PTR_FUN_100bc4bd0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bc4c58;
  *(undefined8 *)(param_1 + 0x38) = 0xbff0000000000000;
  FUN_1007eaeb0(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_1004c0790(param_1 + 0x10,0x9110,0x9111);
  lVar2 = DAT_1011c3698;
  local_50 = (QArrayData *)QString::fromAscii_helper("parallels.ToolsInstallStage.guest.cross",0x27)
  ;
  FUN_100477170(&local_48,lVar2 + 0x10840,&local_50);
  lVar2 = 0;
  if (local_48 != (long *)0x0) {
    lVar2 = local_48[2];
  }
  QObject::connect(&local_40,lVar2,
                   "2sigRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)",param_1
                   ,
                   "1onInstallationStageChanged(const CTISBase::Record, const CTISBase::RecordFields)"
                   ,1);
  if (local_40 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  if (local_48 != (long *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return;
}

