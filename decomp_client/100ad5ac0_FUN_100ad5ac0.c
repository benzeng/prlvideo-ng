
bool FUN_100ad5ac0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_100acd8f0(*(undefined8 *)(param_1 + 0x10));
  if (cVar1 != '\0') {
    uVar2 = FUN_100319390(*(undefined8 *)(param_1 + 0x20));
    FUN_100192d10(uVar2,0,0,0);
  }
  return cVar1 != '\0';
}

