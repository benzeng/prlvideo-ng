
void FUN_100dd7d80(undefined8 param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","HostUtils",3,"DiskMountCallback: daDisk=%p daDissenter=%p pContext=%p",param_1
                  ,param_2,param_3);
  }
  if (param_2 == 0) {
    **(uint **)(param_3 + 0x28) = **(uint **)(param_3 + 0x28) | 1;
  }
  else {
    uVar1 = _DADissenterGetStatus(param_2);
    FUN_100df99c0("","HostUtils",0,"DiskMountCallback() failed with error = %08X",uVar1);
  }
  uVar2 = _CFRunLoopGetCurrent();
  _CFRunLoopStop(uVar2);
  return;
}

