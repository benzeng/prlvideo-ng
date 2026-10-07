
void FUN_10038b160(long param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  
  FUN_100388c90();
  puVar1 = *(ulong **)(param_1 + 0xd8);
  lVar2 = *(long *)puVar1[1];
  uVar3 = *puVar1 | *(ulong *)(lVar2 + 0x570);
  *puVar1 = uVar3;
  *puVar1 = uVar3 | *(ulong *)(lVar2 + 0x3010);
  return;
}

