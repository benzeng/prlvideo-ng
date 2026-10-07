
void FUN_10035a1d0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  
  uVar1 = *(uint *)(param_2 + 8);
  puVar3 = *(uint **)(param_1 + 0x8068 + (ulong)((uVar1 >> 0xc ^ uVar1) & 0xfff ^ uVar1 >> 0x18) * 8
                     );
  while( true ) {
    if (puVar3 == (uint *)0x0) {
      return;
    }
    if (*puVar3 == uVar1) break;
    puVar3 = *(uint **)(puVar3 + 4);
  }
  if (*(long *)(puVar3 + 2) == 0) {
    return;
  }
  lVar2 = *(long *)(*(long *)(puVar3 + 2) + 8);
  FUN_10032efd0(lVar2,*(undefined4 *)(param_2 + 0x10));
  *(byte *)(lVar2 + 0x88) = *(byte *)(param_2 + 0xc) >> 3 & 1;
  return;
}

