
void FUN_100336a70(long param_1,undefined4 *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  uVar1 = *(ushort *)((long)param_2 + 2);
  uVar9 = (ulong)uVar1;
  if ((param_2 < *(undefined4 **)(param_1 + 0xbbf8)) ||
     (*(undefined4 **)(param_1 + 0xbc00) < param_2 + uVar9 * 3 + 1)) {
    puVar6 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar6 = (ulong)param_2;
    *(uint *)(puVar6 + 1) = (uint)uVar1 * 0xc + 4;
  }
  else {
    if ((*(undefined4 **)(param_1 + 0xbbf8) <= param_2 + 1) &&
       ((undefined4 *)((uVar9 * 8 | 4) + (long)param_2) <= *(undefined4 **)(param_1 + 0xbc00))) {
      if (uVar1 != 0) {
        lVar8 = 0;
        do {
          uVar2 = param_2[1];
          uVar7 = (ulong)uVar2;
          if (uVar7 < 0x10) {
            iVar3 = param_2[2];
            uVar4 = param_2[3];
            iVar5 = *(int *)(param_1 + 0x30 + uVar7 * 0x14);
            *(int *)(param_1 + 0x30 + uVar7 * 0x14) = iVar3;
            *(undefined4 *)(param_1 + 0x24 + uVar7 * 0x14) = uVar4;
            *(undefined4 *)(param_1 + 0x20 + uVar7 * 0x14) = 0;
            *(undefined1 *)(param_1 + 0x2c + uVar7 * 0x14) = 0;
            if (iVar5 != iVar3) {
              *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 1 << ((byte)uVar2 & 0x1f);
            }
          }
          lVar8 = lVar8 + 1;
          param_2 = param_2 + 3;
        } while (lVar8 < (long)uVar9);
      }
      return;
    }
    puVar6 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar6 = (ulong)(param_2 + 1);
    *(int *)(puVar6 + 1) = (int)(uVar9 * 8);
  }
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar6,&PTR_vtable_101117a68,0);
}

