
undefined8 FUN_100366280(long param_1,undefined8 param_2)

{
  char cVar1;
  
  QWidget::window();
  cVar1 = QWidget::isActiveWindow();
  if (cVar1 == '\0') {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("[HID_CTL]","prl_client_app",2,"Skip mouse grabbing into inactive grabber");
    }
  }
  else {
    cVar1 = FUN_100365110(param_1);
    if (cVar1 == '\0') {
      FUN_100363c20(*(undefined8 *)(param_1 + 0x18),param_2,7,0);
    }
  }
  return 0;
}

