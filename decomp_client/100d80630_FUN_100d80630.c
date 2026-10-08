
undefined1 FUN_100d80630(uint param_1)

{
  char cVar1;
  byte bVar2;
  
  if (((param_1 & 1) != 0) && (cVar1 = FUN_100d80520(), cVar1 != '\0')) {
    return 1;
  }
  if (((param_1 & 2) != 0) && (bVar2 = FUN_100d7e9f0(), (bVar2 & 2) != 0)) {
    return 1;
  }
  return 0;
}

