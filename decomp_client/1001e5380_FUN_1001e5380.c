
undefined4 FUN_1001e5380(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_100d80630(1);
  uVar2 = 0;
  if (cVar1 != '\0') {
    cVar1 = FUN_1001e6650();
    uVar2 = 0x80000013;
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
  }
  FUN_1001e50a0(param_1,6,uVar2);
  return uVar2;
}

