
void FUN_100338dc0(long param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(param_2 + 2) * 8 + 4;
  if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) && (uVar3 + param_2 <= *(ulong *)(param_1 + 0xbc00))
     ) {
    uVar2 = (ulong)*(uint *)(param_2 + 4);
    if (uVar2 < 4) {
      *(undefined4 *)(param_1 + 0x164 + uVar2 * 4) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0x174 + uVar2 * 4) = 0x10;
      *(ulong *)(param_1 + 0x188) =
           *(ulong *)(param_1 + 0x188) | *(ulong *)(**(long **)(param_1 + 400) + 0x3010);
    }
    return;
  }
  puVar1 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar1 = param_2;
  *(uint *)(puVar1 + 1) = uVar3;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar1,&PTR_vtable_101117a68,0);
}

