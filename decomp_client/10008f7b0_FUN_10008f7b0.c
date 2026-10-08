
void FUN_10008f7b0(long param_1)

{
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("[SHORTCUT_RECOGNIZER]","prl_client_app",3,
                  "Keyboard input source hasn\'t changed shortly after modifiers release. Reset recognizer."
                 );
  }
  if (*(int *)(param_1 + 0x18) == 1) {
    FUN_10008f2d0(param_1,3);
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  FUN_10008f2d0(param_1,0);
  return;
}

