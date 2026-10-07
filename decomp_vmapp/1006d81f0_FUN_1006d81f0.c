
undefined1 FUN_1006d81f0(uint param_1)

{
  char cVar1;
  byte bVar2;
  
  if (((param_1 & 1) != 0) && (cVar1 = FUN_1006d80e0(), cVar1 != '\0')) {
    return 1;
  }
  if (((param_1 & 2) != 0) && (bVar2 = FUN_1006d65b0(), (bVar2 & 2) != 0)) {
    return 1;
  }
  return 0;
}

