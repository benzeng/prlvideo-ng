
undefined8 FUN_100c73ea0(long param_1,void *param_2,void *param_3,size_t param_4)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  byte bVar10;
  undefined1 local_48 [16];
  long local_38;
  
  bVar10 = 0;
  lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
  lVar2 = *(long *)(param_1 + 0x78);
  sVar5 = *(size_t *)(lVar2 + 0x218);
  uVar9 = 0;
  local_38 = lVar4;
  if ((sVar5 + 0x10 != param_4) && (sVar5 != 0xffffffffffffffff)) goto LAB_100c74067;
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_100c16050(lVar2,param_4,param_3,param_2);
    puVar1 = (undefined4 *)(lVar2 + 0x1bc);
    if (sVar5 == 0xffffffffffffffff) {
      FUN_100bf9460(puVar1,param_2,param_4);
      goto LAB_100c7404c;
    }
    FUN_100bf9460(puVar1,param_2,sVar5);
    FUN_100bf95d0(local_48,puVar1);
    puVar7 = (undefined4 *)(lVar2 + 0x160);
    puVar8 = puVar1;
    for (lVar4 = 0x17; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + (ulong)bVar10 * -2 + 1;
      puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
    }
    FUN_100bf9460(puVar1,local_48,0x10);
    FUN_100bf95d0(local_48,puVar1);
    iVar3 = FUN_100bf2f90((long)param_2 + sVar5,local_48,0x10);
    lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
    if (iVar3 != 0) goto LAB_100c74067;
  }
  else {
    if (sVar5 == 0xffffffffffffffff) {
      sVar5 = param_4;
    }
    puVar1 = (undefined4 *)(lVar2 + 0x1bc);
    FUN_100bf9460(puVar1,param_3,sVar5);
    if (sVar5 == param_4) {
      FUN_100c16050(lVar2,param_4,param_3,param_2);
    }
    else {
      if (param_3 != param_2) {
        _memcpy(param_2,param_3,sVar5);
      }
      lVar6 = sVar5 + (long)param_2;
      FUN_100bf95d0(lVar6,puVar1);
      puVar7 = (undefined4 *)(lVar2 + 0x160);
      puVar8 = puVar1;
      for (lVar4 = 0x17; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (ulong)bVar10 * -2 + 1;
        puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
      }
      FUN_100bf9460(puVar1,lVar6,0x10);
      FUN_100bf95d0(lVar6,puVar1);
      FUN_100c16050(lVar2,param_4,param_2,param_2);
    }
LAB_100c7404c:
    lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  *(undefined8 *)(lVar2 + 0x218) = 0xffffffffffffffff;
  uVar9 = 1;
LAB_100c74067:
  if (lVar4 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

