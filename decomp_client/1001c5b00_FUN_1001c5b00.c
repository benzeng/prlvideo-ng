
void FUN_1001c5b00(long param_1)

{
  char cVar1;
  char cVar2;
  
  FUN_1000ab900(param_1 + 0x10);
  cVar1 = FUN_1001c5c70();
  if (cVar1 != '\0') {
    cVar1 = FUN_1001c4dd0(param_1);
    cVar2 = FUN_1001c5c80();
    if (cVar1 == '\0') {
      if (cVar2 != '\0') {
        FUN_1001c6400();
        return;
      }
    }
    else if (cVar2 == '\0') {
      FUN_1001c6010(1);
      return;
    }
  }
  return;
}

