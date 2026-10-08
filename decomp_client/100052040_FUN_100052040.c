
void FUN_100052040(undefined8 param_1,QString *param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *local_48;
  QArrayData *local_40;
  QDir local_38 [15];
  undefined1 local_29;
  
  QDir::QDir(local_38,param_2);
  cVar1 = QDir::exists();
  if (cVar1 == '\0') goto LAB_100052198;
  local_40 = (QArrayData *)QString::fromAscii_helper("en",2);
  FUN_10004db40(param_2,param_3,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000520c8;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000520c8:
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001548f0(uVar3,param_1);
  if (lVar4 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGASMGMT","prl_client_app",0,"Failed to get Vm for vmUuid=\"%s\"",
                  local_48 + *(long *)(local_48 + 0x10));
    uVar2 = 8;
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100052152;
      }
      QArrayData::deallocate(local_48,1,8);
    }
  }
  else {
    uVar2 = FUN_10018f860(lVar4);
  }
LAB_100052152:
  QMutex::lock();
  lVar4 = DAT_1023108a8;
  if (DAT_1023108a8 != 0) {
    DAT_1023108b0 = DAT_1023108b0 + 1;
  }
  QMutex::unlock();
  if (lVar4 != 0) {
    FUN_1000af8c0(lVar4,param_2,uVar2);
    FUN_100055290(&DAT_102310898);
  }
LAB_100052198:
  QDir::~QDir(local_38);
  return;
}

