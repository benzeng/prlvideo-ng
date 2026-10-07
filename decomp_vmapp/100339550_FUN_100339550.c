
ulong FUN_100339550(long param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar3 = (uint)*(ushort *)(param_2 + 2) * 8 + 4;
  if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) &&
     (uVar4 = uVar3 + param_2, uVar4 <= *(ulong *)(param_1 + 0xbc00))) {
    if (*(ushort *)(param_2 + 2) != 0) {
      lVar2 = 0;
      do {
        (**(code **)(**(long **)(param_1 + 0xbbb8) + 0xb0))
                  (*(long **)(param_1 + 0xbbb8),*(undefined4 *)(param_2 + 4 + lVar2 * 8),
                   *(undefined4 *)(param_2 + 8 + lVar2 * 8));
        lVar2 = lVar2 + 1;
      } while ((int)lVar2 < (int)(uint)*(ushort *)(param_2 + 2));
    }
    return uVar4;
  }
  puVar1 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar1 = param_2;
  *(uint *)(puVar1 + 1) = uVar3;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar1,&PTR_vtable_101117a68,0);
}

