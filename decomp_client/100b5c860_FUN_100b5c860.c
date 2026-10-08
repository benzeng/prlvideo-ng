
undefined8 FUN_100b5c860(void)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  cVar1 = FUN_100b5b210();
  if (cVar1 != '\0') {
    lVar2 = FUN_100b5b710(&DAT_1023118b0);
    uVar3 = *(undefined8 *)(lVar2 + 0x20);
  }
  return uVar3;
}

