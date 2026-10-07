
void FUN_10010eb30(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar2 = FUN_1000e9a40(*(long *)(param_1 + 0x18),0x25b,0);
    if ((lVar2 != 0) && (lVar1 = *(long *)(lVar2 + 0x30), lVar1 != 0)) {
      uVar3 = *(uint *)(lVar2 + 0x14);
      if (*(uint *)(lVar2 + 0x14) < *(uint *)(lVar2 + 0x10)) {
        uVar3 = *(uint *)(lVar2 + 0x10);
      }
      *(undefined8 *)(lVar2 + 0x30) = 0;
      FUN_100544ef0(lVar1,uVar3 + 0xfff & 0xfffff000);
    }
    lVar2 = FUN_1000e9a40(*(undefined8 *)(param_1 + 0x18),0x206,0);
    if ((lVar2 != 0) && (lVar1 = *(long *)(lVar2 + 0x30), lVar1 != 0)) {
      uVar3 = *(uint *)(lVar2 + 0x14);
      if (*(uint *)(lVar2 + 0x14) < *(uint *)(lVar2 + 0x10)) {
        uVar3 = *(uint *)(lVar2 + 0x10);
      }
      *(undefined8 *)(lVar2 + 0x30) = 0;
      FUN_100544ef0(lVar1,uVar3 + 0xfff & 0xfffff000);
    }
    FUN_100544ef0(*(undefined8 *)(param_1 + 0x18),0x20000);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

