
void FUN_100ac38c0(long param_1,undefined4 param_2)

{
  char cVar1;
  long lVar2;
  
  lVar2 = FUN_1000a9690(param_1 + 0x988);
  if (lVar2 != 0) {
    cVar1 = FUN_1000b7a80(lVar2,param_2,0);
    if (cVar1 != '\0') {
      return;
    }
  }
  FUN_100ad5960(param_1,2,param_2,0);
  return;
}

