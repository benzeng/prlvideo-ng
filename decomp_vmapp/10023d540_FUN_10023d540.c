
int FUN_10023d540(undefined8 param_1,long param_2)

{
  int iVar1;
  long local_28;
  
  local_28 = param_2;
  while( true ) {
    if (local_28 == 0) {
      return 0;
    }
    iVar1 = FUN_10023d587(param_1,local_28);
    if (iVar1 != 0) break;
    local_28 = *(long *)(local_28 + 0x40);
  }
  return iVar1;
}

