
int FUN_100d4f400(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int local_40;
  int local_3c;
  long local_38;
  
  lVar3 = FUN_100ddbb40();
  uVar1 = FUN_100ddbac0();
  uVar4 = (ulong)uVar1 * 0x3c + lVar3;
  local_40 = (int)uVar4;
  do {
    _usleep(500000);
    iVar2 = FUN_100d4ec80(param_1,param_2);
    if (iVar2 < 0) {
      FUN_100df99c0("","PrlSdkUtils",0,"Failed to get VM config");
      return iVar2;
    }
    local_38 = 0;
    iVar2 = _PrlVmCfg_GetVmInfo(*param_2,&local_38);
    if (iVar2 < 0) {
      FUN_100df99c0("","PrlSdkUtils",0,"Failed to get VM info");
LAB_100d4f51e:
      iVar6 = 1;
      local_40 = iVar2;
    }
    else {
      local_3c = 0;
      iVar2 = _PrlVmInfo_GetState(local_38,&local_3c);
      if (iVar2 < 0) {
        FUN_100df99c0("","PrlSdkUtils",0,"Failed to get VM info state");
        goto LAB_100d4f51e;
      }
      iVar6 = 2;
      if (local_3c != 0x30000001) {
        uVar5 = FUN_100ddbb40();
        iVar6 = 0;
        if (uVar4 < uVar5) {
          FUN_100df99c0("","PrlSdkUtils",0,"Timeout waiting for VM shutdown");
          iVar6 = 1;
          local_40 = -0x7ffffff7;
        }
      }
    }
    if (local_38 != 0) {
      _PrlHandle_Free();
    }
    if (iVar6 == 2) {
      return 0;
    }
    if (iVar6 == 1) {
      return local_40;
    }
  } while( true );
}

