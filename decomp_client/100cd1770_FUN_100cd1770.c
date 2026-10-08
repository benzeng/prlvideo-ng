
undefined1 FUN_100cd1770(long *param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = "Bad type";
  switch((int)param_1[4]) {
  case 0:
    if ((int)param_1[3] != 0) {
      return 1;
    }
    if ((*(uint *)((long)param_1 + 0x14) & 0xfffffff) != 0) {
      return 1;
    }
    pcVar2 = "No keycode or modifier (from)";
    break;
  case 1:
    if (*(int *)((long)param_1 + 0x1c) == 0) {
      if (((int)param_1[3] == 0) && ((*(uint *)((long)param_1 + 0x14) & 0xfffffff) == 0)) {
        pcVar2 = "No keycode or modifier (from)";
      }
      else {
        if ((int)param_1[5] != 0) {
          return 1;
        }
        if ((*(uint *)((long)param_1 + 0x24) & 0xfffffff) != 0) {
          return 1;
        }
        pcVar2 = "No keycode or modifier (to)";
      }
    }
    else {
      pcVar2 = "Spurious mouse button (from)";
    }
    break;
  case 2:
    if (*(int *)((long)param_1 + 0x1c) == 0) {
      if ((int)param_1[3] == 0) {
        if ((int)param_1[5] == 0) {
          if ((*(uint *)((long)param_1 + 0x14) & 0xfffffff) == 0) {
            pcVar2 = "No modifier (from)";
          }
          else if ((*(uint *)((long)param_1 + 0x24) & 0xfffffff) == 0) {
            pcVar2 = "No modifier (to)";
          }
          else {
            iVar1 = (**(code **)(*param_1 + 0x120))(param_1);
            if (iVar1 == 1) {
              return 1;
            }
            pcVar2 = "Bad modifiers count (from)";
          }
        }
        else {
          pcVar2 = "Spurious keycode (to)";
        }
      }
      else {
        pcVar2 = "Spurious keycode (from)";
      }
    }
    else {
      pcVar2 = "Spurious mouse button (from)";
    }
    break;
  case 6:
    if (param_1[5] == 0) {
      pcVar2 = "No callback";
    }
    else {
      if ((int)param_1[3] != 0) {
        return 1;
      }
      if ((*(uint *)((long)param_1 + 0x14) & 0xfffffff) != 0) {
        return 1;
      }
      pcVar2 = "No keycode or modifier (from)";
    }
  }
  FUN_100df99c0("","hid",0,"[CKeyAction] Invalid action: %s",pcVar2);
  FUN_100cd05d0(param_1,3);
  return 0;
}

