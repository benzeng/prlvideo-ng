
int FUN_100d45f90(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long local_58;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_4c = 0;
  iVar2 = _PrlVmCfg_GetBootDevCount(*(undefined8 *)(param_1 + 8),&local_4c);
  if (iVar2 < 0) {
    _PrlDbg_PrlResultToString(iVar2,&local_48);
    FUN_100df99c0("","PrlSdkUtils",0,"PrlVmCfg_GetBootDevCount error 0x%X \'%s\'",iVar2,local_48);
  }
  else {
    do {
      if (local_4c == 0) {
        return 0;
      }
      local_58 = 0;
      iVar3 = _PrlVmCfg_GetBootDev(*(undefined8 *)(param_1 + 8),0,&local_58);
      if (iVar3 < 0) {
        _PrlDbg_PrlResultToString(iVar3,&local_38);
        bVar1 = false;
        FUN_100df99c0("","PrlSdkUtils",0,"PrlVmCfg_GetBootDev error 0x%X \'%s\'",iVar3,local_38);
        iVar2 = iVar3;
      }
      else {
        iVar3 = _PrlBootDev_Remove(local_58);
        if (iVar3 < 0) {
          _PrlDbg_PrlResultToString(iVar3,&local_40);
          bVar1 = false;
          FUN_100df99c0("","PrlSdkUtils",0,"PrlBootDev_Remove error 0x%X \'%s\'",iVar3,local_40);
          iVar2 = iVar3;
        }
        else {
          local_4c = local_4c + -1;
          bVar1 = true;
        }
      }
      if (local_58 != 0) {
        _PrlHandle_Free();
      }
    } while (bVar1);
  }
  return iVar2;
}

