
undefined8 FUN_1003670c0(long param_1,QWidget *param_2)

{
  long lVar1;
  char cVar2;
  
  cVar2 = FUN_10035dcf0(*(undefined8 *)(param_1 + 8),0x10);
  if (cVar2 == '\0') {
    cVar2 = FUN_10035ddf0(*(undefined8 *)(param_1 + 8),0);
    if (cVar2 != '\0') {
      lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x48);
      if (((lVar1 == 0) || (*(int *)(lVar1 + 4) == 0)) ||
         (*(QWidget **)(*(long *)(param_1 + 8) + 0x50) != param_2)) {
        (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(*(long **)(param_1 + 0x18),0xf,0);
      }
    }
    cVar2 = MacUtils::isMouseInResizeBorderArea(param_2);
    if (cVar2 == '\0') {
      cVar2 = FUN_10035de40(*(undefined8 *)(param_1 + 8),0);
      if (cVar2 != '\0') {
        FUN_100363c20(*(undefined8 *)(param_1 + 0x18),param_2,0xe,0);
      }
    }
  }
  else if (2 < DAT_10230ffd0) {
    FUN_100df99c0("[HID_CTL]","prl_client_app",3,
                  "Failure to grab the mouse since it was manually released earlier");
  }
  return 0;
}

