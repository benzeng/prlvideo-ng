
void FUN_1000bd0e0(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_1000af840();
  cVar1 = FUN_1000afac0(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_1000afc00(param_1);
    if (cVar1 == '\0') {
      return;
    }
    uVar2 = 0x4e4b;
  }
  else {
    uVar2 = 0x4e4a;
  }
  FUN_10008fa70(param_1,uVar2);
  return;
}

