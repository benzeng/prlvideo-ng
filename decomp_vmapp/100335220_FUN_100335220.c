
ulong FUN_100335220(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  
  uVar2 = (ulong)*(ushort *)(param_2 + 2);
  lVar6 = uVar2 * 0x44 + 4;
  if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) &&
     (uVar7 = lVar6 + param_2, uVar7 <= *(ulong *)(param_1 + 0xbc00))) {
    if (*(ushort *)(param_2 + 2) != 0) {
      lVar6 = param_2 + 8;
      iVar5 = 0;
      do {
        iVar1 = *(int *)(lVar6 + -4);
        if (iVar1 < 0x200) {
          iVar4 = 0x100;
          if ((iVar1 != 1) && (iVar4 = iVar1 + 0xfd, 2 < iVar1 - 4U)) {
            iVar4 = iVar1;
          }
          (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x50))
                    (*(long **)(param_1 + 0xbbb8),iVar4,lVar6);
          uVar2 = (ulong)*(ushort *)(param_2 + 2);
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 0x44;
      } while (iVar5 < (int)uVar2);
    }
    return uVar7;
  }
  puVar3 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar3 = param_2;
  *(int *)(puVar3 + 1) = (int)lVar6;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar3,&PTR_vtable_101117a68,0);
}

