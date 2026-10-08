
int FUN_100253880(QObject *param_1,bool *param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  QVariant local_60;
  Data_conflict local_50;
  QString local_48 [2];
  QString local_38;
  undefined1 local_29;
  
  if (param_2 == (bool *)0x0) {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: can\'t get request object to obtain support code.");
    if (param_3 == '\0') {
      return -0x7ffffff7;
    }
    (**(code **)(*(long *)param_1 + 0xb0))(param_1,0x80000009);
    return -0x7ffffff7;
  }
  iVar2 = CSdkRequest::getResultCode(param_2);
  if (iVar2 < 0) {
    uVar3 = FUN_100dddcf0(iVar2);
    FUN_100df99c0("","prl_client_app",0,"Support code query has failed with RC = %.8X [%s]",iVar2,
                  uVar3);
    if (param_3 == '\0') {
      return iVar2;
    }
    (**(code **)(*(long *)param_1 + 0xb0))(param_1,iVar2);
    return iVar2;
  }
  CSdkRequest::getResultAsString((int)&local_38);
  if (*(int *)(local_38.field0_0x0 + 4) == 0) {
    iVar2 = QTime::elapsed();
    if (iVar2 < 30000) {
      iVar2 = 0;
      QTimer::singleShot(5000,param_1,"1onTimeToQuerySupportCode()");
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x38);
      iVar2 = QTime::elapsed();
      FUN_100df99c0("","prl_client_app",0,
                    "Failed to get suppot code.Attempts made: %d. Time elapsed: %d s",uVar1,
                    iVar2 / 1000);
      iVar2 = -0x7ffffff7;
      if (param_3 != '\0') {
        iVar2 = -0x7ffffff7;
        (**(code **)(*(long *)param_1 + 0xb0))(param_1,0x80000009);
      }
    }
    goto LAB_100253ab6;
  }
  QSettings::QSettings((QSettings *)local_48,(QObject *)0x0);
  local_50.field7 = QString::fromAscii_helper("SupportCode",0xb);
  QVariant::QVariant(&local_60,&local_38);
  QSettings::setValue(local_48,(QVariant *)&local_50);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_50.field15 != -1) {
    if (*(int *)local_50.field15 != 0) {
      LOCK();
      *(int *)local_50.field15 = *(int *)local_50.field15 + -1;
      local_29 = *(int *)local_50.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10025394a;
    }
    QArrayData::deallocate((QArrayData *)local_50.field15,2,8);
  }
LAB_10025394a:
  QSettings::sync();
  FUN_100817640(param_1,&local_38);
  if (param_3 != '\0') {
    (**(code **)(*(long *)param_1 + 0xb0))(param_1,0);
  }
  iVar2 = 0;
  QSettings::~QSettings((QSettings *)local_48);
LAB_100253ab6:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return iVar2;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return iVar2;
}

