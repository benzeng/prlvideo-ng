
ulong FUN_100334730(long param_1,ulong param_2)

{
  ulong *puVar1;
  
  if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) && (param_2 + 6 <= *(ulong *)(param_1 + 0xbc00))) {
    *(undefined4 *)(param_1 + 0xbb74) = 6;
    FUN_1003611c0(*(undefined8 *)(param_1 + 48000),6,param_1,*(undefined2 *)(param_2 + 2),
                  *(undefined2 *)(param_2 + 4));
    return param_2 + 6;
  }
  puVar1 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 1) = 6;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar1,&PTR_vtable_101117a68,0);
}

