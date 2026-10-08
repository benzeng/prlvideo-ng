
void FUN_100108d00(long param_1,undefined8 param_2)

{
  char cVar1;
  char *pcVar2;
  char local_29;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  char local_14;
  
  cVar1 = FUN_100108890(param_1,param_2,&local_29);
  if ((cVar1 != '\0') && (local_29 != *(char *)(param_1 + 0x28))) {
    *(char *)(param_1 + 0x28) = local_29;
    if (1 < DAT_10230ffd0) {
      pcVar2 = "DISABLE (clean)";
      if (local_29 != '\0') {
        pcVar2 = "ENABLE (populate)";
      }
      FUN_100df99c0("SHAC","prl_client_app",2,"Shared Host Applications: %s",pcVar2);
      local_29 = *(char *)(param_1 + 0x28);
    }
    local_20 = 0;
    local_1c = 0;
    local_28 = 0x200000064;
    local_18 = 1;
    local_14 = local_29;
    FUN_100108dc0(param_1,&local_28);
  }
  return;
}

