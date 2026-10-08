
undefined1 FUN_1006aa6e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 uVar6;
  
  cVar3 = FUN_10069e1e0();
  if (cVar3 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar1 = FUN_100152280();
    lVar5 = FUN_1001554a0(uVar1);
    if (lVar5 != 0) {
      uVar1 = FUN_1001766b0(lVar5);
      uVar2 = FUN_10069dca0(param_1);
      uVar4 = FUN_1006947d0(uVar2);
      cVar3 = FUN_100615ca0(uVar1,uVar4,0);
      if (cVar3 != '\0') {
        return 0;
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}

