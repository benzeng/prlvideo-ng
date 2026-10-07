
void FUN_100338e50(long param_1,ulong param_2)

{
  ulong *puVar1;
  
  if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) && (param_2 + 8 <= *(ulong *)(param_1 + 0xbc00))) {
    *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 4);
    *(ulong *)(param_1 + 0x188) =
         *(ulong *)(param_1 + 0x188) | *(ulong *)(**(long **)(param_1 + 400) + 0x3010);
    return;
  }
  puVar1 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 1) = 8;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar1,&PTR_vtable_101117a68,0);
}

