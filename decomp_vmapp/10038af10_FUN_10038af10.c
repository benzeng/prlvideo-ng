
void FUN_10038af10(long param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long in_stack_00000030;
  
  FUN_100388010(param_1);
  puVar1 = *(ulong **)(param_1 + 0xd8);
  lVar2 = *(long *)puVar1[1];
  uVar3 = *puVar1 | *(ulong *)(lVar2 + 0xd8);
  *puVar1 = uVar3;
  uVar3 = uVar3 | *(ulong *)(lVar2 + 0x570);
  *puVar1 = uVar3;
  uVar3 = uVar3 | *(ulong *)(lVar2 + 0xb0);
  *puVar1 = uVar3;
  uVar3 = uVar3 | *(ulong *)(lVar2 + 0x3000);
  *puVar1 = uVar3;
  uVar3 = uVar3 | *(ulong *)(lVar2 + 0x3008);
  *puVar1 = uVar3;
  uVar3 = uVar3 | *(ulong *)(lVar2 + 0x540);
  *puVar1 = uVar3;
  uVar3 = uVar3 | *(ulong *)(lVar2 + 0x78);
  *puVar1 = uVar3;
  uVar3 = uVar3 | *(ulong *)(lVar2 + 0x40);
  *puVar1 = uVar3;
  uVar3 = uVar3 | *(ulong *)(lVar2 + 0x38);
  *puVar1 = uVar3;
  uVar3 = uVar3 | *(ulong *)(lVar2 + 0x70);
  *puVar1 = uVar3;
  uVar3 = uVar3 | *(ulong *)(lVar2 + 0x4c0);
  *puVar1 = uVar3;
  uVar3 = uVar3 | *(ulong *)(lVar2 + 0x610);
  *puVar1 = uVar3;
  if ((*(byte *)(in_stack_00000030 + 0xac) & 1) != 0) {
    uVar3 = uVar3 | *(ulong *)(lVar2 + 0xb8);
    *puVar1 = uVar3;
    uVar3 = uVar3 | *(ulong *)(lVar2 + 0x178);
    *puVar1 = uVar3;
    *puVar1 = uVar3 | *(ulong *)(lVar2 + 0x1a0);
  }
  return;
}

