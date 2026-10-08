
undefined8 FUN_10022e6b0(long param_1)

{
  char *pcVar1;
  
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
    pcVar1 = "(!)Error: server instance is invalid.";
  }
  else {
    if (*(long *)(param_1 + 0x28) != 0) {
      return 0;
    }
    pcVar1 = "(!)Error: network preferences instance is invalid.";
  }
  FUN_100df99c0("","prl_client_app",0,pcVar1);
  return 0x80000009;
}

