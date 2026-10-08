
void FUN_100378b00(long param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *(char *)(param_1 + 0x66);
  cVar2 = MacUtils::isWindowInFullScreenTiling(*(QWidget **)(param_1 + 0x10));
  *(char *)(param_1 + 0x66) = cVar2;
  if (cVar1 == cVar2) {
    return;
  }
  FUN_100378a30(param_1);
  return;
}

