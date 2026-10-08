
undefined8 FUN_100265990(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = FUN_100d80630(1);
  uVar4 = 0x3bfa;
  if ((cVar1 == '\0') && ((*(byte *)(param_1 + 0x120) & 1) != 0)) {
    uVar4 = FUN_100152280();
    lVar2 = FUN_1001548f0(uVar4,param_1 + 0x140);
    uVar4 = 0;
    if (lVar2 != 0) {
      uVar3 = FUN_10018c2b0(lVar2);
      FUN_1005ce830(uVar3);
    }
  }
  return uVar4;
}

