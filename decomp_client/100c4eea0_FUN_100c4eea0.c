
undefined8 FUN_100c4eea0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_100c26a40(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18));
  uVar3 = 0;
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar2 + 0x18) != 0) {
      FUN_100c266b0();
      lVar2 = *(long *)(param_1 + 0x20);
    }
    *(long *)(lVar2 + 0x18) = lVar1;
    lVar1 = FUN_100c26a40(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x20));
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      if (*(long *)(lVar2 + 0x20) != 0) {
        FUN_100c266b0();
        lVar2 = *(long *)(param_1 + 0x20);
      }
      *(long *)(lVar2 + 0x20) = lVar1;
      lVar1 = FUN_100c26a40(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x28));
      if (lVar1 != 0) {
        lVar2 = *(long *)(param_1 + 0x20);
        if (*(long *)(lVar2 + 0x28) != 0) {
          FUN_100c266b0();
          lVar2 = *(long *)(param_1 + 0x20);
        }
        *(long *)(lVar2 + 0x28) = lVar1;
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

