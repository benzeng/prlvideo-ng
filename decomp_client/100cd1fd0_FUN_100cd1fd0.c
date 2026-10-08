
undefined1 FUN_100cd1fd0(long param_1)

{
  char *pcVar1;
  
  pcVar1 = "Bad type";
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0:
    if (*(int *)(param_1 + 0x1c) != 0) {
      return 1;
    }
    pcVar1 = "No mouse button (from)";
    break;
  case 1:
    if (*(int *)(param_1 + 0x18) == 0) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        pcVar1 = "No mouse button (from)";
      }
      else {
        if (*(int *)(param_1 + 0x28) != 0) {
          return 1;
        }
        pcVar1 = "No mouse button (to)";
      }
    }
    else {
      pcVar1 = "Spurious keycode";
    }
    break;
  case 3:
    if (*(int *)(param_1 + 0x18) == 0) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        pcVar1 = "No mouse button (from)";
      }
      else if (*(int *)(param_1 + 0x28) == 0) {
        pcVar1 = "No mouse button (to)";
      }
      else {
        if (*(int *)(param_1 + 0x58) != 0) {
          return 1;
        }
        pcVar1 = "No delay";
      }
    }
    else {
      pcVar1 = "Spurious keycode";
    }
    break;
  case 4:
  case 5:
    if (*(long *)(param_1 + 0x28) == 0) {
      pcVar1 = "No callback";
    }
    else {
      if (*(int *)(param_1 + 0x1c) != 0) {
        return 1;
      }
      pcVar1 = "No mouse button (from)";
    }
  }
  FUN_100df99c0("","hid",0,"[CMouseAction] Invalid action: %s",pcVar1);
  FUN_100cd05d0(param_1,3);
  return 0;
}

