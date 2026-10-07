
undefined8 FUN_1007123b0(void)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  cVar1 = FUN_100710e30();
  if (cVar1 != '\0') {
    lVar2 = FUN_1007127b0(&DAT_1011ccb30);
    uVar3 = *(undefined8 *)(lVar2 + 0x20);
  }
  return uVar3;
}

