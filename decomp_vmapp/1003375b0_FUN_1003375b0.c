
ulong FUN_1003375b0(long param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = param_2 + 4;
  if (*(ushort *)(param_2 + 2) != 0) {
    iVar4 = 0;
    do {
      if ((uVar5 < *(ulong *)(param_1 + 0xbbf8)) || (*(ulong *)(param_1 + 0xbc00) < uVar5 + 8)) {
        puVar2 = (ulong *)___cxa_allocate_exception(0x10);
        *puVar2 = uVar5;
        *(undefined4 *)(puVar2 + 1) = 8;
LAB_100337654:
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(puVar2,&PTR_vtable_101117a68,0);
      }
      uVar3 = (*(uint *)(uVar5 + 4) & 1) * 0x10;
      uVar1 = uVar3 + 0x1c;
      if ((*(uint *)(uVar5 + 4) & 2) == 0) {
        uVar1 = uVar3;
      }
      if (*(ulong *)(param_1 + 0xbc00) < (uVar1 + 8) + uVar5) {
        puVar2 = (ulong *)___cxa_allocate_exception(0x10);
        *puVar2 = uVar5;
        *(uint *)(puVar2 + 1) = uVar1 + 8;
        goto LAB_100337654;
      }
      uVar5 = (ulong)uVar1 + 8 + uVar5;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(ushort *)(param_2 + 2));
  }
  return uVar5;
}

