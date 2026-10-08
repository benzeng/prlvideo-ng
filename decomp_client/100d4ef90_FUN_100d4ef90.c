
int FUN_100d4ef90(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_28;
  
  local_28 = 0;
  iVar1 = _PrlVm_ToString(*param_2,&local_28);
  if (iVar1 < 0) {
    uVar4 = FUN_100dddcf0(iVar1);
    FUN_100df99c0("","PrlSdkUtils",0,
                  "Failed to generate config PrlVm_ToString has failed with  RC = %.8X [%s]",iVar1,
                  uVar4);
  }
  else {
    lVar2 = _PrlVm_BeginEdit(*param_1);
    iVar1 = _PrlJob_Wait(lVar2,100000);
    if (iVar1 < 0) {
      uVar4 = FUN_100dddcf0(iVar1);
      FUN_100df99c0("","PrlSdkUtils",0,
                    "Failed to edit VM configuration. PrlVm_BeginEdit has failed with  RC = %.8X [%s]"
                    ,iVar1,uVar4);
    }
    else {
      iVar1 = _PrlVm_FromString(*param_1,local_28);
      if (iVar1 < 0) {
        uVar4 = FUN_100dddcf0(iVar1);
        FUN_100df99c0("","PrlSdkUtils",0,
                      "Failed to set config PrlVm_FromString has failed with  RC = %.8X [%s]",iVar1,
                      uVar4);
      }
      else {
        lVar3 = _PrlVm_Commit(*param_1);
        if (lVar2 != 0) {
          _PrlHandle_Free(lVar2);
        }
        iVar1 = FUN_100d429b0(lVar3,"commit VM");
        lVar2 = lVar3;
        if (-1 < iVar1) {
          iVar1 = 0;
          _PrlBuffer_Free(local_28);
        }
      }
    }
    if (lVar2 != 0) {
      _PrlHandle_Free(lVar2);
    }
  }
  return iVar1;
}

