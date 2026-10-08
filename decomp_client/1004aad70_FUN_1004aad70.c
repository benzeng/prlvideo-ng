
void FUN_1004aad70(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int local_3c;
  long local_38;
  
  uVar4 = FUN_10044e660();
  cVar1 = FUN_1003beaf0(uVar4);
  if (cVar1 != '\0') {
    if ((((param_2 < 0) || (*(long *)(param_1 + 0x40) == 0)) ||
        (*(int *)(*(long *)(param_1 + 0x40) + 4) == 0)) ||
       ((*(long *)(param_1 + 0x48) == 0 || (iVar2 = CSdkRequest::getResultParamCount(), iVar2 == 0))
       )) {
      FUN_100df99c0("","prl_client_app",0,"Can\'t get user info list.");
      return;
    }
    uVar5 = 0;
    for (uVar6 = 0; uVar3 = CSdkRequest::getResultParamCount(), uVar6 < uVar3; uVar6 = uVar6 + 1) {
      CSdkRequest::getResultParam((uint)&local_38);
      iVar2 = _PrlUsrInfo_GetSessionCount(local_38,&local_3c);
      if (iVar2 == 0) {
        uVar5 = uVar5 + local_3c;
      }
      else {
        FUN_100df99c0("","prl_client_app",0,"Can\'t get session count for user.");
      }
      if (local_38 != 0) {
        _PrlHandle_Free();
      }
    }
    *(bool *)(param_1 + 0x50) = 1 < uVar5;
    *(bool *)(param_1 + 0x51) = uVar5 < 2;
  }
  return;
}

