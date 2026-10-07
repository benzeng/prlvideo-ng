
ulong FUN_100339da0(long param_1,ulong param_2)

{
  long lVar1;
  uint *puVar2;
  ulong *puVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar5 = (uint)*(ushort *)(param_2 + 2) * 0x18 | 4;
  if ((param_2 < *(ulong *)(param_1 + 0xbbf8)) ||
     (uVar6 = uVar5 + param_2, *(ulong *)(param_1 + 0xbc00) < uVar6)) {
    puVar3 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar3 = param_2;
    *(uint *)(puVar3 + 1) = uVar5;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar3,&PTR_vtable_101117a68,0);
  }
  uVar5 = *(uint *)(param_2 + 0xc);
  puVar4 = *(uint **)(*(long *)(param_1 + 0xbb88) + 0x8068 +
                     (ulong)((uVar5 >> 0xc ^ uVar5) & 0xfff ^ uVar5 >> 0x18) * 8);
  while( true ) {
    if (puVar4 == (uint *)0x0) {
      return uVar6;
    }
    if (*puVar4 == uVar5) break;
    puVar4 = *(uint **)(puVar4 + 4);
  }
  if (*(long *)(puVar4 + 2) == 0) {
    return uVar6;
  }
  uVar5 = *(uint *)(param_2 + 4);
  if (uVar5 == 0) {
    return uVar6;
  }
  puVar2 = *(uint **)(*(long *)(param_1 + 0xbb88) + 0x8068 +
                     (ulong)((uVar5 >> 0xc ^ uVar5) & 0xfff ^ uVar5 >> 0x18) * 8);
  while( true ) {
    if (puVar2 == (uint *)0x0) {
      return uVar6;
    }
    if (*puVar2 == uVar5) break;
    puVar2 = *(uint **)(puVar2 + 4);
  }
  lVar1 = *(long *)(puVar2 + 2);
  if (lVar1 == 0) {
    return uVar6;
  }
  (**(code **)(**(long **)(param_1 + 48000) + 0x20))
            (*(long **)(param_1 + 48000),*(undefined8 *)(*(long *)(puVar4 + 2) + 8),
             *(int *)(param_2 + 8) +
             *(int *)(*(long *)(*(long *)(lVar1 + 8) + 0x28) + (ulong)*(uint *)(lVar1 + 4) * 0xc),
             *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
             *(undefined4 *)(param_2 + 0x18));
  return uVar6;
}

