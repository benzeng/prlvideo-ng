
void FUN_100336c80(long param_1,ulong param_2)

{
  undefined4 uVar1;
  ulong *puVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(param_2 + 2) * 8 + 4;
  if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) && (uVar3 + param_2 <= *(ulong *)(param_1 + 0xbc00))
     ) {
    uVar1 = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    return;
  }
  puVar2 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar2 = param_2;
  *(uint *)(puVar2 + 1) = uVar3;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar2,&PTR_vtable_101117a68,0);
}

