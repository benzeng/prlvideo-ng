
undefined8 FUN_100298900(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x29);
  cVar2 = MacUtils::isDisplayMirroringEnabled();
  uVar3 = 0x3bfa;
  if (cVar1 != cVar2) {
    MacUtils::enableDisplayMirroring(*(bool *)(param_1 + 0x29));
    uVar3 = 0;
  }
  return uVar3;
}

