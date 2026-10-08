
void FUN_1005d2400(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) + 0x28) + 9) & 0x80) == 0) {
    return;
  }
  lVar1 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  *(uint *)(lVar1 + 0x3c) = (param_2 == 0) + 1;
  uVar2 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  FUN_1005bbea0(uVar2);
  return;
}

