
undefined8 FUN_100227260(long param_1)

{
  undefined8 uVar1;
  
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
     (uVar1 = 0, *(long *)(param_1 + 0x20) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: VM instance is invalid.");
    uVar1 = 0x80000009;
  }
  return uVar1;
}

