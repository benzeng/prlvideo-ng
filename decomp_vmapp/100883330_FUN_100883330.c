
undefined4 FUN_100883330(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  socklen_t local_10;
  undefined4 local_c;
  
  local_10 = 4;
  iVar1 = _getsockopt(param_1,0xffff,0x1007,&local_c,&local_10);
  uVar2 = 1;
  if (-1 < iVar1) {
    uVar2 = local_c;
  }
  return uVar2;
}

