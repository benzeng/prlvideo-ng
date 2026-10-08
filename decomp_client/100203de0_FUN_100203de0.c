
undefined8 FUN_100203de0(long param_1)

{
  char *pcVar1;
  
  if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)) ||
     (*(long *)(param_1 + 0x30) == 0)) {
    pcVar1 = "(!)Error: Boot Camp VM instance is invalid.";
  }
  else {
    if (((*(long *)(param_1 + 0x50) != 0) && (*(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) &&
       (*(long *)(param_1 + 0x58) != 0)) {
      return 0;
    }
    pcVar1 = "(!)Error: server instance is invalid.";
  }
  FUN_100df99c0("","prl_client_app",0,pcVar1);
  return 0x80000009;
}

