
int FUN_100aeea90(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 local_30 [8];
  
  FUN_100b0adb0(local_30,"com_parallels_hypervisor",0);
  cVar1 = FUN_100b0b990(local_30);
  iVar3 = -1;
  if (cVar1 != '\0') {
    iVar2 = FUN_100b0b9a0(local_30,param_1,param_2,param_3,0);
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_100df99c0("","pvsHostInfo",0,"Ioctl %lu failed",param_1);
      iVar3 = iVar2;
    }
  }
  FUN_100b0ae90(local_30);
  return iVar3;
}

