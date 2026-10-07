
void FUN_100337bb0(long param_1,ulong param_2)

{
  long lVar1;
  ulong *puVar2;
  
  lVar1 = (ulong)*(ushort *)(param_2 + 2) * 0x14 + 4;
  if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) && (lVar1 + param_2 <= *(ulong *)(param_1 + 0xbc00))
     ) {
    return;
  }
  puVar2 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar2 = param_2;
  *(int *)(puVar2 + 1) = (int)lVar1;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar2,&PTR_vtable_101117a68,0);
}

