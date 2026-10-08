
void FUN_100759900(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_2);
  if (lVar2 != 0) {
    uVar1 = FUN_10018c280(lVar2);
    cVar3 = FUN_10031b640(uVar1,0);
    if (cVar3 == '\0') {
      uVar1 = FUN_10018c280(lVar2);
      FUN_10031a440(uVar1,0);
    }
  }
  return;
}

