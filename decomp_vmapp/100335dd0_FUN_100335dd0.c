
void FUN_100335dd0(long param_1,ulong param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  
  uVar1 = *(ushort *)(param_2 + 2);
  uVar8 = (uint)uVar1 * 8 + 4;
  if ((param_2 < *(ulong *)(param_1 + 0xbbf8)) || (*(ulong *)(param_1 + 0xbc00) < uVar8 + param_2))
  {
    puVar4 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar4 = param_2;
    *(uint *)(puVar4 + 1) = uVar8;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar4,&PTR_vtable_101117a68,0);
  }
  if (uVar1 != 0) {
    puVar6 = (uint *)(param_2 + 4);
    lVar2 = *(long *)(param_1 + 0xbb88);
    iVar7 = 0;
    do {
      uVar8 = *puVar6;
      for (puVar5 = *(uint **)(lVar2 + 0x8068 +
                              (ulong)((uVar8 >> 0xc ^ uVar8) & 0xfff ^ uVar8 >> 0x18) * 8);
          puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 4)) {
        if (*puVar5 == uVar8) {
          if ((*(long *)(puVar5 + 2) != 0) &&
             (lVar3 = *(long *)(*(long *)(puVar5 + 2) + 8), (*(ushort *)(lVar3 + 0xb0) & 1) != 0)) {
            lVar3 = **(long **)(lVar3 + 0x40);
            if (*(uint *)(lVar3 + 0x24) != puVar6[1]) {
              *(uint *)(lVar3 + 0x24) = puVar6[1];
              *(byte *)(lVar3 + 0x2c) = *(byte *)(lVar3 + 0x2c) | 1;
            }
          }
          break;
        }
      }
      puVar6 = puVar6 + 2;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(uint)uVar1);
  }
  return;
}

