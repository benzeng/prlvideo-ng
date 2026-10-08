
void FUN_100cd3d30(undefined8 param_1,uint param_2,undefined1 param_3)

{
  if (param_2 != 0) {
    if ((param_2 & 0x10) != 0) {
      FUN_100cd3b80(param_1,0x10,0x40,param_3);
    }
    if ((param_2 & 0x20) != 0) {
      FUN_100cd3b80(param_1,0x20,0x71,param_3);
    }
    if ((param_2 & 4) != 0) {
      FUN_100cd3b80(param_1,4,0x32,param_3);
    }
    if ((param_2 & 8) != 0) {
      FUN_100cd3b80(param_1,8,0x3e,param_3);
    }
    if ((param_2 & 1) != 0) {
      FUN_100cd3b80(param_1,1,0x25,param_3);
    }
    if ((param_2 & 2) != 0) {
      FUN_100cd3b80(param_1,2,0x6d,param_3);
    }
    if ((param_2 & 0x40) != 0) {
      FUN_100cd3b80(param_1,0x40,0x73,param_3);
    }
    if ((param_2 & 0x80) != 0) {
      FUN_100cd3b80(param_1,0x80,0x74,param_3);
      return;
    }
  }
  return;
}

