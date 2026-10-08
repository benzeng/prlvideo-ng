
void FUN_100bacdf0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xd0);
  if (lVar1 != 0) {
    if ((*(long *)(lVar1 + 8) != 0) && ((*(byte *)(lVar1 + 0x1c) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(byte *)(lVar1 + 0x1c) & 1) == 0) {
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    else {
      FUN_100bf3910();
    }
    if ((*(long *)(lVar1 + 0x20) != 0) && ((*(byte *)(lVar1 + 0x34) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(byte *)(lVar1 + 0x34) & 1) == 0) {
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    else {
      FUN_100bf3910();
    }
    if ((*(long *)(lVar1 + 0x38) != 0) && ((*(byte *)(lVar1 + 0x4c) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(byte *)(lVar1 + 0x4c) & 1) == 0) {
      *(undefined8 *)(lVar1 + 0x38) = 0;
    }
    else {
      FUN_100bf3910();
    }
    if ((*(byte *)(lVar1 + 0x58) & 1) != 0) {
      FUN_100bf3910(lVar1);
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_100bac7b0();
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  FUN_100bac7b0(param_1 + 0x68);
  FUN_100bac7b0(param_1 + 0x98);
  FUN_100bac7b0(param_1 + 0xb0);
  return;
}

