
undefined8 FUN_100880e40(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    if (*(long *)(lVar1 + 8) != 0) {
      FUN_10081e1a0();
    }
    if (*(long *)(lVar1 + 0x18) != 0) {
      FUN_10081e1a0();
    }
    FUN_10081e1a0(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    uVar2 = 1;
  }
  return uVar2;
}

