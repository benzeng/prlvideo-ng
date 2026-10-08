
void FUN_10008f810(long param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  char *pcVar4;
  QKeySequence local_28 [8];
  
  if (DAT_102310a18 == (void *)0x0) {
    pvVar3 = operator_new(0x20);
    FUN_1007eff80(pvVar3);
    DAT_10226c4da = 1;
    DAT_102310a18 = pvVar3;
  }
  FUN_1007f0520(local_28,DAT_102310a18,0);
  uVar1 = QGuiApplication::queryKeyboardModifiers();
  uVar2 = QKeySequence::operator[]((uint)local_28);
  if (uVar1 == 0) {
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("[SHORTCUT_RECOGNIZER]","prl_client_app",3,
                    "All keyboard modifiers have been released.");
    }
    if (*(char *)(param_1 + 0x1c) != '\0') {
      FUN_10008f2d0(param_1,1);
    }
  }
  else {
    uVar2 = uVar2 & 0xfe000000;
    if (2 < DAT_10230ffd0) {
      pcVar4 = "NOT ";
      if (uVar1 == uVar2) {
        pcVar4 = "";
      }
      FUN_100df99c0("[SHORTCUT_RECOGNIZER]","prl_client_app",3,
                    "Keyboard modifiers changed to %x (%smatch to expected: %x)",uVar1,pcVar4,uVar2)
      ;
    }
    *(bool *)(param_1 + 0x1c) = uVar1 == uVar2;
  }
  QKeySequence::~QKeySequence(local_28);
  return;
}

