
ulong FUN_100339ce0(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  ulong *puVar3;
  uint *puVar4;
  ulong uVar5;
  
  lVar1 = (ulong)*(ushort *)(param_2 + 2) * 4 + 4;
  if ((param_2 < *(ulong *)(param_1 + 0xbbf8)) ||
     (uVar5 = lVar1 + param_2, *(ulong *)(param_1 + 0xbc00) < uVar5)) {
    puVar3 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar3 = param_2;
    *(int *)(puVar3 + 1) = (int)lVar1;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar3,&PTR_vtable_101117a68,0);
  }
  uVar2 = *(uint *)(param_2 + 4);
  puVar4 = *(uint **)(*(long *)(param_1 + 0xbb88) + 0x8068 +
                     (ulong)((uVar2 >> 0xc ^ uVar2) & 0xfff ^ uVar2 >> 0x18) * 8);
  while( true ) {
    if (puVar4 == (uint *)0x0) {
      return uVar5;
    }
    if (*puVar4 == uVar2) break;
    puVar4 = *(uint **)(puVar4 + 4);
  }
  if (*(long *)(puVar4 + 2) == 0) {
    return uVar5;
  }
  FUN_10035c440(*(undefined8 *)(*(long *)(param_1 + 48000) + 8),
                *(undefined8 *)(*(long *)(puVar4 + 2) + 8));
  return uVar5;
}

