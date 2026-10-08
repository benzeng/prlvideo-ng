
void FUN_10008fb60(long param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  
  if (param_2 != 0) {
switchD_10008fb89_default:
    return;
  }
  switch(param_3) {
  case 0:
    if (DAT_10230ffd0 < 3) goto LAB_10008fbe9;
    pcVar1 = 
    "Keyboard input source hasn\'t changed shortly after modifiers release. Reset recognizer.";
    break;
  case 1:
    FUN_10008f5e0(param_1);
    return;
  case 2:
    if (DAT_10230ffd0 < 3) goto LAB_10008fbe9;
    pcVar1 = "Keyboard input source will change via Input Source Switch Window. Reset recognizer.";
    break;
  case 3:
    FUN_10008f810(param_1);
    return;
  default:
    goto switchD_10008fb89_default;
  }
  FUN_100df99c0("[SHORTCUT_RECOGNIZER]","prl_client_app",3,pcVar1);
LAB_10008fbe9:
  if (*(int *)(param_1 + 0x18) == 1) {
    FUN_10008f2d0(param_1,3);
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  FUN_10008f2d0(param_1,0);
  return;
}

