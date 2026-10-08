
byte FUN_100778020(void)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = FUN_100774d90();
  bVar2 = 1;
  if (cVar1 == '\0') {
    cVar1 = FUN_10076d9d0();
    if (cVar1 != '\0') {
      bVar2 = FUN_10076d9e0();
      bVar2 = bVar2 ^ 1;
    }
  }
  return bVar2;
}

