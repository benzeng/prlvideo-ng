
void FUN_10099a700(undefined8 param_1,char *param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long local_58;
  QVariant local_50;
  Data *local_40;
  QVariant local_38;
  int local_24;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  CVmProfileDataObject::vmProfiles();
  if (DAT_102273ff8 == 0) {
    DAT_102273ff8 = FUN_1004466c0("QList<QObject*>",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_38,DAT_102273ff8,&local_40,0);
  QObject::setProperty(param_2,(QVariant *)"profilesModel");
  QVariant::~QVariant(&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      local_24 = CONCAT31(local_24._1_3_,*(int *)local_40 != 0);
      if (*(int *)local_40 != 0) goto LAB_10099a7a0;
    }
    QListData::dispose(local_40);
  }
LAB_10099a7a0:
  pcVar1 = DAT_102310ca0;
  lVar3 = FUN_1009983c0(param_1);
  local_24 = 0;
  iVar2 = (*pcVar1)(*(undefined8 *)(lVar3 + 0x30),&local_24);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc","(hHandle, &val)"
                  ,"../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
  }
  QVariant::QVariant(&local_50,local_24);
  QObject::setProperty(param_2,(QVariant *)"currentProfileType");
  QVariant::~QVariant(&local_50);
  FUN_1009983a0(param_1);
  uVar4 = CAbstractWizardModel::wizardCtrl();
  QObject::connect(&local_58,param_2,"2profileDoubleClicked(int)",uVar4,"1goNext()",0);
  if (local_58 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  return;
}

