
int FUN_100d48a30(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long local_60;
  undefined *local_58;
  uint local_4c;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  
  local_4c = 0;
  iVar2 = _PrlVmCfg_GetHardDisksCount(*(undefined8 *)(param_1 + 8),&local_4c);
  if (iVar2 < 0) {
    _PrlDbg_PrlResultToString(iVar2,&local_48);
    FUN_100df99c0("","PrlSdkUtils",0,"Error on PrlVmCfg_GetHardDisksCount with code 0x%x: \'%s\'",
                  iVar2,local_48);
  }
  else {
    local_58 = PTR_shared_null_1021e15e8;
    if (local_4c != 0) {
      uVar4 = 0;
      do {
        local_60 = 0;
        iVar3 = _PrlVmCfg_GetHardDisk(*(undefined8 *)(param_1 + 8),uVar4,&local_60);
        if (iVar3 < 0) {
          _PrlDbg_PrlResultToString(iVar3,&local_38);
          FUN_100df99c0("","PrlSdkUtils",0,"Error on PrlVm_GetHardDisk with code 0x%x: \'%s\'",iVar3
                        ,local_38);
          iVar2 = iVar3;
        }
        else {
          FUN_10014a450(&local_58,&local_60);
        }
        if (local_60 != 0) {
          _PrlHandle_Free();
        }
        if (iVar3 < 0) goto LAB_100d48b60;
        uVar4 = uVar4 + 1;
      } while (uVar4 < local_4c);
    }
    if ((undefined *)*param_2 != local_58) {
      FUN_10014a970(&local_40,&local_58);
      lVar1 = *param_2;
      *param_2 = local_40;
      local_40 = lVar1;
      FUN_10014a540(&local_40);
    }
    iVar2 = 0;
LAB_100d48b60:
    FUN_10014a540(&local_58);
  }
  return iVar2;
}

