
ulong FUN_100338980(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong *puVar6;
  uint *puVar7;
  uint uVar8;
  ulong uVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar8 = (uint)*(ushort *)(param_2 + 2) * 0x18 | 4;
  if ((param_2 < *(ulong *)(param_1 + 0xbbf8)) ||
     (uVar9 = uVar8 + param_2, *(ulong *)(param_1 + 0xbc00) < uVar9)) {
    puVar6 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar6 = param_2;
    *(uint *)(puVar6 + 1) = uVar8;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar6,&PTR_vtable_101117a68,0);
  }
  uVar8 = *(uint *)(param_2 + 4);
  puVar7 = *(uint **)(*(long *)(param_1 + 0xbb88) + 0x8068 +
                     (ulong)((uVar8 >> 0xc ^ uVar8) & 0xfff ^ uVar8 >> 0x18) * 8);
  while( true ) {
    if (puVar7 == (uint *)0x0) {
      return uVar9;
    }
    if (*puVar7 == uVar8) break;
    puVar7 = *(uint **)(puVar7 + 4);
  }
  lVar1 = *(long *)(puVar7 + 2);
  if (lVar1 == 0) {
    return uVar9;
  }
  uVar2 = *(undefined8 *)(param_1 + 48000);
  uVar3 = *(undefined8 *)(lVar1 + 8);
  local_48 = *(undefined4 *)(param_2 + 8);
  uStack_44 = *(undefined4 *)(param_2 + 0xc);
  uStack_40 = *(undefined4 *)(param_2 + 0x10);
  uStack_3c = *(undefined4 *)(param_2 + 0x14);
  uVar4 = FUN_10032dee0(uVar3,*(undefined4 *)(lVar1 + 4));
  uVar5 = FUN_10032df00(*(undefined8 *)(lVar1 + 8),*(undefined4 *)(lVar1 + 4));
  FUN_10035dc00(uVar2,uVar3,&local_48,uVar4,uVar5,0,*(undefined4 *)(param_2 + 0x18));
  return uVar9;
}

