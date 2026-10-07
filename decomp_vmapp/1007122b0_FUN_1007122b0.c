
undefined8 FUN_1007122b0(undefined4 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1007127b0(&DAT_1011ccb30);
  if (*(long *)(lVar1 + 0x30) == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_1007127b0(&DAT_1011ccb30);
    lVar1 = *(long *)(lVar1 + 0x30);
    *(undefined4 *)(lVar1 + 0x1c) = param_1;
    *(undefined4 *)(lVar1 + 0x20) = param_2;
    uVar2 = CONCAT71((int7)((ulong)lVar1 >> 8),1);
  }
  return uVar2;
}

