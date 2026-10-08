
void FUN_100b0c9c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 local_40;
  long local_3c;
  undefined8 local_34;
  
  local_3c = FUN_100b0b040();
  if (local_3c != 0) {
    local_40 = param_3;
    local_34 = param_4;
    iVar1 = FUN_100b0b9a0(param_1,0x6014780b,&local_40,0x14,0);
    if (iVar1 != 0) {
      FUN_100df99c0("","ioctl",0,"Ioctl failed to set %s variable",param_2);
    }
    return;
  }
  FUN_100df99c0("","ioctl",0,"Failed to find %s variable address.",param_2);
  return;
}

