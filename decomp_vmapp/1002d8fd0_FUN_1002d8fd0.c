
void FUN_1002d8fd0(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  size_t sVar3;
  uint uVar4;
  undefined2 local_28;
  undefined2 local_26;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  
  if (*(int *)(param_2 + 0x468) == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x30);
    local_28 = 0x60a;
    local_26 = *(undefined2 *)(lVar1 + 2);
    local_24 = *(undefined1 *)(lVar1 + 4);
    local_23 = *(undefined1 *)(lVar1 + 5);
    local_22 = *(undefined1 *)(lVar1 + 6);
    local_21 = *(undefined1 *)(lVar1 + 7);
    local_20 = *(undefined1 *)(lVar1 + 0x11);
    local_1f = 0;
    if (0 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"Emulate usb2 device qualifier descriptor (bcd:%04x sz:%d)");
    }
    uVar2 = (ulong)*(uint *)(param_2 + 0x43c);
    sVar3 = 10;
    if (uVar2 < 0xb) {
      sVar3 = uVar2;
    }
    uVar4 = 10;
    if (uVar2 < 0xb) {
      uVar4 = *(uint *)(param_2 + 0x43c);
    }
    _memcpy((void *)(param_2 + 0x4d8),&local_28,sVar3);
    *(uint *)(param_2 + 0x454) = uVar4;
  }
  return;
}

