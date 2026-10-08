
int FUN_100d4aef0(long param_1,long *param_2,undefined8 param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  long local_40;
  int local_34;
  
  iVar2 = _PrlVmCfg_SetDefaultConfig(*(undefined8 *)(param_1 + 8),*param_2,param_3,param_4);
  if (iVar2 < 0) {
    pcVar5 = "Failed to set the default vm config, 0x%x";
LAB_100d4b07e:
    FUN_100df99c0("","PrlSdkUtils",0,pcVar5,iVar2);
  }
  else {
    if (*param_2 == 0) {
      uVar3 = FUN_100d44570();
      uVar4 = FUN_100d44580();
      iVar2 = FUN_100d4b120(param_1,uVar4,0);
      if ((iVar2 < 0) && (0 < DAT_10230ffd0)) {
        FUN_100df99c0("","PrlSdkUtils",1,
                      "Warning : Failed to set RAM default size, in case no HW info available.");
      }
      iVar2 = FUN_100d4b230(param_1,uVar3,uVar4);
      if ((iVar2 < 0) && (0 < DAT_10230ffd0)) {
        FUN_100df99c0("","PrlSdkUtils",1,
                      "Warning : Failed to set video RAM default size, in case no HW info available."
                     );
      }
    }
    if (param_4 != '\0') {
      iVar2 = _PrlVmCfg_GetNetAdaptersCount(*(undefined8 *)(param_1 + 8),&local_34);
      if (iVar2 < 0) {
        pcVar5 = "Failed to set the vm network adapters count, 0x%x";
        goto LAB_100d4b07e;
      }
      if (local_34 != 0) {
        local_40 = 0;
        iVar2 = _PrlVmCfg_GetNetAdapter(*(undefined8 *)(param_1 + 8),0,&local_40);
        if (iVar2 < 0) {
          bVar1 = false;
          FUN_100df99c0("","PrlSdkUtils",0,"Failed to set the vm network adapter by index, 0x%x",
                        iVar2);
        }
        else {
          if (2 < DAT_10230ffd0) {
            FUN_100df99c0("","PrlSdkUtils",3,"Set network emulation to shared...");
          }
          iVar2 = _PrlVmDev_SetEmulatedType(local_40,1);
          if (iVar2 < 0) {
            bVar1 = false;
            FUN_100df99c0("","PrlSdkUtils",0,"Failed to set the network adapter emulated type, 0x%x"
                          ,iVar2);
          }
          else {
            bVar1 = true;
          }
        }
        if (local_40 != 0) {
          _PrlHandle_Free();
        }
        if (!bVar1) {
          return iVar2;
        }
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}

