
undefined8 FUN_1000a12e0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_1 + 0x20);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_10018d490(lVar2);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_10016f500(lVar2);
      uVar1 = FUN_10061c2b0(uVar1,0x10080);
    }
  }
  return uVar1;
}

