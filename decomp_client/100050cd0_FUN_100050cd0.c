
void FUN_100050cd0(undefined8 param_1,long *param_2)

{
  long lVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  
  if (*(int *)(*param_2 + 4) != 0) {
    QMutex::lock();
    lVar1 = DAT_1023108a8;
    if (DAT_1023108a8 == 0) {
      QMutex::unlock();
    }
    else {
      DAT_1023108b0 = DAT_1023108b0 + 1;
      QMutex::unlock();
      FUN_1000afcc0(lVar1,param_1);
    }
    FUN_100050ed0(param_1,param_2);
    FUN_10004cfb0(param_2);
    if (lVar1 == 0) {
      return;
    }
    FUN_100055290(&DAT_102310898);
    return;
  }
  if (DAT_10230ffd0 < 1) {
    return;
  }
  QString::toUtf8();
  lVar1 = *(long *)(local_38 + 0x10);
  QString::toUtf8();
  FUN_100df99c0("SGASMGMT","prl_client_app",1,
                "Specified special dir=\"%s\" as helpers folder for vmUuid=\"%s\", will not remove it"
                ,local_38 + lVar1,local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100050dc1;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100050dc1:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return;
}

