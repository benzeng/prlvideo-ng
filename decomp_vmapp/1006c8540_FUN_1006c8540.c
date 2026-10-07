
undefined8 FUN_1006c8540(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int local_30 [2];
  undefined8 local_28;
  undefined4 local_1c;
  
  local_30[0] = 0;
  cVar1 = FUN_1006c4a30(local_30);
  uVar3 = 0;
  if (cVar1 != '\0') {
    local_28 = 0;
    local_1c = 1;
    iVar2 = _IOConnectCallScalarMethod(local_30[0],3,0,0,&local_28,&local_1c);
    uVar3 = local_28;
    if (iVar2 != 0) {
      FUN_1008e3970("","prl_net",0,"[CPrlVnicMacDriver::getFeatures()] ioctl returned 0x%08x",iVar2)
      ;
      uVar3 = local_28;
    }
  }
  if ((local_30[0] != 0) && (iVar2 = _IOServiceClose(), iVar2 != 0)) {
    FUN_1008e3970("","prl_net",0,"[CPrlVnicMacDriver::closeDriver()] IOServiceClose returned 0x%08x"
                  ,iVar2);
  }
  return uVar3;
}

