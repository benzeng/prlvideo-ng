
undefined1 FUN_1002fd070(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = 0;
  uVar4 = *(uint *)(param_1 + 0x11968);
  while( true ) {
    do {
      uVar3 = uVar4;
      if (uVar3 == 0) {
        return 0;
      }
      uVar4 = uVar3 >> 1;
      uVar7 = iVar6 + uVar4;
      lVar1 = *(long *)(param_1 + 0x11970);
      lVar5 = (ulong)uVar7 * 0x10;
    } while (param_2 < *(uint *)(lVar1 + lVar5));
    if (param_2 <= *(uint *)(lVar1 + lVar5)) break;
    iVar6 = uVar7 + 1;
    uVar4 = (uVar3 - 1) - uVar4;
  }
  lVar2 = *(long *)(lVar1 + 8 + lVar5);
  _memmove((void *)(lVar1 + lVar5),(void *)(lVar1 + 0x10 + lVar5),
           (ulong)(*(uint *)(param_1 + 0x11968) + ~uVar7) << 4);
  *(int *)(param_1 + 0x11968) = *(int *)(param_1 + 0x11968) + -1;
  if (lVar2 == 0) {
    return 1;
  }
  FUN_1002a5f70(lVar2);
  return 1;
}

