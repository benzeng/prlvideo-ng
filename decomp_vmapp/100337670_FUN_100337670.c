
ulong FUN_100337670(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = param_2 + 4;
  if (*(ushort *)(param_2 + 2) != 0) {
    iVar4 = 0;
    do {
      if ((uVar5 < *(ulong *)(param_1 + 0xbbf8)) || (*(ulong *)(param_1 + 0xbc00) < uVar5 + 8)) {
        puVar3 = (ulong *)___cxa_allocate_exception(0x10);
        *puVar3 = uVar5;
        *(undefined4 *)(puVar3 + 1) = 8;
LAB_10033771e:
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(puVar3,&PTR_vtable_101117a68,0);
      }
      uVar2 = (*(uint *)(uVar5 + 4) & 2) << 3 | (int)(*(uint *)(uVar5 + 4) << 0x1f) >> 0x1f & 0xcU;
      uVar1 = uVar2 + 8;
      if (*(ulong *)(param_1 + 0xbc00) < uVar1 + uVar5) {
        puVar3 = (ulong *)___cxa_allocate_exception(0x10);
        *puVar3 = uVar5;
        *(uint *)(puVar3 + 1) = uVar1;
        goto LAB_10033771e;
      }
      uVar5 = (ulong)uVar2 + 8 + uVar5;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(ushort *)(param_2 + 2));
  }
  return uVar5;
}

