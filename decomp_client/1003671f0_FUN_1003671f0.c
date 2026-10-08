
undefined8 FUN_1003671f0(long param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  cVar1 = FUN_10035dcf0(*(undefined8 *)(param_1 + 8),2);
  if (cVar1 == '\0') {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x20))(*(long **)(param_1 + 0x18),param_2,3);
    if (uVar2 < 2) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))
                        (*(long **)(param_1 + 0x18),param_2,3,0);
      if (uVar2 < 2) {
        return 0;
      }
      if (DAT_10230ffd0 < 3) {
        return 0;
      }
      pcVar3 = "Focus In: failed to grab mouse into guest.";
      uVar4 = 3;
    }
    else {
      if (DAT_10230ffd0 < 2) {
        return 0;
      }
      pcVar3 = "Focus In: failed to grab keyboard into guest";
      uVar4 = 2;
    }
    FUN_100df99c0("[HID_CTL]","prl_client_app",uVar4,pcVar3);
  }
  return 0;
}

