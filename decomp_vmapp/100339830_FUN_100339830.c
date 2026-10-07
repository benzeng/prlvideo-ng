
void FUN_100339830(long param_1,ulong param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  lVar1 = (ulong)*(ushort *)(param_2 + 2) * 0xc + 4;
  if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) && (lVar1 + param_2 <= *(ulong *)(param_1 + 0xbc00))
     ) {
    uVar4 = (ulong)*(uint *)(param_2 + 8);
    if (uVar4 < 4) {
      uVar2 = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)(param_1 + 0x164 + uVar4 * 4) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(param_1 + 0x174 + uVar4 * 4) = uVar2;
      *(ulong *)(param_1 + 0x188) =
           *(ulong *)(param_1 + 0x188) | *(ulong *)(**(long **)(param_1 + 400) + 0x3010);
    }
    return;
  }
  puVar3 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar3 = param_2;
  *(int *)(puVar3 + 1) = (int)lVar1;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar3,&PTR_vtable_101117a68,0);
}

