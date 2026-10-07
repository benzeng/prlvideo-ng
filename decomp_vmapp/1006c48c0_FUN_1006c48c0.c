
undefined8 FUN_1006c48c0(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int local_40 [2];
  long local_38;
  
  local_40[0] = 0;
  iVar3 = 0;
  while( true ) {
    if (iVar3 != 0) {
      FUN_1008e3970("","prl_net",0,
                    "[plugPrlAdapter] Going to sleep and retry attempt to open prl_vnic device (try %d of %d)."
                    ,iVar3 + 1,0x14);
      _usleep(500000);
    }
    cVar1 = FUN_1006c4a30(local_40);
    if (cVar1 != '\0') break;
    iVar3 = iVar3 + 1;
    uVar2 = 0x80000284;
    if (0x13 < iVar3) {
LAB_1006c4990:
      if ((local_40[0] != 0) && (iVar3 = _IOServiceClose(), iVar3 != 0)) {
        FUN_1008e3970("","prl_net",0,
                      "[CPrlVnicMacDriver::closeDriver()] IOServiceClose returned 0x%08x");
      }
      return uVar2;
    }
  }
  local_38 = (long)param_1;
  uVar2 = 0;
  iVar3 = _IOConnectCallScalarMethod(local_40[0],0,&local_38,1,0,0);
  if (iVar3 != 0) {
    uVar2 = 0x80004013;
    FUN_1008e3970("","prl_net",0,"[CPrlVnicMacDriver::installAdapter()] ioctl returned 0x%08x");
  }
  goto LAB_1006c4990;
}

