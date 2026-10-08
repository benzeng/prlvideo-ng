
void FUN_10035c410(long param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  
  FUN_10035ea60(*(undefined8 *)(param_1 + 0x18),param_3);
  if (2 < DAT_10230ffd0) {
    cVar1 = FUN_10035ea70(*(undefined8 *)(param_1 + 0x18));
    if (cVar1 == '\0') {
      pcVar2 = "DISABLED";
    }
    else {
      cVar1 = FUN_10035ea80(*(undefined8 *)(param_1 + 0x18));
      pcVar2 = "ENABLED (Absolute)";
      if (cVar1 != '\0') {
        pcVar2 = "ENABLED (Sliding)";
      }
    }
    FUN_100df99c0("[HID_CTL]","prl_client_app",3,"Process sliding mouse state change. New state: %s"
                  ,pcVar2);
  }
  FUN_100361a60(*(undefined8 *)(param_1 + 0x20));
  return;
}

