
int FUN_100999c20(undefined8 param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_1009983c0();
  bVar1 = FUN_100991a90(uVar4);
  uVar4 = FUN_1009983a0(param_1);
  cVar2 = FUN_100990a60(uVar4);
  if (cVar2 == '\0') {
    iVar3 = (bVar1 == 0) + 3;
  }
  else {
    iVar3 = (uint)bVar1 * 9 + 5;
  }
  return iVar3;
}

