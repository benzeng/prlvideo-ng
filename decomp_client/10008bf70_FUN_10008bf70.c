
void FUN_10008bf70(long param_1,undefined1 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x50);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x58), lVar1 != 0)) {
    FUN_100354eb0(lVar1,param_2);
    return;
  }
  return;
}

