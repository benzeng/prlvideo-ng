
void FUN_100367330(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_100365110();
  if (cVar1 == '\0') {
    FUN_100363c20(*(undefined8 *)(param_1 + 0x18),param_2,9,0);
    uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x20))(*(long **)(param_1 + 0x18),param_2,9);
    if ((1 < uVar2) && (1 < DAT_10230ffd0)) {
      FUN_100df99c0("[HID_CTL]","prl_client_app",2,
                    "Window Activated: failed to grab keyboard into guest");
    }
  }
  FUN_100365f80(param_1,param_2,param_3);
  return;
}

