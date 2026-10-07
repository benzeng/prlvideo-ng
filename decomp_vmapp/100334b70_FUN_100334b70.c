
ulong FUN_100334b70(long param_1,ulong param_2)

{
  ulong *puVar1;
  
  if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) && (param_2 + 0x14 <= *(ulong *)(param_1 + 0xbc00)))
  {
    (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x10))();
    return param_2 + 0x14;
  }
  puVar1 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 1) = 0x14;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar1,&PTR_vtable_101117a68,0);
}

