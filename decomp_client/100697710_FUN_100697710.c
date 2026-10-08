
bool FUN_100697710(long param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_100696500();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = *(long *)(param_1 + 0x18) != 0;
  }
  return bVar2;
}

