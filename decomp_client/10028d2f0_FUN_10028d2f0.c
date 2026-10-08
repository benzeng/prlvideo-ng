
undefined8 FUN_10028d2f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_10061b510(*(undefined8 *)(param_1 + 0x18));
  uVar2 = 0;
  if (lVar1 == 0) {
    FUN_100df99c0("[LICENSE]","prl_client_app",0,"(!)Error: Server instance is null.");
    uVar2 = 0x80000009;
  }
  return uVar2;
}

