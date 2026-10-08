
void FUN_100243f80(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100df99c0("","prl_client_app",0,"Call install tools.");
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1001943a0(uVar1,1);
  FUN_100243dd0(param_1,DAT_100e152a4 / 2);
  return;
}

