
void FUN_1001e6600(void)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_1001e6650();
  cVar2 = FUN_100d80630(1);
  if (cVar2 == '\0') {
    FUN_1001e5bc0(cVar1 != '\0');
    return;
  }
  if (cVar1 != '\0') {
    FUN_1001e7110();
    return;
  }
  FUN_1001e7240();
  return;
}

