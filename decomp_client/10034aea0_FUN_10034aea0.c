
bool FUN_10034aea0(long param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  
  cVar1 = FUN_10034c560();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar4 = FUN_100319390(uVar4);
    uVar3 = FUN_10018a9d0(uVar4);
    bVar2 = uVar3 == 0x3000000c || (uVar3 & 0xfffffffe) == 0x30000004;
  }
  return bVar2;
}

