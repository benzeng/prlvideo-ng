
ulong FUN_1003349a0(long param_1,ulong param_2)

{
  ushort uVar1;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar1 = *(ushort *)(param_2 + 2);
  uVar3 = (uint)uVar1 * 8 + 4;
  if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) &&
     (uVar4 = uVar3 + param_2, uVar4 <= *(ulong *)(param_1 + 0xbc00))) {
    uVar3 = *(uint *)(param_1 + 0x160);
    if (uVar3 < 0x80000) {
      FUN_10033a340(param_1,param_2 + 4);
      uVar3 = *(uint *)(param_1 + 0x160);
      uVar1 = *(ushort *)(param_2 + 2);
    }
    if (uVar3 < 0x90000) {
      FUN_10033a530();
    }
    else {
      FUN_10033a670(param_1,param_2 + 4,uVar1);
    }
    return uVar4;
  }
  puVar2 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar2 = param_2;
  *(uint *)(puVar2 + 1) = uVar3;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar2,&PTR_vtable_101117a68,0);
}

