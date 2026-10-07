
int FUN_0040f480(undefined8 param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_24;
  
  local_24 = FUN_0040f212(param_1);
  if ((local_24 == -1) && (piVar1 = __errno_location(), *piVar1 != 0x1a)) {
    uVar2 = FUN_0040f304();
    uVar3 = FUN_0040f1a4();
    FUN_0040f396(uVar2,uVar3);
    uVar2 = FUN_0040f46e();
    local_24 = FUN_0040f212(uVar2);
  }
  return local_24;
}

