
undefined8 FUN_1006aff00(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_10018c280(*(undefined8 *)(param_1 + 0x20));
  uVar1 = FUN_100319450(uVar2);
  if (uVar1 < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10018c280(*(undefined8 *)(param_1 + 0x20));
    uVar2 = FUN_10031bc70(uVar2,2);
  }
  return uVar2;
}

