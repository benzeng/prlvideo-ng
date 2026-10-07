
void FUN_100338820(long param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  uVar1 = *(ushort *)((long)param_2 + 2);
  uVar9 = (uint)uVar1 << 4 | 4;
  if ((*(undefined4 **)(param_1 + 0xbbf8) <= param_2) &&
     ((ulong)uVar9 + (long)param_2 <= *(ulong *)(param_1 + 0xbc00))) {
    if (uVar1 != 0) {
      lVar8 = 0;
      do {
        uVar9 = param_2[1];
        uVar7 = (ulong)uVar9;
        if (uVar7 < 0x10) {
          iVar2 = param_2[2];
          uVar3 = param_2[3];
          uVar4 = param_2[4];
          iVar5 = *(int *)(param_1 + 0x30 + uVar7 * 0x14);
          *(int *)(param_1 + 0x30 + uVar7 * 0x14) = iVar2;
          *(undefined4 *)(param_1 + 0x24 + uVar7 * 0x14) = uVar4;
          *(undefined4 *)(param_1 + 0x20 + uVar7 * 0x14) = uVar3;
          *(undefined1 *)(param_1 + 0x2c + uVar7 * 0x14) = 0;
          if (iVar5 != iVar2) {
            *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 1 << ((byte)uVar9 & 0x1f);
          }
        }
        lVar8 = lVar8 + 1;
        param_2 = param_2 + 4;
      } while (lVar8 < (long)(ulong)uVar1);
    }
    return;
  }
  puVar6 = (undefined8 *)___cxa_allocate_exception(0x10);
  *puVar6 = param_2;
  *(uint *)(puVar6 + 1) = uVar9;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar6,&PTR_vtable_101117a68,0);
}

