
undefined8 FUN_1003bed60(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_100d80630(1);
  if (cVar1 == '\0') {
    uVar2 = MacUtils::isAppleHypervisorCompatible();
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

