
undefined8 FUN_100124f90(void)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  cVar1 = FUN_100d80630(1);
  if (cVar1 == '\0') {
    uVar2 = FUN_100152280();
    lVar3 = FUN_1001554a0(uVar2);
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_10016f500(lVar3);
      uVar2 = FUN_10061c2b0(uVar2,0x10080);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

