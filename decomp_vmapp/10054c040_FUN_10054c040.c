
void FUN_10054c040(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_1007da300("vm.compressor.use_lz4",1);
  if (iVar1 == 0) {
    uVar3 = 3;
    uVar2 = 3;
  }
  else {
    uVar3 = 4;
    uVar2 = 4;
  }
  FUN_10054c090(param_1,0,uVar3,uVar2);
  return;
}

