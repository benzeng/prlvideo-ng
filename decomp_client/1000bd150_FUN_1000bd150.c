
undefined8 FUN_1000bd150(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_1 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10018c280(lVar2);
    uVar1 = FUN_100319c50(uVar1);
    uVar1 = FUN_100330a50(uVar1);
  }
  return uVar1;
}

