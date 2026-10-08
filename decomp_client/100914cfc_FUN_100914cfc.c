
undefined4 FUN_100914cfc(long param_1)

{
  int iVar1;
  undefined4 local_24;
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  iVar1 = FUN_100914aa2(param_1);
  if (iVar1 == 0) {
    local_24 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x30) == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0x5aa;
      FUN_10090b6dd(param_1,"internal: no atom generated");
    }
    FUN_1009148b6(param_1);
    local_24 = 1;
  }
  return local_24;
}

