
void FUN_10035cb40(long param_1)

{
  char cVar1;
  
  cVar1 = FUN_10035ea90(*(undefined8 *)(param_1 + 0x18));
  if (cVar1 != '\0') {
    return;
  }
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("[HID_CTL]","prl_client_app",3,"Process mouse buttons release request.");
  }
  WidgetUtils::cursorPos();
  FUN_100362140(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),0);
  return;
}

