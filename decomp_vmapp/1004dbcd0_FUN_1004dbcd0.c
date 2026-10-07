
undefined8
FUN_1004dbcd0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,code *param_5,
             undefined8 param_6,int *param_7)

{
  long *plVar1;
  char cVar2;
  uint local_40;
  uint local_3c;
  undefined8 local_38;
  
  local_38 = 0;
  local_3c = 0;
  *param_7 = 0;
  while( true ) {
    cVar2 = (*param_5)(param_6,&local_38,&local_3c);
    if (cVar2 == '\0') {
      return 0;
    }
    local_40 = 0;
    plVar1 = *(long **)(*(long *)(param_1 + 0x40) + 0x10);
    cVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_3,local_38,local_3c,&local_40);
    *param_7 = *param_7 + local_40;
    if (cVar2 == '\0') break;
    param_3 = param_3 + (ulong)local_40;
    if (local_40 != local_3c) {
      return 0;
    }
  }
  return 0xf000001c;
}

