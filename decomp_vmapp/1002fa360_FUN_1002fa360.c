
bool FUN_1002fa360(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x11978) == '\0') {
    bVar2 = false;
  }
  else {
    iVar1 = _CGLCopyContext(param_2,param_3,param_4);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}

