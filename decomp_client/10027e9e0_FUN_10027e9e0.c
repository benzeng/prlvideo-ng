
void FUN_10027e9e0(long *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  int local_3c;
  long local_38;
  
  QObject::sender();
  lVar4 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a0);
  if (DAT_102310920 == (void *)0x0) {
    pvVar5 = operator_new(0x50);
    FUN_1001d1080(pvVar5);
    DAT_10226c778 = 1;
    DAT_102310920 = pvVar5;
  }
  FUN_1001d1280(DAT_102310920,1);
  if (((param_2 < 0) || (lVar4 == 0)) || (iVar2 = CSdkRequest::getResultParamCount(), iVar2 == 0)) {
    FUN_100df99c0("","prl_client_app",0,"Can\'t get user info list.");
                    /* WARNING: Could not recover jumptable at 0x00010027ebef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0);
    return;
  }
  iVar2 = CSdkRequest::getResultParamCount();
  if (iVar2 != 0) {
    uVar7 = 0;
    uVar6 = 0;
    do {
      CSdkRequest::getResultParam((uint)&local_38);
      iVar2 = _PrlUsrInfo_GetSessionCount(local_38,&local_3c);
      if (iVar2 == 0) {
        uVar7 = uVar7 + local_3c;
        bVar1 = true;
        if (1 < uVar7) {
          if (2 < DAT_10230ffd0) {
            FUN_100df99c0("","prl_client_app",3,"Multi sessions on server.");
          }
          if (DAT_102310920 == (void *)0x0) {
            pvVar5 = operator_new(0x50);
            FUN_1001d1080(pvVar5);
            DAT_10226c778 = 1;
            DAT_102310920 = pvVar5;
          }
          FUN_1001d1280(DAT_102310920,0);
          bVar1 = false;
          (**(code **)(*param_1 + 0xb0))(param_1,0);
        }
      }
      else {
        bVar1 = true;
        FUN_100df99c0("","prl_client_app",0,"Can\'t get session count for user.");
      }
      if (local_38 != 0) {
        _PrlHandle_Free();
      }
      if (!bVar1) {
        return;
      }
      uVar6 = uVar6 + 1;
      uVar3 = CSdkRequest::getResultParamCount();
    } while (uVar6 < uVar3);
  }
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

