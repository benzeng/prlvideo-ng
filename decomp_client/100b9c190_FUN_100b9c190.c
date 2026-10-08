
undefined8 FUN_100b9c190(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_18;
  
  local_18 = 0;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_100bc1a50(&local_18,param_1);
    uVar2 = 0;
    if (-1 < iVar1) {
      uVar2 = local_18;
    }
  }
  return uVar2;
}

