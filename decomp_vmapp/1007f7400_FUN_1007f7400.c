
void FUN_1007f7400(long param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x48) == 0x1200) {
    bVar1 = *(byte *)(param_1 + 0x280);
    uVar5 = (ulong)bVar1;
    uVar4 = bVar1 + 2 & 0x1f;
    iVar3 = -uVar4;
    iVar6 = iVar3 + 0x20;
    puVar2 = *(undefined1 **)(*(long *)(param_1 + 0x50) + 8);
    puVar2[4] = bVar1;
    _memcpy(puVar2 + 5,*(void **)(param_1 + 0x278),uVar5);
    puVar2[uVar5 + 5] = (char)iVar6;
    ___bzero(puVar2 + uVar5 + 6,iVar6);
    *puVar2 = 0x43;
    iVar3 = iVar3 + 0x22 + (uint)bVar1;
    puVar2[1] = 0;
    puVar2[2] = (char)((uint)iVar3 >> 8);
    puVar2[3] = (char)iVar3;
    *(undefined4 *)(param_1 + 0x48) = 0x1201;
    *(uint *)(param_1 + 0x60) = (bVar1 + 0x26) - uVar4;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  FUN_1007fd930(param_1,0x16);
  return;
}

