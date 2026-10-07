
ulong FUN_1003379b0(long param_1,ulong param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar4 = (ulong)*(ushort *)(param_2 + 2);
  lVar6 = uVar4 * 0x44 + 4;
  if (*(ulong *)(param_1 + 0xbbf8) <= param_2) {
    uVar7 = lVar6 + param_2;
    if (uVar7 <= *(ulong *)(param_1 + 0xbc00)) {
      if (*(ushort *)(param_2 + 2) != 0) {
        lVar6 = param_2 + 8;
        iVar9 = 0;
        do {
          uVar2 = *(uint *)(lVar6 + -4);
          if ((int)uVar2 < 0x200) {
            uVar3 = 0x100;
            if (uVar2 != 1) {
              uVar3 = uVar2 + 0xfd;
              if (2 < uVar2 - 4) {
                uVar3 = uVar2;
              }
            }
            lVar8 = (ulong)uVar3 * 0x40;
            uStack_40 = *(undefined8 *)(param_1 + 0x2a8 + lVar8);
            local_48 = *(undefined8 *)(param_1 + 0x2a0 + lVar8);
            uStack_50 = *(undefined8 *)(param_1 + 0x298 + lVar8);
            local_58 = *(undefined8 *)(param_1 + 0x290 + lVar8);
            uStack_60 = *(undefined8 *)(param_1 + 0x288 + lVar8);
            local_68 = *(undefined8 *)(param_1 + 0x280 + lVar8);
            local_78 = *(undefined8 *)(param_1 + 0x270 + lVar8);
            uStack_70 = *(undefined8 *)(param_1 + 0x278 + lVar8);
            local_c8 = 0;
            uStack_c0 = 0;
            local_d8 = 0;
            uStack_d0 = 0;
            local_e8 = 0;
            uStack_e0 = 0;
            local_f8 = 0;
            uStack_f0 = 0;
            FUN_10038df90(&local_f8,lVar6);
            FUN_10038de10(&local_b8,&local_78,&local_f8);
            puVar1 = (undefined4 *)(param_1 + 0x270 + lVar8);
            *puVar1 = local_b8;
            puVar1[1] = uStack_b4;
            puVar1[2] = uStack_b0;
            puVar1[3] = uStack_ac;
            puVar1 = (undefined4 *)(param_1 + 0x280 + lVar8);
            *puVar1 = local_a8;
            puVar1[1] = uStack_a4;
            puVar1[2] = uStack_a0;
            puVar1[3] = uStack_9c;
            puVar1 = (undefined4 *)(param_1 + 0x290 + lVar8);
            *puVar1 = local_98;
            puVar1[1] = uStack_94;
            puVar1[2] = uStack_90;
            puVar1[3] = uStack_8c;
            puVar1 = (undefined4 *)(param_1 + 0x2a0 + lVar8);
            *puVar1 = local_88;
            puVar1[1] = uStack_84;
            puVar1[2] = uStack_80;
            puVar1[3] = uStack_7c;
            *(ulong *)(param_1 + 0x188) =
                 *(ulong *)(param_1 + 0x188) | *(ulong *)(**(long **)(param_1 + 400) + 0x3018);
            uVar4 = (ulong)*(ushort *)(param_2 + 2);
          }
          iVar9 = iVar9 + 1;
          lVar6 = lVar6 + 0x44;
        } while (iVar9 < (int)uVar4);
      }
      return uVar7;
    }
  }
  puVar5 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar5 = param_2;
  *(int *)(puVar5 + 1) = (int)lVar6;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar5,&PTR_vtable_101117a68,0);
}

