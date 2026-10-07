
undefined8 FUN_10054e3d0(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((**(short **)(param_1 + 0x28) == 2) || (*(long *)(param_1 + 0x88) == 0)) &&
     (cVar1 = FUN_10054d5b0(param_1,param_2), cVar1 == '\0')) {
    return 0;
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    if (**(short **)(param_1 + 0x28) == 2) {
      uVar2 = FUN_10054dea0(param_1,param_2);
      return uVar2;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  uVar2 = FUN_10054dca0(param_1,param_2,uVar2);
  return uVar2;
}

