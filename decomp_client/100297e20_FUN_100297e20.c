
undefined8 FUN_100297e20(long param_1)

{
  undefined8 uVar1;
  
  if ((((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
      (uVar1 = 0, *(long *)(param_1 + 0x20) == 0)) && (uVar1 = 0x80000009, 1 < DAT_10230ffd0)) {
    FUN_100df99c0("","prl_client_app",2,"Vm instance is null.");
  }
  return uVar1;
}

