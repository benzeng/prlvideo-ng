
ulong FUN_100335980(long param_1,ulong param_2)

{
  ushort uVar1;
  uint uVar2;
  ulong *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  ulong uVar8;
  
  uVar1 = *(ushort *)(param_2 + 2);
  uVar2 = (uint)uVar1;
  uVar5 = (uint)uVar1 * 8 + 4;
  if ((param_2 < *(ulong *)(param_1 + 0xbbf8)) ||
     (uVar8 = uVar5 + param_2, *(ulong *)(param_1 + 0xbc00) < uVar8)) {
    puVar3 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar3 = param_2;
    *(uint *)(puVar3 + 1) = uVar5;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar3,&PTR_vtable_101117a68,0);
  }
  if (uVar1 != 0) {
    puVar6 = (uint *)(param_2 + 4);
    iVar7 = 0;
    do {
      uVar5 = *puVar6;
      for (puVar4 = *(uint **)(*(long *)(param_1 + 0xbb88) + 0x8068 +
                              (ulong)((uVar5 >> 0xc ^ uVar5) & 0xfff ^ uVar5 >> 0x18) * 8);
          puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 4)) {
        if (*puVar4 == uVar5) {
          if (*(long *)(puVar4 + 2) != 0) {
            if ((*(ushort *)(*(long *)(*(long *)(puVar4 + 2) + 8) + 0xb0) & 1) != 0) {
              FUN_100362610((float)puVar6[1] * DAT_100b3f708,*(undefined8 *)(param_1 + 48000));
              uVar2 = (uint)*(ushort *)(param_2 + 2);
            }
          }
          break;
        }
      }
      puVar6 = puVar6 + 2;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)uVar2);
  }
  return uVar8;
}

