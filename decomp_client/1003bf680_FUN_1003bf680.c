
undefined8 FUN_1003bf680(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_10011bfc0();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1003b0a30(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
    uVar2 = FUN_1001221f0(uVar2);
  }
  return uVar2;
}

