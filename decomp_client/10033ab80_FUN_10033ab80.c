
undefined1 FUN_10033ab80(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_10033aab0();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else if (*(long *)(param_1 + 0x20) == 0) {
    uVar2 = 0;
    FUN_100df99c0("","prl_client_app",0,
                  "Failed to open guest menu. Shell Integration client object does not exist!");
  }
  else {
    uVar2 = FUN_100abe710();
  }
  return uVar2;
}

