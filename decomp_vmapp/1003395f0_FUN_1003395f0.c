
ulong FUN_1003395f0(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong *puVar6;
  uint *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar5 = (ulong)*(ushort *)(param_2 + 2);
  lVar9 = uVar5 * 0x34 + 4;
  if (param_2 < *(ulong *)(param_1 + 0xbbf8)) {
    puVar6 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar6 = param_2;
  }
  else {
    uVar10 = lVar9 + param_2;
    if (uVar10 <= *(ulong *)(param_1 + 0xbc00)) {
      if (*(ushort *)(param_2 + 2) != 0) {
        lVar9 = param_2 + 4;
        iVar8 = 0;
        do {
          uVar1 = *(uint *)(lVar9 + 0x18);
          for (puVar7 = *(uint **)(*(long *)(param_1 + 0xbb88) + 0x8068 +
                                  (ulong)((uVar1 >> 0xc ^ uVar1) & 0xfff ^ uVar1 >> 0x18) * 8);
              puVar7 != (uint *)0x0; puVar7 = *(uint **)(puVar7 + 4)) {
            if (*puVar7 == uVar1) {
              lVar2 = *(long *)(puVar7 + 2);
              if (lVar2 != 0) {
                uVar3 = *(undefined8 *)(lVar2 + 8);
                uVar4 = FUN_10032dee0(uVar3,*(undefined4 *)(lVar2 + 4));
                local_48 = *(undefined4 *)(lVar9 + 0x1c);
                uStack_44 = *(undefined4 *)(lVar9 + 0x20);
                uStack_40 = *(undefined4 *)(lVar9 + 0x24);
                uStack_3c = *(undefined4 *)(lVar9 + 0x28);
                local_38 = 0;
                local_34 = 1;
                FUN_10035e0e0(*(undefined8 *)(param_1 + 48000),uVar3,&local_48,uVar4,
                              *(undefined4 *)(lVar9 + 0x2c));
                lVar9 = lVar9 + 0x34;
                uVar5 = (ulong)*(ushort *)(param_2 + 2);
              }
              break;
            }
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)uVar5);
      }
      return uVar10;
    }
    puVar6 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar6 = param_2;
  }
  *(int *)(puVar6 + 1) = (int)lVar9;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar6,&PTR_vtable_101117a68,0);
}

