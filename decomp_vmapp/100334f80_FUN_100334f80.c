
ulong FUN_100334f80(long param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(param_2 + 2) * 8 + 4;
  if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) &&
     (uVar2 = uVar3 + param_2, uVar2 <= *(ulong *)(param_1 + 0xbc00))) {
    (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x18))
              (*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
    return uVar2;
  }
  puVar1 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar1 = param_2;
  *(uint *)(puVar1 + 1) = uVar3;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar1,&PTR_vtable_101117a68,0);
}

