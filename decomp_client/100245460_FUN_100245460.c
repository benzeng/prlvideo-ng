
undefined8 FUN_100245460(long param_1)

{
  long lVar1;
  
  if ((((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
      (*(long *)(param_1 + 0x20) != 0)) && (lVar1 = FUN_10061b510(), lVar1 != 0)) {
    return 0;
  }
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,"Invalid server instance is null.");
  }
  return 0x80000003;
}

