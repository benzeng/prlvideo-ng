
bool FUN_1003c0650(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  cVar1 = FUN_100d80630(1);
  if (cVar1 == '\0') {
    uVar2 = FUN_1003be3a0(*(undefined8 *)(param_1 + 0x10));
    uVar3 = FUN_1003be480(*(undefined8 *)(param_1 + 0x10));
    cVar1 = FUN_100110a10(uVar2,uVar3);
    if (cVar1 == '\0') {
      bVar5 = false;
    }
    else {
      iVar4 = FUN_1003be3a0(*(undefined8 *)(param_1 + 0x10));
      bVar5 = iVar4 == 8;
    }
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

