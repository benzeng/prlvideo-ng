
undefined8 FUN_1001f6de0(long param_1)

{
  char *pcVar1;
  
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
    pcVar1 = "(!)Error: VM instance is invalid.";
  }
  else {
    if (((*(long *)(param_1 + 0x28) != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
       (*(long *)(param_1 + 0x30) != 0)) {
      return 0;
    }
    pcVar1 = "(!)Error: hard disk instance is invalid.";
  }
  FUN_100df99c0("[CompactHdd]","prl_client_app",0,pcVar1);
  return 0x80000009;
}

