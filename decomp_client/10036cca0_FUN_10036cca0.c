
undefined8 FUN_10036cca0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 0x28);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x40) + 0x30) != 0)) {
    uVar2 = FUN_1003797e0();
    return uVar2;
  }
  return 0;
}

