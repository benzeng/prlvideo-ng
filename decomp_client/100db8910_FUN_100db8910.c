
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100db8910(long param_1,ulong param_2)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined4 *puVar10;
  size_t local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_48 = _DAT_101db3930;
  uStack_40 = _UNK_101db3938;
  local_50 = (param_2 & 0xffffffff) * 0x288;
  local_38 = lVar2;
  pvVar4 = _malloc(local_50);
  uVar9 = 0xfffffff3;
  if (pvVar4 == (void *)0x0) goto LAB_100db8a8b;
  uVar9 = 0;
  iVar3 = _sysctl((int *)&local_48,3,pvVar4,&local_50,(void *)0x0,0);
  if (iVar3 < 0) {
    _free(pvVar4);
    uVar9 = 0xffffffff;
    goto LAB_100db8a8b;
  }
  if (0x287 < local_50) {
    uVar6 = (local_50 >> 3) / 0x51;
    uVar9 = 1;
    if (1 < uVar6) {
      uVar9 = uVar6;
    }
    uVar7 = 0;
    if (uVar9 == 0) {
LAB_100db8a36:
      puVar8 = (undefined4 *)(uVar7 * 0x288 + 0x28 + (long)pvVar4);
      do {
        *(undefined4 *)(param_1 + uVar7 * 4) = *puVar8;
        uVar7 = uVar7 + 1;
        puVar8 = puVar8 + 0xa2;
      } while (uVar7 < uVar6);
    }
    else {
      uVar7 = 0;
      if ((uVar9 & 0x7ffffffffffffe) != 0) {
        puVar10 = (undefined4 *)((long)pvVar4 + 0x2b0);
        puVar8 = (undefined4 *)(param_1 + 4);
        uVar7 = (local_50 >> 3) / 0x51;
        uVar5 = 0;
        if (1 < uVar7) {
          uVar5 = uVar7;
        }
        uVar5 = uVar5 & 0x7ffffffffffffe;
        do {
          uVar1 = *puVar10;
          puVar8[-1] = puVar10[-0xa2];
          *puVar8 = uVar1;
          puVar10 = puVar10 + 0x144;
          puVar8 = puVar8 + 2;
          uVar5 = uVar5 - 2;
          uVar7 = uVar9 & 0x7ffffffffffffe;
        } while (uVar5 != 0);
      }
      if (uVar9 != uVar7) goto LAB_100db8a36;
    }
    uVar9 = 1;
    if (0x50f < local_50) {
      uVar9 = uVar6 & 0xffffffff;
    }
  }
  _free(pvVar4);
LAB_100db8a8b:
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

