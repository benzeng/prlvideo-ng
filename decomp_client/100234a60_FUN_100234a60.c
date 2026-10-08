
void FUN_100234a60(long *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  CVmSharedApplications *pCVar2;
  Connection local_e8 [8];
  CVmSharedApplications local_e0 [192];
  
  if ((((param_3 == 1) && (param_1[3] != 0)) && (*(int *)(param_1[3] + 4) != 0)) &&
     (param_1[4] != 0)) {
    lVar1 = FUN_100319390();
    if (lVar1 != 0) {
      FUN_10018c2b0(lVar1);
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmTools();
      pCVar2 = (CVmSharedApplications *)CVmTools::getVmSharedApplications();
      CVmSharedApplications::CVmSharedApplications(local_e0,pCVar2);
      CVmSharedApplications::setWinToMac(SUB81(local_e0,0));
      lVar1 = FUN_100198520(lVar1,local_e0);
      if (lVar1 == 0) {
        (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
      }
      else {
        QObject::connect(local_e8,lVar1,"2jobCompleted(PRL_RESULT)",param_1,
                         "1onEnableSharedAppsFinished(PRL_RESULT)",0);
        QMetaObject::Connection::~Connection(local_e8);
      }
      CVmSharedApplications::~CVmSharedApplications(local_e0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100234b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
  return;
}

