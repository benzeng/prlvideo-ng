
undefined8 FUN_100c46610(long param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  uint local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  uint local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  uint local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  uint local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  
  FUN_100c27c60(param_4);
  puVar4 = (undefined8 *)FUN_100c27e20(param_4);
  uVar5 = FUN_100c27e20(param_4);
  lVar6 = FUN_100c27e20(param_4);
  uVar2 = *(uint *)(param_3 + 0x74);
  if ((uVar2 & 0x100) == 0) {
    puVar9 = &local_a8;
    FUN_100c26700(puVar9);
    puVar11 = *(undefined8 **)(param_3 + 0x38);
    local_a8 = *puVar11;
    local_a0 = *(undefined4 *)(puVar11 + 1);
    local_9c = *(undefined4 *)((long)puVar11 + 0xc);
    local_98 = *(undefined4 *)(puVar11 + 2);
    local_94 = *(uint *)((long)puVar11 + 0x14) & 0xfffffff8 | local_94 & 1 | 6;
    puVar11 = &local_c0;
    FUN_100c26700(puVar11);
    puVar1 = *(undefined8 **)(param_3 + 0x40);
    local_c0 = *puVar1;
    local_b8 = *(undefined4 *)(puVar1 + 1);
    local_b4 = *(undefined4 *)((long)puVar1 + 0xc);
    local_b0 = *(undefined4 *)(puVar1 + 2);
    local_ac = *(uint *)((long)puVar1 + 0x14) & 0xfffffff8 | local_ac & 1 | 6;
    uVar2 = *(uint *)(param_3 + 0x74);
  }
  else {
    puVar9 = *(undefined8 **)(param_3 + 0x38);
    puVar11 = *(undefined8 **)(param_3 + 0x40);
  }
  if ((uVar2 & 4) != 0) {
    lVar7 = FUN_100c33470(param_3 + 0x80,9,puVar9,param_4);
    uVar10 = 0;
    if (lVar7 == 0) goto LAB_100c46b80;
    lVar7 = FUN_100c33470(param_3 + 0x88,9,puVar11,param_4);
    if (lVar7 == 0) goto LAB_100c46b80;
    uVar2 = *(uint *)(param_3 + 0x74);
  }
  if ((uVar2 & 2) != 0) {
    lVar7 = FUN_100c33470(param_3 + 0x78,9,*(undefined8 *)(param_3 + 0x20),param_4);
    uVar10 = 0;
    if (lVar7 == 0) goto LAB_100c46b80;
    uVar2 = *(uint *)(param_3 + 0x74);
  }
  if ((uVar2 & 0x100) == 0) {
    local_78 = *param_2;
    local_70 = *(undefined4 *)(param_2 + 1);
    local_6c = *(undefined4 *)((long)param_2 + 0xc);
    local_68 = *(undefined4 *)(param_2 + 2);
    local_64 = *(uint *)((long)param_2 + 0x14) & 0xfffffff8 | local_64 & 1 | 6;
    uVar8 = *(undefined8 *)(param_3 + 0x40);
    puVar9 = &local_78;
  }
  else {
    uVar8 = *(undefined8 *)(param_3 + 0x40);
    puVar9 = param_2;
  }
  uVar10 = 0;
  iVar3 = FUN_100c23170(0,puVar4,puVar9,uVar8,param_4);
  if (iVar3 != 0) {
    if ((*(byte *)(param_3 + 0x75) & 1) == 0) {
      puVar9 = *(undefined8 **)(param_3 + 0x50);
      local_60 = *puVar9;
      local_58 = *(undefined4 *)(puVar9 + 1);
      local_54 = *(undefined4 *)((long)puVar9 + 0xc);
      local_50 = *(undefined4 *)(puVar9 + 2);
      local_4c = *(uint *)((long)puVar9 + 0x14) & 0xfffffff8 | local_4c & 1 | 6;
      puVar9 = &local_60;
    }
    else {
      puVar9 = *(undefined8 **)(param_3 + 0x50);
    }
    iVar3 = (**(code **)(*(long *)(param_3 + 0x10) + 0x30))
                      (uVar5,puVar4,puVar9,*(undefined8 *)(param_3 + 0x40),param_4,
                       *(undefined8 *)(param_3 + 0x88));
    if (iVar3 == 0) {
      uVar10 = 0;
    }
    else {
      if ((*(byte *)(param_3 + 0x75) & 1) == 0) {
        local_78 = *param_2;
        local_70 = *(undefined4 *)(param_2 + 1);
        local_6c = *(undefined4 *)((long)param_2 + 0xc);
        local_68 = *(undefined4 *)(param_2 + 2);
        local_64 = *(uint *)((long)param_2 + 0x14) & 0xfffffff8 | local_64 & 1 | 6;
        uVar8 = *(undefined8 *)(param_3 + 0x38);
        puVar9 = &local_78;
      }
      else {
        uVar8 = *(undefined8 *)(param_3 + 0x38);
        puVar9 = param_2;
      }
      uVar10 = 0;
      iVar3 = FUN_100c23170(0,puVar4,puVar9,uVar8,param_4);
      if (iVar3 != 0) {
        if ((*(byte *)(param_3 + 0x75) & 1) == 0) {
          puVar9 = *(undefined8 **)(param_3 + 0x48);
          local_48 = *puVar9;
          local_40 = *(undefined4 *)(puVar9 + 1);
          local_3c = *(undefined4 *)((long)puVar9 + 0xc);
          local_38 = *(undefined4 *)(puVar9 + 2);
          local_34 = *(uint *)((long)puVar9 + 0x14) & 0xfffffff8 | local_34 & 1 | 6;
          puVar9 = &local_48;
        }
        else {
          puVar9 = *(undefined8 **)(param_3 + 0x48);
        }
        iVar3 = (**(code **)(*(long *)(param_3 + 0x10) + 0x30))
                          (param_1,puVar4,puVar9,*(undefined8 *)(param_3 + 0x38),param_4,
                           *(undefined8 *)(param_3 + 0x80));
        if (iVar3 == 0) {
          uVar10 = 0;
        }
        else {
          iVar3 = FUN_100c23090(param_1,param_1,uVar5);
          if (iVar3 == 0) {
            uVar10 = 0;
          }
          else {
            if (*(int *)(param_1 + 0x10) != 0) {
              iVar3 = FUN_100c22b40(param_1,param_1,*(undefined8 *)(param_3 + 0x38));
              if (iVar3 == 0) {
                uVar10 = 0;
                goto LAB_100c46b80;
              }
            }
            iVar3 = FUN_100c297a0(puVar4,param_1,*(undefined8 *)(param_3 + 0x58),param_4);
            uVar10 = 0;
            if (iVar3 != 0) {
              puVar9 = puVar4;
              if ((*(byte *)(param_3 + 0x75) & 1) == 0) {
                local_90 = *puVar4;
                local_88 = *(undefined4 *)(puVar4 + 1);
                local_84 = *(undefined4 *)((long)puVar4 + 0xc);
                local_80 = *(undefined4 *)(puVar4 + 2);
                local_7c = *(uint *)((long)puVar4 + 0x14) & 0xfffffff8 | local_7c & 1 | 6;
                puVar9 = &local_90;
              }
              uVar10 = 0;
              iVar3 = FUN_100c23170(0,param_1,puVar9,*(undefined8 *)(param_3 + 0x38),param_4);
              if (iVar3 != 0) {
                if (*(int *)(param_1 + 0x10) != 0) {
                  iVar3 = FUN_100c22b40(param_1,param_1,*(undefined8 *)(param_3 + 0x38));
                  if (iVar3 == 0) goto LAB_100c46b80;
                }
                iVar3 = FUN_100c297a0(puVar4,param_1,*(undefined8 *)(param_3 + 0x40),param_4);
                if (iVar3 != 0) {
                  iVar3 = FUN_100c22b40(param_1,puVar4,uVar5);
                  if (iVar3 != 0) {
                    if ((*(long *)(param_3 + 0x28) != 0) && (*(long *)(param_3 + 0x20) != 0)) {
                      iVar3 = (**(code **)(*(long *)(param_3 + 0x10) + 0x30))
                                        (lVar6,param_1,*(long *)(param_3 + 0x28),
                                         *(long *)(param_3 + 0x20),param_4,
                                         *(undefined8 *)(param_3 + 0x78));
                      if (iVar3 == 0) goto LAB_100c46b80;
                      iVar3 = FUN_100c23090(lVar6,lVar6,param_2);
                      if (iVar3 == 0) goto LAB_100c46b80;
                      uVar10 = 0;
                      iVar3 = FUN_100c23170(0,lVar6,lVar6,*(undefined8 *)(param_3 + 0x20),param_4);
                      if (iVar3 == 0) goto LAB_100c46b80;
                      if (*(int *)(lVar6 + 0x10) != 0) {
                        iVar3 = FUN_100c22b40(lVar6,lVar6,*(undefined8 *)(param_3 + 0x20));
                        if (iVar3 == 0) goto LAB_100c46b80;
                      }
                      if (*(int *)(lVar6 + 8) != 0) {
                        if ((*(byte *)(param_3 + 0x75) & 1) == 0) {
                          puVar4 = *(undefined8 **)(param_3 + 0x30);
                          local_d8 = *puVar4;
                          local_d0 = *(undefined4 *)(puVar4 + 1);
                          local_cc = *(undefined4 *)((long)puVar4 + 0xc);
                          local_c8 = *(undefined4 *)(puVar4 + 2);
                          local_c4 = *(uint *)((long)puVar4 + 0x14) & 0xfffffff8 | local_c4 & 1 | 6;
                          puVar4 = &local_d8;
                        }
                        else {
                          puVar4 = *(undefined8 **)(param_3 + 0x30);
                        }
                        iVar3 = (**(code **)(*(long *)(param_3 + 0x10) + 0x30))
                                          (param_1,param_2,puVar4,*(undefined8 *)(param_3 + 0x20),
                                           param_4,*(undefined8 *)(param_3 + 0x78));
                        if (iVar3 == 0) goto LAB_100c46b80;
                      }
                    }
                    uVar10 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_100c46b80:
  FUN_100c27d40(param_4);
  return uVar10;
}

