
ulong FUN_1003398c0(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  undefined4 uVar6;
  ulong *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint *local_38;
  
  uVar9 = (uint)*(ushort *)(param_2 + 2) * 0x28 | 4;
  if ((param_2 < *(ulong *)(param_1 + 0xbbf8)) ||
     (uVar11 = uVar9 + param_2, *(ulong *)(param_1 + 0xbc00) < uVar11)) {
    puVar7 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar7 = param_2;
    *(uint *)(puVar7 + 1) = uVar9;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar7,&PTR_vtable_101117a68,0);
  }
  uVar9 = *(uint *)(param_2 + 4);
  puVar8 = *(uint **)(*(long *)(param_1 + 0xbb88) + 0x8068 +
                     (ulong)((uVar9 >> 0xc ^ uVar9) & 0xfff ^ uVar9 >> 0x18) * 8);
  while( true ) {
    if (puVar8 == (uint *)0x0) {
      return uVar11;
    }
    if (*puVar8 == uVar9) break;
    puVar8 = *(uint **)(puVar8 + 4);
  }
  lVar3 = *(long *)(puVar8 + 2);
  if (lVar3 == 0) {
    return uVar11;
  }
  lVar4 = *(long *)(lVar3 + 8);
  if ((((int)((ulong)(*(long *)(lVar4 + 0x48) - *(long *)(lVar4 + 0x40)) >> 3) != 0) &&
      ((*(byte *)(param_2 + 0x10) & 2) == 0)) && ((*(ushort *)(lVar4 + 0xb0) & 0x40) == 0)) {
    uVar6 = FUN_10032dee0(lVar4,*(undefined4 *)(lVar3 + 4));
    local_48 = *(undefined4 *)(param_2 + 0x24);
    local_58 = *(undefined4 *)(param_2 + 0x14);
    uStack_54 = *(undefined4 *)(param_2 + 0x18);
    uStack_50 = *(undefined4 *)(param_2 + 0x1c);
    uStack_4c = *(undefined4 *)(param_2 + 0x20);
    local_44 = *(undefined4 *)(param_2 + 0x28);
    FUN_10035e890(*(undefined8 *)(param_1 + 48000),lVar4,&local_58,uVar6,
                  *(undefined4 *)(param_2 + 0xc));
    uVar9 = *(uint *)(param_2 + 4);
  }
  uVar2 = *(uint *)(param_2 + 8);
  if (uVar9 == uVar2) {
    return uVar11;
  }
  lVar3 = *(long *)(param_1 + 0xbb88);
  puVar1 = (undefined8 *)(lVar3 + 0x8058);
  puVar8 = (uint *)(lVar3 + 0x8068 + (ulong)((uVar9 >> 0xc ^ uVar9) & 0xfff ^ uVar9 >> 0x18) * 8);
  do {
    puVar10 = puVar8;
    puVar5 = *(uint **)puVar10;
    if (puVar5 == (uint *)0x0) {
      return uVar11;
    }
    puVar8 = puVar5 + 4;
  } while (*puVar5 != uVar9);
  *(undefined8 *)puVar10 = *(undefined8 *)(puVar5 + 4);
  local_38 = *(uint **)(puVar5 + 2);
  *(undefined8 *)(puVar5 + 4) = *puVar1;
  *puVar1 = puVar5;
  if (local_38 != (uint *)0x0) {
    uVar9 = 0;
    for (puVar8 = *(uint **)(lVar3 + 0x58 +
                            (ulong)((uVar2 >> 0xc ^ uVar2) & 0xfff ^ uVar2 >> 0x18) * 8);
        puVar8 != (uint *)0x0; puVar8 = *(uint **)(puVar8 + 2)) {
      if (*puVar8 == uVar2) {
        uVar9 = puVar8[1];
        break;
      }
    }
    *(uint *)(*(long *)(*(long *)(local_38 + 2) + 0x28) + (ulong)local_38[1] * 0xc) = uVar9;
    *local_38 = uVar2;
    FUN_10035b3c0(puVar1,uVar2,&local_38);
  }
  return uVar11;
}

