
void FUN_100335ab0(long param_1,ulong param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(param_2 + 2) * 8 + 4;
  if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) && (uVar4 + param_2 <= *(ulong *)(param_1 + 0xbc00))
     ) {
    *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x174) = 0x10;
    lVar1 = **(long **)(param_1 + 400);
    uVar3 = *(ulong *)(param_1 + 0x188) | *(ulong *)(lVar1 + 0x3010);
    *(ulong *)(param_1 + 0x188) = uVar3;
    *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 8);
    *(ulong *)(param_1 + 0x188) = uVar3 | *(ulong *)(lVar1 + 0x3010);
    return;
  }
  puVar2 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar2 = param_2;
  *(uint *)(puVar2 + 1) = uVar4;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar2,&PTR_vtable_101117a68,0);
}

