
ulong FUN_100338f80(long param_1,ulong param_2)

{
  ulong *puVar1;
  uint *puVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(param_2 + 2) * 8 + 4;
  if ((param_2 < *(ulong *)(param_1 + 0xbbf8)) ||
     (uVar3 = uVar4 + param_2, *(ulong *)(param_1 + 0xbc00) < uVar3)) {
    puVar1 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar1 = param_2;
    *(uint *)(puVar1 + 1) = uVar4;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar1,&PTR_vtable_101117a68,0);
  }
  uVar4 = *(uint *)(param_2 + 4);
  puVar2 = *(uint **)(*(long *)(param_1 + 0xbb88) + 0x8068 +
                     (ulong)((uVar4 >> 0xc ^ uVar4) & 0xfff ^ uVar4 >> 0x18) * 8);
  while( true ) {
    if (puVar2 == (uint *)0x0) {
      return uVar3;
    }
    if (*puVar2 == uVar4) break;
    puVar2 = *(uint **)(puVar2 + 4);
  }
  if (*(long *)(puVar2 + 2) == 0) {
    return uVar3;
  }
  if (*(char *)(*(long *)(*(long *)(puVar2 + 2) + 8) + 0xac) == '\0') {
    return uVar3;
  }
  FUN_10035f3e0(*(undefined8 *)(param_1 + 48000));
  return uVar3;
}

