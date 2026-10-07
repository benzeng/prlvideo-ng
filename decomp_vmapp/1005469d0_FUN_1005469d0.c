
undefined1 FUN_1005469d0(long param_1,long param_2)

{
  undefined1 uVar1;
  
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (param_2 = *(long *)(param_1 + 0x20) + param_2, param_2 == 0)) {
    uVar1 = 0;
    FUN_1008e3970("","TransMem",0,"Failed to discard a page: invalid offset 0x%llX");
  }
  else {
    _madvise(param_2,0x1000,5);
    uVar1 = 1;
  }
  return uVar1;
}

