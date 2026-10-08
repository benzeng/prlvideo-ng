
undefined8 FUN_1003660f0(long param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_10035de90(*(undefined8 *)(param_1 + 8),0,0);
  if (cVar1 == '\0') {
    QWidget::setFocus(param_2,7);
    uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x38))
                      (*(long **)(param_1 + 0x18),param_2,param_2,0x10,0);
    if (1 < uVar2) {
      FUN_100df99c0("[HID_CTL]","prl_client_app",0,
                    "(!)Error: failed to grab input on mouse release.");
    }
  }
  return 0;
}

