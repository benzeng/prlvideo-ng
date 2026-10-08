
undefined8 FUN_100214bb0(long param_1)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: VM instance is invalid.");
    uVar3 = 0x80000009;
  }
  else {
    if (DAT_102310920 == (void *)0x0) {
      pvVar2 = operator_new(0x50);
      FUN_1001d1080(pvVar2);
      DAT_10226c778 = 1;
      DAT_102310920 = pvVar2;
    }
    cVar1 = FUN_1001d1240(DAT_102310920);
    uVar3 = 0x80000275;
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
  }
  return uVar3;
}

