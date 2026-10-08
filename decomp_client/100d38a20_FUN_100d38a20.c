
undefined8 FUN_100d38a20(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long local_20;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else if (*(char *)(param_1 + 0x31) == '\0') {
    if ((*(char *)(param_1 + 0x30) == '\0') || (*(char *)(param_2 + 0x31) != '\0')) {
      lVar1 = *(long *)(param_1 + 0x50);
      iVar3 = *(int *)(lVar1 + 0xc);
    }
    else {
      lVar1 = *(long *)(param_1 + 0x50);
      iVar3 = *(int *)(lVar1 + 0xc) + -1;
    }
    local_20 = param_2;
    FUN_100d3cdf0(param_1 + 0x50,iVar3 - *(int *)(lVar1 + 8),&local_20);
    *(long *)(param_2 + 0x48) = param_1;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

