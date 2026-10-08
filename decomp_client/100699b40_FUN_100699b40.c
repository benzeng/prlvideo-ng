
bool FUN_100699b40(long param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_100696500();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else if (*(long *)(param_1 + 0x20) == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(long *)(param_1 + 0x28) != 0;
  }
  return bVar2;
}

