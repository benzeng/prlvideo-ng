
undefined8 FUN_1002ac2a0(long param_1)

{
  long lVar1;
  char *pcVar2;
  
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
    pcVar2 = "(!)Error: License is null";
  }
  else {
    lVar1 = FUN_10061b510();
    if (lVar1 != 0) {
      return 0;
    }
    pcVar2 = "(!)Error: Server instance is null";
  }
  FUN_100df99c0("","prl_client_app",0,pcVar2);
  return 0x80000009;
}

