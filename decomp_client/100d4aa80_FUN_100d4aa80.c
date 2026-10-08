
int FUN_100d4aa80(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_R13D;
  uint uVar5;
  long local_58;
  uint local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_4c = 0;
  iVar2 = _PrlVmCfg_GetNetAdaptersCount(*(undefined8 *)(param_1 + 8),&local_4c);
  if (iVar2 < 0) {
    _PrlDbg_PrlResultToString(iVar2,&local_48);
    FUN_100df99c0("","PrlSdkUtils",0,"Failed to get network adapters count, 0x%x: \'%s\'",iVar2,
                  local_48);
  }
  else if (local_4c != 0) {
    uVar5 = 0;
    do {
      local_58 = 0;
      iVar3 = _PrlVmCfg_GetNetAdapter(*(undefined8 *)(param_1 + 8),uVar5,&local_58);
      if (iVar3 < 0) {
        _PrlDbg_PrlResultToString(iVar3,&local_38);
        bVar1 = false;
        FUN_100df99c0("","PrlSdkUtils",0,"Failed to get network adapter, 0x%x: \'%s\'",iVar3,
                      local_38);
        iVar4 = iVar3;
      }
      else {
        iVar4 = _PrlVmDev_Remove(local_58);
        bVar1 = true;
        iVar3 = unaff_R13D;
        if (iVar4 < 0) {
          _PrlDbg_PrlResultToString(iVar4,&local_40);
          bVar1 = false;
          FUN_100df99c0("","PrlSdkUtils",0,"Failed to remove network adapter 0x%x: \'%s\'",iVar4,
                        local_40);
          iVar3 = iVar4;
        }
      }
      if (local_58 != 0) {
        _PrlHandle_Free();
      }
      iVar2 = iVar3;
    } while ((bVar1) && (uVar5 = uVar5 + 1, iVar2 = iVar4, unaff_R13D = iVar3, uVar5 < local_4c));
  }
  return iVar2;
}

