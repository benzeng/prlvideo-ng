
ulong FUN_100339ab0(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  ulong *puVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar7 = (uint)*(ushort *)(param_2 + 2) << 5 | 4;
  if ((param_2 < *(ulong *)(param_1 + 0xbbf8)) ||
     (uVar8 = uVar7 + param_2, *(ulong *)(param_1 + 0xbc00) < uVar8)) {
    puVar5 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar5 = param_2;
    *(uint *)(puVar5 + 1) = uVar7;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar5,&PTR_vtable_101117a68,0);
  }
  uVar7 = *(uint *)(param_2 + 4);
  puVar6 = *(uint **)(*(long *)(param_1 + 0xbb88) + 0x8068 +
                     (ulong)((uVar7 >> 0xc ^ uVar7) & 0xfff ^ uVar7 >> 0x18) * 8);
  while( true ) {
    if (puVar6 == (uint *)0x0) {
      return uVar8;
    }
    if (*puVar6 == uVar7) break;
    puVar6 = *(uint **)(puVar6 + 4);
  }
  lVar1 = *(long *)(puVar6 + 2);
  if (lVar1 == 0) {
    return uVar8;
  }
  lVar2 = *(long *)(lVar1 + 8);
  if ((int)((ulong)(*(long *)(lVar2 + 0x48) - *(long *)(lVar2 + 0x40)) >> 3) == 0) {
    return uVar8;
  }
  if (*(int *)(lVar2 + 8) == 0x1b) {
    return uVar8;
  }
  uVar3 = FUN_10032dee0(lVar2,*(undefined4 *)(lVar1 + 4));
  local_38 = *(undefined4 *)(param_2 + 0x1c);
  local_48 = *(undefined4 *)(param_2 + 0xc);
  uStack_44 = *(undefined4 *)(param_2 + 0x10);
  uStack_40 = *(undefined4 *)(param_2 + 0x14);
  uStack_3c = *(undefined4 *)(param_2 + 0x18);
  local_34 = *(undefined4 *)(param_2 + 0x20);
  FUN_10035e0e0(*(undefined8 *)(param_1 + 48000),lVar2,&local_48,uVar3,*(undefined4 *)(param_2 + 8))
  ;
  iVar4 = FUN_10035db70(*(undefined8 *)(param_1 + 48000),lVar2,*(undefined4 *)(lVar1 + 4));
  if (iVar4 == -1) {
    return uVar8;
  }
  local_60 = 1;
  local_50 = 0;
  local_5c = 0;
  local_58 = 0x8e;
  FUN_10035e300(*(undefined8 *)(param_1 + 48000),lVar2,*(undefined4 *)(lVar1 + 4),&local_48,1,0,
                iVar4,&local_60);
  return uVar8;
}

