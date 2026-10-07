
void FUN_1006824f0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = _IOServiceClose(param_2);
  if (iVar1 != 0) {
    FUN_1008e3970("","ioctl",0,"Failure: IOServiceClose(%x) returned %d",param_2,iVar1);
    return;
  }
  return;
}

