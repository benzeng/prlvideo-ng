
undefined8 FUN_1007ef6b0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_100152a20(uVar1,*(long *)(param_1 + 0x10) + 0x18);
  if (lVar2 == 0) {
    uVar1 = FUN_100152280();
    lVar2 = FUN_1001548f0(uVar1,*(long *)(param_1 + 0x10) + 0x18);
    if (lVar2 == 0) {
      return 0;
    }
    uVar1 = FUN_1006915d0();
    uVar3 = 0x3c;
  }
  else {
    uVar1 = FUN_1006915d0();
    uVar3 = 0x3d;
  }
  uVar1 = FUN_100691620(uVar1,uVar3,lVar2);
  return uVar1;
}

