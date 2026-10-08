
bool FUN_1003c06f0(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  cVar1 = FUN_100d80630(1);
  if (cVar1 == '\0') {
    iVar3 = FUN_1003be3a0(*(undefined8 *)(param_1 + 0x10));
    if (iVar3 == 8) {
      uVar4 = FUN_1003be480(*(undefined8 *)(param_1 + 0x10));
      bVar2 = 0x80b < uVar4;
    }
    else {
      bVar2 = false;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

