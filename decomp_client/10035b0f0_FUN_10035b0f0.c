
void FUN_10035b0f0(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10220da50;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10220dad0;
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("[HID_CTL]","prl_client_app",2,"Deleting HID Hook controller");
  }
  FUN_10006af70(param_1,0);
  FUN_10035b1b0(param_1,0x17,0);
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  }
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
  }
  QObject::~QObject(param_1);
  return;
}

