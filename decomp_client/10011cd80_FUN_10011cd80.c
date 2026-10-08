
undefined8 FUN_10011cd80(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_10018dbd0(param_1,0xe);
  if (cVar1 == '\0') {
    cVar1 = FUN_10018dbd0(param_1,0);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}

