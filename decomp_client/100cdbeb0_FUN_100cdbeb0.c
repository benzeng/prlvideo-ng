
undefined8 FUN_100cdbeb0(long param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_48;
  undefined1 local_47;
  uint local_46;
  
  QMutex::lock();
  if (1 < DAT_10230ffd0) {
    pcVar4 = "SCROLL ";
    if ((param_2 & 1) == 0) {
      pcVar4 = "";
    }
    pcVar2 = "NUM ";
    if ((param_2 & 2) == 0) {
      pcVar2 = "";
    }
    pcVar3 = "CAPS ";
    if ((param_2 & 4) == 0) {
      pcVar3 = "";
    }
    FUN_100df99c0("","hid",2,"[HIDMacHook] Set LEDs: 0x%x (%s%s%s)",param_2,pcVar4,pcVar2,pcVar3);
  }
  if ((*(char *)(param_1 + 0x480) != '\0') && ((*(byte *)(param_1 + 0x448) & 4) == 0)) {
    uVar1 = *(uint *)(param_1 + 0x3f8);
    *(uint *)(param_1 + 0x3f8) = uVar1 & 0xfffeffff;
    if ((param_2 & 4) != 0) {
      *(uint *)(param_1 + 0x3f8) = uVar1 | 0x10000;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x3f8) | 0x200000;
  if ((param_2 & 2) == 0) {
    uVar1 = *(uint *)(param_1 + 0x3f8) & 0xffdfffff;
  }
  *(uint *)(param_1 + 0x3f8) = uVar1;
  if (*(char *)(param_1 + 0x3e1) != '\0') {
    local_47 = 4;
    local_46 = param_2;
    FUN_100cd90a0(&local_48);
  }
  *(undefined8 *)(param_1 + 0x400) = 0;
  QMutex::unlock();
  return 1;
}

