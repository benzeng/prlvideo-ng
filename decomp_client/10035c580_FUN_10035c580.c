
void FUN_10035c580(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("[HID_CTL]","prl_client_app",3,"Process host hardware change.");
  }
  bVar1 = FUN_10035dcf0(*(undefined8 *)(param_1 + 0x18),0x40);
  uVar3 = FUN_10035da10(*(undefined8 *)(param_1 + 0x18));
  bVar2 = FUN_1001b4340(uVar3);
  if ((bVar1 ^ bVar2) == 1) {
    FUN_10035db20(*(undefined8 *)(param_1 + 0x18),0x40,bVar2);
    FUN_100361a60(*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}

