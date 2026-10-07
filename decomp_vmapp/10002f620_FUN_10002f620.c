
void FUN_10002f620(QObject *param_1,undefined8 param_2)

{
  long *plVar1;
  QObject QVar2;
  long lVar3;
  QArrayData *local_50;
  long *local_48;
  long local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,(QObject *)0x0);
  FUN_1004c0650(param_1 + 0x10,param_2);
  *(undefined ***)param_1 = &PTR_FUN_100ba9a30;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100ba9ab0;
  *(long *)(param_1 + 0x38) = DAT_1011c3698;
  *(undefined4 *)(param_1 + 0x44) = 0;
  QMutex::QMutex((QMutex *)(param_1 + 0x48),0);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined **)(param_1 + 0x268) = PTR_shared_null_100ba20d0;
  ___bzero(param_1 + 0x58,0x204);
  param_1[0x25c] = (QObject)0x1;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined **)(param_1 + 0x270) = PTR_shared_null_100ba2180;
  QMutex::QMutex((QMutex *)(param_1 + 0x278),0);
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined8 *)(param_1 + 0x29c) = 0;
  *(undefined8 *)(param_1 + 0x294) = 0;
  *(undefined8 *)(param_1 + 0x28c) = 0;
  *(undefined8 *)(param_1 + 0x284) = 0;
  DAT_1011c35c8 = param_1;
  QVar2 = (QObject)(**(code **)(**(long **)(*(long *)(param_1 + 0x38) + 0x1a48) + 0x20))
                             (*(long **)(*(long *)(param_1 + 0x38) + 0x1a48),0xb,FUN_10002f990,
                              param_1);
  param_1[0x40] = QVar2;
  lVar3 = DAT_1011c3698;
  local_50 = (QArrayData *)QString::fromAscii_helper("parallels.ToolsInstallStage.guest.cross",0x27)
  ;
  FUN_100477170(&local_48,lVar3 + 0x10840,&local_50);
  lVar3 = 0;
  if (local_48 != (long *)0x0) {
    lVar3 = local_48[2];
  }
  QObject::connect(&local_40,lVar3,
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

