
void FUN_10072de60(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0xd0);
  if (lVar1 != 0) {
    if ((*(long *)(lVar1 + 8) != 0) && ((*(byte *)(lVar1 + 0x1c) & 2) == 0)) {
      FUN_10081e1a0();
    }
    if ((*(byte *)(lVar1 + 0x1c) & 1) == 0) {
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    else {
      FUN_10081e1a0();
    }
    if ((*(long *)(lVar1 + 0x20) != 0) && ((*(byte *)(lVar1 + 0x34) & 2) == 0)) {
      FUN_10081e1a0();
    }
    if ((*(byte *)(lVar1 + 0x34) & 1) == 0) {
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    else {
      FUN_10081e1a0();
    }
    if ((*(long *)(lVar1 + 0x38) != 0) && ((*(byte *)(lVar1 + 0x4c) & 2) == 0)) {
      FUN_10081e1a0();
    }
    if ((*(byte *)(lVar1 + 0x4c) & 1) == 0) {
      *(undefined8 *)(lVar1 + 0x38) = 0;
    }
    else {
      FUN_10081e1a0();
    }
    if ((*(byte *)(lVar1 + 0x58) & 1) != 0) {
      FUN_10081e1a0(lVar1);
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  plVar2 = *(long **)(param_1 + 0xd8);
  if (plVar2 != (long *)0x0) {
    if ((*plVar2 != 0) && ((*(byte *)((long)plVar2 + 0x14) & 2) == 0)) {
      FUN_10081e1a0();
    }
    if ((*(byte *)((long)plVar2 + 0x14) & 1) == 0) {
      *plVar2 = 0;
    }
    else {
      FUN_10081e1a0(plVar2);
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  if ((*(long *)(param_1 + 0x68) != 0) && ((*(byte *)(param_1 + 0x7c) & 2) == 0)) {
    FUN_10081e1a0();
  }
  if ((*(byte *)(param_1 + 0x7c) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    FUN_10081e1a0();
  }
  if ((*(long *)(param_1 + 0x98) != 0) && ((*(byte *)(param_1 + 0xac) & 2) == 0)) {
    FUN_10081e1a0();
  }
  if ((*(byte *)(param_1 + 0xac) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  else {
    FUN_10081e1a0();
  }
  if ((*(long *)(param_1 + 0xb0) != 0) && ((*(byte *)(param_1 + 0xc4) & 2) == 0)) {
    FUN_10081e1a0();
  }
  if ((*(byte *)(param_1 + 0xc4) & 1) == 0) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
    return;
  }
  FUN_10081e1a0();
  return;
}

