
undefined8 FUN_10022fba0(long param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
    pcVar2 = "(!)Error: VM instance is invalid.";
  }
  else {
    iVar1 = CAbstractTask::getCurrentSubTask();
    if (1 < iVar1 - 1U) {
      return 0;
    }
    if (((*(long *)(param_1 + 0x28) != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
       (*(long *)(param_1 + 0x30) != 0)) {
      return 0;
    }
    pcVar2 = "(!)Error: GuestSession wrapper is invalid.";
  }
  FUN_100df99c0("","prl_client_app",0,pcVar2);
  return 0x80000009;
}

