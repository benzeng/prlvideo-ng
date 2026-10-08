
void FUN_10017c790(void)

{
  undefined8 uVar1;
  long lVar2;
  QArrayData *local_30;
  undefined1 local_22;
  
  uVar1 = FUN_100152280();
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  lVar2 = FUN_1001548f0(uVar1,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_10017c801;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10017c801:
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: can\'t get VM instance to commit shared folder settings.");
  }
  else {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    uVar1 = CVmTools::getVmSharing();
    FUN_100197ee0(lVar2,uVar1);
  }
  return;
}

