
undefined8 FUN_1008cf040(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined1 local_48 [16];
  long local_38;
  undefined8 local_30;
  
  local_30 = 0;
  if (param_1 == 0) {
    lVar3 = FUN_1008cf6d0(0,param_2,param_3);
    if (lVar3 != 0) {
      local_30 = 0;
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    FUN_100887ce0(0xe,0x6d,0x6a,"conf_lib.c",0x141);
  }
  else {
    if (DAT_1011c2a18 == 0) {
      DAT_1011c2a18 = FUN_1008cfaa0();
    }
    (**(code **)(DAT_1011c2a18 + 0x10))(local_48);
    local_38 = param_1;
    iVar2 = FUN_1008cf100(local_48,param_2,param_3,&local_30);
    if (iVar2 != 0) {
      return local_30;
    }
  }
  FUN_100888070();
  return local_30;
}

