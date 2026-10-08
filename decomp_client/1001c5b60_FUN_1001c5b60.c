
void FUN_1001c5b60(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  undefined1 local_20 [8];
  
  cVar1 = FUN_1001c4d50(param_3);
  if (cVar1 == '\0') {
    FUN_1000ab900(param_1 + 0x10,param_2);
  }
  else {
    FUN_100062d00(param_1 + 0x10,param_2,local_20);
  }
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

