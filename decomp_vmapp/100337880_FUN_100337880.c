
ulong FUN_100337880(long param_1,ulong param_2)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  ulong uVar9;
  
  uVar1 = *(ushort *)(param_2 + 2);
  uVar3 = (uint)uVar1;
  uVar6 = (uint)uVar1 * 0x18 | 4;
  if ((param_2 < *(ulong *)(param_1 + 0xbbf8)) ||
     (uVar9 = uVar6 + param_2, *(ulong *)(param_1 + 0xbc00) < uVar9)) {
    puVar4 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar4 = param_2;
    *(uint *)(puVar4 + 1) = uVar6;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar4,&PTR_vtable_101117a68,0);
  }
  if (uVar1 != 0) {
    puVar7 = (uint *)(param_2 + 4);
    iVar8 = 0;
    do {
      uVar6 = *puVar7;
      for (puVar5 = *(uint **)(*(long *)(param_1 + 0xbb88) + 0x8068 +
                              (ulong)((uVar6 >> 0xc ^ uVar6) & 0xfff ^ uVar6 >> 0x18) * 8);
          puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 4)) {
        if (*puVar5 == uVar6) {
          lVar2 = *(long *)(puVar5 + 2);
          if (lVar2 != 0) {
            (**(code **)(**(long **)(param_1 + 48000) + 0x20))
                      (*(long **)(param_1 + 48000),*(long *)(lVar2 + 8),
                       *(int *)(*(long *)(*(long *)(lVar2 + 8) + 0x28) +
                               (ulong)*(uint *)(lVar2 + 4) * 0xc) + puVar7[2],puVar7[2],puVar7[4],
                       puVar7[5]);
            uVar3 = (uint)*(ushort *)(param_2 + 2);
          }
          break;
        }
      }
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 6;
    } while (iVar8 < (int)uVar3);
  }
  return uVar9;
}

