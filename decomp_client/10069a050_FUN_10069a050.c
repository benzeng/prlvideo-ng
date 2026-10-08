
void FUN_10069a050(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_10018bce0(*(undefined8 *)(param_1 + 0x28));
  if (iVar2 == 2) {
    uVar1 = FUN_10018c280();
    FUN_10031ae90(uVar1,0);
    return;
  }
  iVar2 = FUN_10018bce0(*(undefined8 *)(param_1 + 0x28));
  if (iVar2 == 3) {
    uVar1 = FUN_10018c280(*(undefined8 *)(param_1 + 0x28));
    FUN_10031b110(uVar1);
    return;
  }
  return;
}

