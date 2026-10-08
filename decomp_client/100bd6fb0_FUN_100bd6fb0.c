
ulong FUN_100bd6fb0(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x50) + 8);
  uVar4 = *(uint *)(param_1 + 100);
  uVar5 = (ulong)(int)uVar4;
  iVar6 = *(int *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x28) = 2;
  uVar3 = FUN_100c58980(*(undefined8 *)(param_1 + 0x18),uVar5 + lVar1,iVar6);
  iVar2 = (int)uVar3;
  while( true ) {
    if (iVar2 < 1) {
      *(uint *)(param_1 + 100) = uVar4;
      *(int *)(param_1 + 0x60) = iVar6;
      return uVar3;
    }
    *(undefined4 *)(param_1 + 0x28) = 1;
    iVar2 = (int)uVar3;
    iVar6 = iVar6 - iVar2;
    if (iVar6 == 0) break;
    uVar4 = iVar2 + (int)uVar5;
    *(undefined4 *)(param_1 + 0x28) = 2;
    uVar3 = FUN_100c58980(*(undefined8 *)(param_1 + 0x18),(int)uVar4 + lVar1,iVar6);
    iVar2 = (int)uVar3;
    uVar5 = (ulong)uVar4;
  }
  return (ulong)(uint)(iVar2 + (int)uVar5);
}

