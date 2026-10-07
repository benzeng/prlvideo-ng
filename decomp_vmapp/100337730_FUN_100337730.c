
ulong FUN_100337730(long param_1,ulong param_2)

{
  ushort uVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  
  uVar1 = *(ushort *)(param_2 + 2);
  uVar8 = (uint)uVar1;
  uVar5 = (uint)uVar1 * 0x30 | 4;
  if ((param_2 < *(ulong *)(param_1 + 0xbbf8)) ||
     (uVar2 = uVar5 + param_2, *(ulong *)(param_1 + 0xbc00) < uVar2)) {
    puVar3 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar3 = param_2;
    *(uint *)(puVar3 + 1) = uVar5;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar3,&PTR_vtable_101117a68,0);
  }
  if (uVar1 != 0) {
    puVar6 = (uint *)(param_2 + 4);
    iVar9 = 0;
    do {
      uVar5 = *puVar6;
      for (puVar7 = *(uint **)(*(long *)(param_1 + 0xbb88) + 0x8068 +
                              (ulong)((uVar5 >> 0xc ^ uVar5) & 0xfff ^ uVar5 >> 0x18) * 8);
          lVar4 = 0, puVar7 != (uint *)0x0; puVar7 = *(uint **)(puVar7 + 4)) {
        if (*puVar7 == uVar5) {
          lVar4 = *(long *)(puVar7 + 2);
          break;
        }
      }
      local_48 = puVar6[2];
      local_44 = puVar6[3];
      local_38 = puVar6[4];
      local_40 = (puVar6[7] + local_48) - puVar6[5];
      local_3c = (puVar6[8] + local_44) - puVar6[6];
      local_34 = (puVar6[10] + local_38) - puVar6[9];
      if (lVar4 != 0) {
        FUN_10035e790(*(undefined8 *)(param_1 + 48000),*(undefined8 *)(lVar4 + 8),&local_48,0);
        uVar8 = (uint)*(ushort *)(param_2 + 2);
      }
      puVar6 = puVar6 + 0xc;
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)uVar8);
  }
  return uVar2;
}

