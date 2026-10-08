
undefined8 FUN_100d38920(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0;
  if (-1 < param_2) {
    uVar1 = 0;
    if (param_2 < *(int *)(*(long *)(param_1 + 0x50) + 0xc) -
                  *(int *)(*(long *)(param_1 + 0x50) + 8)) {
      puVar2 = (undefined8 *)FUN_100d3cd40(param_1 + 0x50);
      uVar1 = *puVar2;
    }
  }
  return uVar1;
}

