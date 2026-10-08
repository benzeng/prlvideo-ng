
undefined8 FUN_100366160(long param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_10035dcf0(*(undefined8 *)(param_1 + 8),2);
  if (cVar1 == '\0') {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x20))(*(long **)(param_1 + 0x18),param_2,3);
    if ((1 < uVar2) && (1 < DAT_10230ffd0)) {
      FUN_100df99c0("[HID_CTL]","prl_client_app",2,"Focus In: failed to grab keyboard into guest");
    }
  }
  return 0;
}

