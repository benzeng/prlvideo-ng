
undefined8 FUN_100b49f70(int param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int local_28 [2];
  long local_20;
  
  local_28[0] = 0;
  cVar1 = FUN_100b49e80(local_28);
  uVar3 = 0x80000284;
  if (cVar1 != '\0') {
    local_20 = (long)param_1;
    uVar3 = 0;
    iVar2 = _IOConnectCallScalarMethod(local_28[0],1,&local_20,1,0,0);
    if (iVar2 != 0) {
      uVar3 = 0x80004014;
      FUN_100df99c0("","prl_net",0,"[CPrlVnicMacDriver::installAdapter()] ioctl returned 0x%08x",
                    iVar2);
    }
  }
  if ((local_28[0] != 0) && (iVar2 = _IOServiceClose(), iVar2 != 0)) {
    FUN_100df99c0("","prl_net",0,"[CPrlVnicMacDriver::closeDriver()] IOServiceClose returned 0x%08x"
                  ,iVar2);
  }
  return uVar3;
}

