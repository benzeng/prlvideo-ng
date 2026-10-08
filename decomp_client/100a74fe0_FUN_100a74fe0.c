
undefined8 FUN_100a74fe0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(int *)(*(long *)(param_1 + 8) + 4) == 0) {
    uVar2 = 0;
  }
  else if (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_100aa8af0(param_1 + 8);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_100aa8a50(param_1 + 0x10);
    }
  }
  return uVar2;
}

