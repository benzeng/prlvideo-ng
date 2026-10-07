
void FUN_1006827c0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 != -1) {
    iVar2 = _IOServiceClose(iVar1);
    if (iVar2 != 0) {
      FUN_1008e3970("","ioctl",0,"Failure: IOServiceClose(%x) returned %d",iVar1);
    }
    *param_1 = -1;
  }
  return;
}

