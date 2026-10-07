
ulong FUN_1003388e0(long param_1,ulong param_2)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = (ulong)*(ushort *)(param_2 + 2) * 0x34 + 4;
  if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) &&
     (uVar4 = lVar3 + param_2, uVar4 <= *(ulong *)(param_1 + 0xbc00))) {
    if (*(ushort *)(param_2 + 2) != 0) {
      lVar3 = param_2 + 4;
      uVar2 = 0;
      do {
        FUN_10033c800(param_1,lVar3,0);
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 0x34;
      } while (uVar2 < *(ushort *)(param_2 + 2));
    }
    return uVar4;
  }
  puVar1 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar1 = param_2;
  *(int *)(puVar1 + 1) = (int)lVar3;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar1,&PTR_vtable_101117a68,0);
}

