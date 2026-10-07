
void FUN_100759180(undefined8 param_1,byte param_2,ulong param_3,ulong param_4,ulong param_5,
                  char *param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  size_t sVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_88;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  ulong uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (param_4 != 0) {
    local_88 = -param_3;
    if (!CARRY8(param_3,param_4)) {
      local_88 = param_4;
    }
    if (DAT_1011bf938 != DAT_1011bf930) {
      uVar10 = 0;
      puVar4 = DAT_1011bf938;
      puVar7 = DAT_1011bf930;
      uVar9 = param_3;
      do {
        param_3 = uVar9;
        if (param_2 == (byte)puVar7[uVar10 * 8]) {
          uVar1 = uVar9 + local_88;
          uVar3 = puVar7[uVar10 * 8 + 2];
          uVar2 = puVar7[uVar10 * 8 + 1] + uVar3;
          uVar8 = uVar3 - uVar9;
          if ((((uVar1 < uVar2) || (uVar1 <= uVar3)) || (uVar3 < uVar9)) || (uVar2 <= uVar9)) {
            if ((uVar3 < uVar1 && uVar1 <= uVar2) &&
                (uVar9 < uVar2 && (uVar3 < uVar9 || uVar8 == 0))) goto LAB_1007593da;
            param_3 = uVar2;
            uVar6 = uVar1 - uVar2;
            if ((uVar9 >= uVar2 || uVar3 >= uVar9 && uVar8 != 0) &&
               (param_3 = uVar9, uVar6 = local_88, uVar3 < uVar1 && uVar1 <= uVar2)) {
              uVar6 = uVar8;
            }
            local_88 = uVar6;
            if (uVar6 == 0) goto LAB_1007593da;
          }
          else {
            DAT_1011bf948 = DAT_1011bf948 - puVar7[uVar10 * 8 + 1];
            sVar5 = (long)puVar4 - (long)(puVar7 + uVar10 * 8 + 8);
            _memmove(puVar7 + uVar10 * 8,puVar7 + uVar10 * 8 + 8,sVar5);
            puVar4 = puVar7 + ((sVar5 >> 6) + uVar10) * 8;
            if (DAT_1011bf938 != puVar4) {
              puVar4 = (ulong *)((~((long)DAT_1011bf938 + (-0x40 - (long)puVar4)) &
                                 0xffffffffffffffc0U) + (long)DAT_1011bf938);
              DAT_1011bf938 = puVar4;
            }
            uVar10 = uVar10 - 1;
            puVar7 = DAT_1011bf930;
          }
        }
        uVar10 = uVar10 + 1;
        uVar9 = param_3;
      } while (uVar10 < (ulong)((long)puVar4 - (long)puVar7 >> 6));
    }
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    uStack_70 = local_88;
    local_78 = (ulong)param_2;
    local_68 = param_3;
    uStack_60 = param_5;
    qstrncpy((char *)&uStack_50,param_6,0x14);
    puVar4 = DAT_1011bf938;
    DAT_1011bf948 = DAT_1011bf948 + uStack_70;
    if (DAT_1011bf938 == DAT_1011bf940) {
      FUN_10075a980(&DAT_1011bf930,&local_78);
    }
    else {
      DAT_1011bf938[7] = uStack_40;
      puVar4[6] = local_48;
      puVar4[5] = uStack_50;
      puVar4[4] = local_58;
      puVar4[3] = uStack_60;
      puVar4[2] = local_68;
      puVar4[1] = uStack_70;
      *puVar4 = local_78;
      DAT_1011bf938 = DAT_1011bf938 + 8;
    }
  }
LAB_1007593da:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

