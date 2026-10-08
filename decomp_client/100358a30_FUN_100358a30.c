
undefined8 FUN_100358a30(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_100325f80();
    uVar2 = 1;
    if (cVar1 == '\0') {
      uVar2 = MacUtils::screensHaveSeparateSpaces();
    }
  }
  return uVar2;
}

