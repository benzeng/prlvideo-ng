
undefined8 FUN_1001f4910(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (((lVar2 == 0) || (*(int *)(lVar2 + 4) == 0)) || (*(long *)(param_1 + 0x38) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: server instance is invalid.");
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 == 0) {
      return 0x80000009;
    }
  }
  uVar1 = 0x80000009;
  if ((*(int *)(lVar2 + 4) != 0) && (uVar1 = 0, *(long *)(param_1 + 0x38) == 0)) {
    uVar1 = 0x80000009;
  }
  return uVar1;
}

