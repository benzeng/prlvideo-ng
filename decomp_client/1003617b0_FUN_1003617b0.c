
void FUN_1003617b0(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_38 [12];
  
  if (*(int *)(param_1 + 0x10) != param_2) {
    QMetaObject::indexOfEnumerator((char *)&PTR_staticMetaObject_10220da10);
    local_38 = QMetaObject::enumerator(0x220da10);
    if (0 < DAT_10230ffd0) {
      uVar1 = QMetaEnum::valueToKey((int)local_38);
      uVar2 = QMetaEnum::valueToKey((int)local_38);
      FUN_100df99c0("[HID_CTL]","prl_client_app",1,"Switching mouse type from <%s> to <%s>.",uVar1,
                    uVar2);
    }
    *(int *)(param_1 + 0x10) = param_2;
    if (param_2 == 1) {
      FUN_100361920(param_1);
    }
    else if (param_2 == 0) {
      FUN_100361880(param_1);
    }
  }
  return;
}

