
bool FUN_1006907a0(int param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if (param_2 == 0) {
    bVar3 = false;
  }
  else {
    uVar2 = FUN_10018c280(param_2);
    iVar1 = FUN_100319ae0(uVar2);
    bVar3 = iVar1 == param_1;
  }
  return bVar3;
}

