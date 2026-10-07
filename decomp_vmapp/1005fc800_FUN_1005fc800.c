
void FUN_1005fc800(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = QArrayData::allocate(0x20,8,8,0);
  *param_1 = lVar2;
  if (lVar2 == 0) {
    qBadAlloc();
    lVar2 = *param_1;
  }
  *(undefined4 *)(lVar2 + 4) = 8;
  lVar1 = *(long *)(lVar2 + 0x10);
  FUN_1007d6870(lVar2 + lVar1);
  *(undefined8 *)(lVar2 + 0x10 + lVar1) = 0;
  *(undefined4 *)(lVar2 + 0x18 + lVar1) = 0xffffffff;
  FUN_1007d6870(lVar2 + 0x20 + lVar1);
  *(undefined8 *)(lVar2 + 0x30 + lVar1) = 0;
  *(undefined4 *)(lVar2 + 0x38 + lVar1) = 0xffffffff;
  FUN_1007d6870(lVar2 + 0x40 + lVar1);
  *(undefined8 *)(lVar2 + 0x50 + lVar1) = 0;
  *(undefined4 *)(lVar2 + 0x58 + lVar1) = 0xffffffff;
  FUN_1007d6870(lVar2 + 0x60 + lVar1);
  *(undefined8 *)(lVar2 + 0x70 + lVar1) = 0;
  *(undefined4 *)(lVar2 + 0x78 + lVar1) = 0xffffffff;
  FUN_1007d6870(lVar2 + 0x80 + lVar1);
  *(undefined8 *)(lVar2 + 0x90 + lVar1) = 0;
  *(undefined4 *)(lVar2 + 0x98 + lVar1) = 0xffffffff;
  FUN_1007d6870(lVar2 + 0xa0 + lVar1);
  *(undefined8 *)(lVar2 + 0xb0 + lVar1) = 0;
  *(undefined4 *)(lVar2 + 0xb8 + lVar1) = 0xffffffff;
  FUN_1007d6870(lVar2 + 0xc0 + lVar1);
  *(undefined8 *)(lVar2 + 0xd0 + lVar1) = 0;
  *(undefined4 *)(lVar2 + 0xd8 + lVar1) = 0xffffffff;
  FUN_1007d6870(lVar2 + 0xe0 + lVar1);
  *(undefined8 *)(lVar2 + 0xf0 + lVar1) = 0;
  *(undefined4 *)(lVar2 + 0xf8 + lVar1) = 0xffffffff;
  return;
}

