
undefined8 FUN_100212c10(long param_1)

{
  char *pcVar1;
  
  if (((*(long *)(param_1 + 0x38) == 0) || (*(int *)(*(long *)(param_1 + 0x38) + 4) == 0)) ||
     (*(long *)(param_1 + 0x40) == 0)) {
    pcVar1 = "(!)Error: server instance is invalid.";
  }
  else if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)) ||
          (*(long *)(param_1 + 0x30) == 0)) {
    pcVar1 = "(!)Error: VM instance is invalid.";
  }
  else {
    if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
       (*(long *)(param_1 + 0x20) != 0)) {
      return 0;
    }
    pcVar1 = "(!)Error: Hard disk instance is invalid.";
  }
  FUN_100df99c0("","prl_client_app",0,pcVar1);
  return 0x80000009;
}

