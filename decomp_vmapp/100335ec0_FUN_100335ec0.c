
ulong FUN_100335ec0(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar2 = (ulong)*(ushort *)(param_2 + 2);
  lVar1 = uVar2 * 0x14 + 4;
  if (*(ulong *)(param_1 + 0xbbf8) <= param_2) {
    uVar4 = lVar1 + param_2;
    if (uVar4 <= *(ulong *)(param_1 + 0xbc00)) {
      if (*(ushort *)(param_2 + 2) != 0) {
        puVar5 = (undefined4 *)(param_2 + 8);
        iVar6 = 0;
        do {
          if ((uint)puVar5[-1] < 6) {
            local_48 = *puVar5;
            uStack_44 = puVar5[1];
            uStack_40 = puVar5[2];
            uStack_3c = puVar5[3];
            (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x48))
                      (*(long **)(param_1 + 0xbbb8),puVar5[-1],&local_48);
            uVar2 = (ulong)*(ushort *)(param_2 + 2);
          }
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + 5;
        } while (iVar6 < (int)uVar2);
      }
      return uVar4;
    }
  }
  puVar3 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar3 = param_2;
  *(int *)(puVar3 + 1) = (int)lVar1;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar3,&PTR_vtable_101117a68,0);
}

