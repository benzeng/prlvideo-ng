
undefined8 FUN_1006ac810(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_100d80630(1);
  if (cVar1 == '\0') {
    uVar2 = FUN_10016f500(*(undefined8 *)(param_1 + 0x18));
    uVar2 = FUN_10061b4d0(uVar2,0x20);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

