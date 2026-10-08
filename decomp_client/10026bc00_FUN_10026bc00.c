
undefined8 FUN_10026bc00(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001548f0(uVar2,param_1 + 0x60);
  uVar2 = 0x80000009;
  if (lVar3 != 0) {
    uVar2 = FUN_10018c280(lVar3);
    iVar1 = FUN_100319ae0(uVar2);
    uVar2 = 0;
    if (iVar1 == 0) {
      uVar4 = FUN_10018c280(lVar3);
      uVar2 = 0;
      FUN_10031a440(uVar4,0);
    }
  }
  return uVar2;
}

