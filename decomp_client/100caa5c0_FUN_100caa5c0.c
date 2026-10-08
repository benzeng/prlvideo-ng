
undefined8 FUN_100caa5c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined1 local_48 [16];
  long local_38;
  undefined8 local_30;
  
  local_30 = 0;
  if (param_1 == 0) {
    lVar3 = FUN_100caac50(0,param_2,param_3);
    if (lVar3 != 0) {
      local_30 = 0;
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    FUN_100c62ee0(0xe,0x6d,0x6a,"conf_lib.c",0x141);
  }
  else {
    if (DAT_102318458 == 0) {
      DAT_102318458 = FUN_100cab020();
    }
    (**(code **)(DAT_102318458 + 0x10))(local_48);
    local_38 = param_1;
    iVar2 = FUN_100caa680(local_48,param_2,param_3,&local_30);
    if (iVar2 != 0) {
      return local_30;
    }
  }
  FUN_100c63270();
  return local_30;
}

