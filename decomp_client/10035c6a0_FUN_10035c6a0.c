
void FUN_10035c6a0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  
  if (3 < DAT_10230ffd0) {
    FUN_100df99c0("[HID_CTL]","prl_client_app",4,"Process mouse from hook.");
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x30);
  (**(code **)(*plVar1 + 0x98))(plVar1,param_2);
  if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
    cVar2 = FUN_10035dcf0(*(undefined8 *)(param_1 + 0x18),0x80);
    if (cVar2 != '\0') {
      FUN_10035db20(*(undefined8 *)(param_1 + 0x18),0x80,0);
      QTimer::singleShot(100,*(QObject **)(param_1 + 0x20),"1updateMouseType()");
      return;
    }
  }
  return;
}

