
void FUN_10038b4b0(long param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  char in_stack_00000008;
  char in_stack_00000010;
  
  FUN_100389700(param_1);
  puVar1 = *(ulong **)(param_1 + 0xd8);
  lVar2 = *(long *)puVar1[1];
  uVar3 = *puVar1 | *(ulong *)(lVar2 + 0x570);
  *puVar1 = uVar3;
  if (in_stack_00000008 != '\0') {
    uVar3 = uVar3 | *(ulong *)(lVar2 + 0x70);
    *puVar1 = uVar3;
  }
  if (in_stack_00000010 != '\0') {
    *puVar1 = uVar3 | *(ulong *)(lVar2 + 0x1d8);
  }
  return;
}

