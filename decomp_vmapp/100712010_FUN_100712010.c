
undefined8 FUN_100712010(undefined4 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1007127b0(&DAT_1011ccb30);
  if (*(long *)(lVar1 + 0x30) == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_1007127b0(&DAT_1011ccb30);
    uVar2 = FUN_100712050(*(undefined8 *)(lVar1 + 0x30),param_1);
  }
  return uVar2;
}

