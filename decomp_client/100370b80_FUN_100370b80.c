
undefined8 FUN_100370b80(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_2);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10018c280(lVar2);
    lVar2 = FUN_1003192a0(uVar1,param_3);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_100326470(lVar2);
    }
  }
  return uVar1;
}

