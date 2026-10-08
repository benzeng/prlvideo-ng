
int FUN_100d4b230(long param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_40;
  uint local_3c;
  undefined8 local_38;
  
  local_3c = 0xffff;
  iVar1 = _PrlVmCfg_GetOsVersion(*(undefined8 *)(param_1 + 8),&local_3c);
  if (iVar1 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"Failed to get the guest OS version, 0x%x",iVar1);
  }
  else {
    local_40 = 0;
    iVar1 = _PrlVmCfg_Is3DAccelerationEnabled(*(undefined8 *)(param_1 + 8),&local_40);
    if (iVar1 < 0) {
      _PrlDbg_PrlResultToString(iVar1,&local_38);
      FUN_100df99c0("","PrlSdkUtils",0,
                    "Error : Failed to get video 3D acceleration config. error 0x%X \'%s\'",iVar1,
                    local_38);
    }
    else {
      uVar3 = 0x40;
      if ((((local_3c != 0x808) && (uVar3 = 0x20, param_2 == 0)) && (local_40 != 0)) &&
         ((0x400 < param_3 && ((local_3c & 0xff00) == 0x800)))) {
        uVar3 = 0x80;
        if ((local_3c & 0xfffffffe) == 0x806) {
          uVar3 = 0x100;
        }
        if ((local_3c & 0xfffffffd) == 0x809) {
          uVar3 = 0x100;
        }
        if ((local_3c & 0xfffffffd) == 0x80c) {
          uVar3 = 0x100;
        }
        if (local_3c == 0x80f) {
          uVar3 = 0x100;
        }
        if (param_3 < 0x801) {
          uVar3 = 0x80;
        }
      }
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("","PrlSdkUtils",2,
                      "Setting video RAM size to default value %u, for guest OS 0x%X, 3D enabled %d, host OS %d, RAM size %u."
                      ,uVar3,local_3c,local_40,param_2,param_3);
      }
      iVar2 = _PrlVmCfg_SetVideoRamSize(*(undefined8 *)(param_1 + 8),uVar3);
      iVar1 = 0;
      if (iVar2 < 0) {
        _PrlDbg_PrlResultToString(iVar2,&local_38);
        FUN_100df99c0("","PrlSdkUtils",0,"Error : Failed to set video RAM size. error 0x%X \'%s\'",
                      iVar2,local_38);
        iVar1 = iVar2;
      }
    }
  }
  return iVar1;
}

