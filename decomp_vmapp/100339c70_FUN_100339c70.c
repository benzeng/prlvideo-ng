
ulong FUN_100339c70(long param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(param_2 + 2) * 0x38 | 4;
  if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) &&
     (uVar2 = uVar3 + param_2, uVar2 <= *(ulong *)(param_1 + 0xbc00))) {
    FUN_10033c800(param_1,param_2 + 4,*(undefined4 *)(param_2 + 0x38));
    return uVar2;
  }
  puVar1 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar1 = param_2;
  *(uint *)(puVar1 + 1) = uVar3;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar1,&PTR_vtable_101117a68,0);
}

