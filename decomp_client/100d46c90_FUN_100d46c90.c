
int FUN_100d46c90(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_R13D;
  uint uVar5;
  long local_40;
  uint local_34;
  
  local_34 = 0;
  iVar2 = _PrlVmCfg_GetOpticalDisksCount(*(undefined8 *)(param_1 + 8),&local_34);
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.47:\t0x%x",iVar2);
  }
  else if (local_34 != 0) {
    uVar5 = 0;
    do {
      local_40 = 0;
      iVar3 = _PrlVmCfg_GetOpticalDisk(*(undefined8 *)(param_1 + 8),uVar5,&local_40);
      if (iVar3 < 0) {
        bVar1 = false;
        FUN_100df99c0("","PrlSdkUtils",0,"TR00055.48:\t0x%x",iVar3);
        iVar4 = iVar3;
      }
      else {
        iVar4 = _PrlVmDev_Remove(local_40);
        bVar1 = true;
        iVar3 = unaff_R13D;
        if (iVar4 < 0) {
          bVar1 = false;
          FUN_100df99c0("","PrlSdkUtils",0,"TR00055.49:\t0x%x",iVar4);
          iVar3 = iVar4;
        }
      }
      if (local_40 != 0) {
        _PrlHandle_Free();
      }
      iVar2 = iVar3;
    } while ((bVar1) && (uVar5 = uVar5 + 1, iVar2 = iVar4, unaff_R13D = iVar3, uVar5 < local_34));
  }
  return iVar2;
}

