
undefined8 FUN_100c46db0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 *local_a0;
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
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x10) + 0x68);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100c46dee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
    return uVar3;
  }
  lVar4 = FUN_100c27a20();
  if (lVar4 != 0) {
    FUN_100c27c60(lVar4);
    local_a0 = (undefined8 *)FUN_100c27e20(lVar4);
    puVar5 = (undefined8 *)FUN_100c27e20(lVar4);
    uVar3 = FUN_100c27e20(lVar4);
    lVar6 = FUN_100c27e20(lVar4);
    if (lVar6 != 0) {
      iVar1 = (int)param_2;
      if (*(long *)(param_1 + 0x20) == 0) {
        lVar6 = FUN_100c26720();
        *(long *)(param_1 + 0x20) = lVar6;
        if (lVar6 == 0) goto LAB_100c47310;
      }
      if (*(long *)(param_1 + 0x30) == 0) {
        lVar6 = FUN_100c26720();
        *(long *)(param_1 + 0x30) = lVar6;
        if (lVar6 == 0) goto LAB_100c47310;
      }
      if (*(long *)(param_1 + 0x28) == 0) {
        lVar6 = FUN_100c26720();
        *(long *)(param_1 + 0x28) = lVar6;
        if (lVar6 == 0) goto LAB_100c47310;
      }
      if (*(long *)(param_1 + 0x38) == 0) {
        lVar6 = FUN_100c26720();
        *(long *)(param_1 + 0x38) = lVar6;
        if (lVar6 == 0) goto LAB_100c47310;
      }
      if (*(long *)(param_1 + 0x40) == 0) {
        lVar6 = FUN_100c26720();
        *(long *)(param_1 + 0x40) = lVar6;
        if (lVar6 == 0) goto LAB_100c47310;
      }
      if (*(long *)(param_1 + 0x48) == 0) {
        lVar6 = FUN_100c26720();
        *(long *)(param_1 + 0x48) = lVar6;
        if (lVar6 == 0) goto LAB_100c47310;
      }
      if (*(long *)(param_1 + 0x50) == 0) {
        lVar6 = FUN_100c26720();
        *(long *)(param_1 + 0x50) = lVar6;
        if (lVar6 == 0) goto LAB_100c47310;
      }
      if (*(long *)(param_1 + 0x58) == 0) {
        lVar6 = FUN_100c26720();
        *(long *)(param_1 + 0x58) = lVar6;
        if (lVar6 == 0) goto LAB_100c47310;
      }
      iVar8 = (iVar1 + 1) - (iVar1 + 1 >> 0x1f) >> 1;
      iVar1 = iVar1 - iVar8;
      FUN_100c26b50(*(undefined8 *)(param_1 + 0x28),param_3);
      iVar11 = 0;
      do {
        iVar2 = FUN_100c2d9b0(*(undefined8 *)(param_1 + 0x38),iVar8,0,0,0,param_4);
        if (iVar2 == 0) break;
        uVar10 = *(undefined8 *)(param_1 + 0x38);
        uVar7 = FUN_100c26510();
        iVar2 = FUN_100c23090(uVar3,uVar10,uVar7);
        if ((iVar2 == 0) ||
           (iVar2 = FUN_100c2cd30(puVar5,uVar3,*(undefined8 *)(param_1 + 0x28)), iVar2 == 0)) break;
        if ((*(int *)(puVar5 + 1) == 1) && ((*(long *)*puVar5 == 1 && (*(int *)(puVar5 + 2) == 0))))
        {
          iVar8 = FUN_100c2d960(param_4,3,0);
          if (iVar8 != 0) goto LAB_100c47000;
          break;
        }
        iVar2 = FUN_100c2d960(param_4,2,iVar11);
        iVar11 = iVar11 + 1;
      } while (iVar2 != 0);
    }
  }
LAB_100c47310:
  uVar3 = 3;
  uVar10 = 0xf1;
LAB_100c4732c:
  FUN_100c62ee0(4,0x81,uVar3,"rsa_gen.c",uVar10);
  uVar3 = 0;
LAB_100c47334:
  if (lVar4 != 0) {
    FUN_100c27d40(lVar4);
    FUN_100c27ab0(lVar4);
  }
  return uVar3;
LAB_100c47000:
  iVar8 = FUN_100c2d9b0(*(undefined8 *)(param_1 + 0x40),iVar1,0,0,0,param_4);
  if (iVar8 == 0) goto LAB_100c47310;
  iVar8 = FUN_100c27160(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  if (iVar8 == 0) {
    iVar8 = FUN_100c2d9b0(*(undefined8 *)(param_1 + 0x40),iVar1,0,0,0,param_4);
    if (iVar8 == 0) goto LAB_100c47310;
    iVar8 = FUN_100c27160(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
    if (iVar8 == 0) {
      iVar8 = FUN_100c2d9b0(*(undefined8 *)(param_1 + 0x40),iVar1,0,0,0,param_4);
      if (iVar8 == 0) goto LAB_100c47310;
      iVar8 = FUN_100c27160(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
      if (iVar8 == 0) {
        uVar3 = 0x78;
        uVar10 = 0xaf;
        goto LAB_100c4732c;
      }
    }
  }
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = FUN_100c26510();
  iVar8 = FUN_100c23090(uVar3,uVar10,uVar7);
  if ((iVar8 == 0) ||
     (iVar8 = FUN_100c2cd30(puVar5,uVar3,*(undefined8 *)(param_1 + 0x28)), iVar8 == 0))
  goto LAB_100c47310;
  if ((*(int *)(puVar5 + 1) == 1) && ((*(long *)*puVar5 == 1 && (*(int *)(puVar5 + 2) == 0)))) {
    iVar1 = FUN_100c2d960(param_4,3,1);
    if (iVar1 != 0) {
      iVar1 = FUN_100c27160(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
      if (iVar1 < 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x38);
        uVar10 = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x38) = uVar10;
        *(undefined8 *)(param_1 + 0x40) = uVar7;
      }
      else {
        uVar10 = *(undefined8 *)(param_1 + 0x38);
        uVar7 = *(undefined8 *)(param_1 + 0x40);
      }
      iVar1 = FUN_100c297a0(*(undefined8 *)(param_1 + 0x20),uVar10,uVar7,lVar4);
      if (iVar1 != 0) {
        uVar10 = *(undefined8 *)(param_1 + 0x38);
        uVar7 = FUN_100c26510();
        iVar1 = FUN_100c23090(puVar5,uVar10,uVar7);
        if (iVar1 != 0) {
          uVar10 = *(undefined8 *)(param_1 + 0x40);
          uVar7 = FUN_100c26510();
          iVar1 = FUN_100c23090(uVar3,uVar10,uVar7);
          if ((iVar1 != 0) && (iVar1 = FUN_100c297a0(local_a0,puVar5,uVar3,lVar4), iVar1 != 0)) {
            if ((*(byte *)(param_1 + 0x75) & 1) == 0) {
              local_48 = *local_a0;
              local_40 = *(undefined4 *)(local_a0 + 1);
              local_3c = *(undefined4 *)((long)local_a0 + 0xc);
              local_38 = *(undefined4 *)(local_a0 + 2);
              local_34 = *(uint *)((long)local_a0 + 0x14) & 0xfffffff8 | 6;
              local_a0 = &local_48;
            }
            lVar6 = FUN_100c2cf20(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),
                                  local_a0,lVar4);
            if (lVar6 != 0) {
              if ((*(byte *)(param_1 + 0x75) & 1) == 0) {
                puVar9 = *(undefined8 **)(param_1 + 0x30);
                local_60 = *puVar9;
                local_58 = *(undefined4 *)(puVar9 + 1);
                local_54 = *(undefined4 *)((long)puVar9 + 0xc);
                local_50 = *(undefined4 *)(puVar9 + 2);
                local_4c = *(uint *)((long)puVar9 + 0x14) & 0xfffffff8 | 6;
                puVar9 = &local_60;
              }
              else {
                puVar9 = *(undefined8 **)(param_1 + 0x30);
              }
              iVar1 = FUN_100c23170(0,*(undefined8 *)(param_1 + 0x48),puVar9,puVar5,lVar4);
              if ((iVar1 != 0) &&
                 (iVar1 = FUN_100c23170(0,*(undefined8 *)(param_1 + 0x50),puVar9,uVar3,lVar4),
                 iVar1 != 0)) {
                if ((*(byte *)(param_1 + 0x75) & 1) == 0) {
                  puVar5 = *(undefined8 **)(param_1 + 0x38);
                  local_78 = *puVar5;
                  local_70 = *(undefined4 *)(puVar5 + 1);
                  local_6c = *(undefined4 *)((long)puVar5 + 0xc);
                  local_68 = *(undefined4 *)(puVar5 + 2);
                  local_64 = *(uint *)((long)puVar5 + 0x14) & 0xfffffff8 | 6;
                  puVar5 = &local_78;
                }
                else {
                  puVar5 = *(undefined8 **)(param_1 + 0x38);
                }
                lVar6 = FUN_100c2cf20(*(undefined8 *)(param_1 + 0x58),
                                      *(undefined8 *)(param_1 + 0x40),puVar5,lVar4);
                uVar3 = 1;
                if (lVar6 != 0) goto LAB_100c47334;
              }
            }
          }
        }
      }
    }
    goto LAB_100c47310;
  }
  iVar8 = FUN_100c2d960(param_4,2,iVar11);
  iVar11 = iVar11 + 1;
  if (iVar8 == 0) goto LAB_100c47310;
  goto LAB_100c47000;
}

