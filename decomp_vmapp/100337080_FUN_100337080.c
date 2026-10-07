
ulong FUN_100337080(long param_1,ulong param_2)

{
  undefined4 uVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = (ulong)*(ushort *)(param_2 + 2) * 4 + 4;
  if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) &&
     (uVar4 = lVar3 + param_2, uVar4 <= *(ulong *)(param_1 + 0xbc00))) {
    if (*(ushort *)(param_2 + 2) != 0) {
      lVar3 = 0;
      do {
        uVar1 = *(undefined4 *)(param_2 + 4 + lVar3 * 4);
        FUN_1003625d0(*(undefined8 *)(param_1 + 48000),uVar1);
        FUN_10033c670(param_1,uVar1);
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < (int)(uint)*(ushort *)(param_2 + 2));
    }
    return uVar4;
  }
  puVar2 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar2 = param_2;
  *(int *)(puVar2 + 1) = (int)lVar3;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar2,&PTR_vtable_101117a68,0);
}

