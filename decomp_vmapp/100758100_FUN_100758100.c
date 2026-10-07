
undefined8 FUN_100758100(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  size_t sVar8;
  long lVar9;
  ulong *puVar10;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  ulong uStack_40;
  long local_38;
  
  lVar4 = DAT_1011bf930;
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar9 = param_2 * 0x40;
  uVar6 = (*(long *)(DAT_1011bf930 + 8 + lVar9) - param_3) - param_4;
  local_38 = lVar3;
  if (uVar6 != 0) {
    local_68 = param_4 + param_3 + *(long *)(DAT_1011bf930 + 0x10 + lVar9);
    uStack_60 = *(ulong *)(DAT_1011bf930 + 0x18 + lVar9);
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_78 = (ulong)*(byte *)(DAT_1011bf930 + lVar9);
    uStack_70 = uVar6;
    qstrncpy((char *)&uStack_50,(char *)(DAT_1011bf930 + 0x28 + lVar9),0x14);
    puVar10 = DAT_1011bf938;
    DAT_1011bf948 = DAT_1011bf948 + uStack_70;
    if (DAT_1011bf938 == DAT_1011bf940) {
      FUN_10075a980(&DAT_1011bf930,&local_78);
    }
    else {
      DAT_1011bf938[7] = uStack_40;
      puVar10[6] = local_48;
      puVar10[5] = uStack_50;
      puVar10[4] = local_58;
      puVar10[3] = uStack_60;
      puVar10[2] = local_68;
      puVar10[1] = uStack_70;
      *puVar10 = local_78;
      DAT_1011bf938 = DAT_1011bf938 + 8;
    }
  }
  lVar5 = DAT_1011bf930;
  if (param_3 == 0) {
    DAT_1011bf948 = DAT_1011bf948 - *(long *)(DAT_1011bf930 + 8 + lVar9);
    pvVar2 = (void *)(DAT_1011bf930 + 0x40 + lVar9);
    sVar8 = (long)DAT_1011bf938 - (long)pvVar2;
    _memmove((void *)(DAT_1011bf930 + lVar9),pvVar2,sVar8);
    puVar10 = (ulong *)(((sVar8 >> 6) + param_2) * 0x40 + lVar5);
    if (DAT_1011bf938 != puVar10) {
      DAT_1011bf938 =
           (ulong *)((~((long)DAT_1011bf938 + (-0x40 - (long)puVar10)) & 0xffffffffffffffc0U) +
                    (long)DAT_1011bf938);
    }
    uVar7 = 0;
  }
  else {
    plVar1 = (long *)(lVar4 + 8 + lVar9);
    *plVar1 = param_3;
    uVar7 = CONCAT71((int7)((ulong)plVar1 >> 8),1);
  }
  if (lVar3 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

