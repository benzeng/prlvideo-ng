
void FUN_100338ec0(long param_1,ulong param_2)

{
  ulong *puVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(param_2 + 2) * 8 + 4;
  if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) && (uVar2 + param_2 <= *(ulong *)(param_1 + 0xbc00))
     ) {
    return;
  }
  puVar1 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar1 = param_2;
  *(uint *)(puVar1 + 1) = uVar2;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar1,&PTR_vtable_101117a68,0);
}

