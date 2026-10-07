
void FUN_100557ac0(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x98);
  uVar2 = 0;
  while ((lVar3 = (ulong)uVar2 * 0x10, *(char *)(lVar1 + 8 + lVar3) == '\0' ||
         (*(long *)(lVar1 + lVar3) != param_2))) {
    uVar2 = uVar2 + 1;
    if (*(uint *)(param_1 + 0x84) < uVar2) {
      FUN_1008e3970("","TransMem",0,"CSnapshotEngineCompressed::put_buffer() not found");
      return;
    }
  }
  *(undefined1 *)(lVar1 + 8 + lVar3) = 0;
  return;
}

