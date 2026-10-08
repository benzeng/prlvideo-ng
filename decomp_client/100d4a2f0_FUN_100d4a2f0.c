
int FUN_100d4a2f0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint *local_38;
  
  local_38 = (uint *)PTR_shared_null_1021e15e8;
  iVar1 = FUN_100d4a130(param_1,&local_38);
  if (iVar1 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"Collecting of network devices list failed with error 0x%X",
                  iVar1);
  }
  else {
    iVar1 = 0;
    if ((int)local_38[2] < (int)local_38[3]) {
      lVar3 = 0;
      do {
        if (1 < *local_38) {
          FUN_100d4d1a0(&local_38,local_38[1]);
        }
        iVar2 = _PrlVmDevNet_SetAdapterType
                          (**(undefined8 **)(local_38 + ((int)local_38[2] + lVar3) * 2 + 4),param_2)
        ;
        if (iVar2 < 0) {
          FUN_100df99c0("","PrlSdkUtils",0,"Failed to set e1000 network type with error 0x%X",iVar2)
          ;
          iVar1 = iVar2;
          break;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < (long)(int)local_38[3] - (long)(int)local_38[2]);
    }
  }
  FUN_10014a540(&local_38);
  return iVar1;
}

