
ulong FUN_1003351c0(long param_1,ulong param_2)

{
  ulong *puVar1;
  
  if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) && (param_2 + 8 <= *(ulong *)(param_1 + 0xbc00))) {
    FUN_100350e30(param_1 + 0x1f8,*(undefined4 *)(param_2 + 4));
    return param_2 + 8;
  }
  puVar1 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 1) = 8;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar1,&PTR_vtable_101117a68,0);
}

