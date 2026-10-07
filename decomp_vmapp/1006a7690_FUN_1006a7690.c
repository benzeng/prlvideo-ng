
long FUN_1006a7690(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  for (lVar2 = *(long *)(param_1 + 0x10); lVar2 != param_1 + 8; lVar2 = *(long *)(lVar2 + 8)) {
    lVar1 = (**(code **)(**(long **)(lVar2 + 0x10) + 0x10))();
    lVar3 = lVar3 + lVar1;
  }
  return lVar3;
}

