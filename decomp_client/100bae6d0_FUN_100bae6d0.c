
undefined8 FUN_100bae6d0(long *param_1,long *param_2,long param_3,long param_4,undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  undefined8 uVar14;
  bool bVar15;
  
  pcVar3 = *(code **)(*param_1 + 0xc0);
  if (((pcVar3 != (code *)0x0) && (*param_1 == *param_2)) &&
     (iVar4 = (*pcVar3)(param_1,param_2), iVar4 != 0)) {
    return 0;
  }
  puVar5 = (undefined8 *)0x0;
  if (param_5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FUN_100bf3540(0x40,"../src/snlic/sn_crypto_helper_15.c",0xe6);
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined4 *)(puVar5 + 7) = 0;
    puVar5[6] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    param_5 = puVar5;
  }
  FUN_100bb4190(param_5);
  plVar6 = (long *)FUN_100bb4250(param_5);
  uVar7 = FUN_100bb4250(param_5);
  uVar8 = FUN_100bb4250(param_5);
  lVar9 = FUN_100bb4250(param_5);
  if (lVar9 != 0) {
    plVar13 = param_2 + 7;
    if ((*(code **)(*param_1 + 0x120) == (code *)0x0) ||
       (iVar4 = (**(code **)(*param_1 + 0x120))(param_1,plVar6,plVar13,param_5), plVar13 = plVar6,
       iVar4 != 0)) {
      if (((int)plVar13[1] == 1) && ((*(long *)*plVar13 == 1 && ((int)plVar13[2] == 0)))) {
        if (*(code **)(*param_1 + 0x120) == (code *)0x0) {
          if ((param_3 != 0) && (lVar9 = FUN_100bac3a0(param_3,param_2 + 1), lVar9 == 0))
          goto LAB_100baea41;
          if (param_4 != 0) {
            lVar9 = FUN_100bac3a0(param_4,param_2 + 4);
            bVar15 = lVar9 == 0;
            goto LAB_100bae9fc;
          }
        }
        else {
          if ((param_3 != 0) &&
             (iVar4 = (**(code **)(*param_1 + 0x120))(param_1,param_3,param_2 + 1,param_5),
             iVar4 == 0)) goto LAB_100baea41;
          if (param_4 != 0) {
            iVar4 = (**(code **)(*param_1 + 0x120))(param_1,param_4,param_2 + 4,param_5);
LAB_100bae9fa:
            bVar15 = iVar4 == 0;
LAB_100bae9fc:
            uVar14 = 0;
            if (bVar15) goto LAB_100baea48;
          }
        }
LAB_100baeaa7:
        uVar14 = 1;
        goto LAB_100baea48;
      }
      plVar6 = param_1 + 0xd;
      lVar10 = FUN_100bb4520(uVar7,plVar13,plVar6,param_5);
      if (lVar10 != 0) {
        if (*(long *)(*param_1 + 0x118) == 0) {
          iVar4 = (**(code **)(*param_1 + 0x108))(param_1,uVar8,uVar7,param_5);
          if (iVar4 == 0) {
            uVar14 = 0;
            goto LAB_100baea48;
          }
        }
        else {
          iVar4 = FUN_100bb8d30(uVar8,uVar7,param_5);
          if (iVar4 == 0) {
            uVar14 = 0;
            goto LAB_100baea48;
          }
          uVar14 = 0;
          iVar4 = FUN_100bb54a0(0,uVar8,uVar8,plVar6,param_5);
          if (iVar4 == 0) goto LAB_100baea48;
        }
        if ((param_3 != 0) &&
           (iVar4 = (**(code **)(*param_1 + 0x100))(param_1,param_3,param_2 + 1,uVar8,param_5),
           iVar4 == 0)) {
          uVar14 = 0;
          goto LAB_100baea48;
        }
        if (param_4 != 0) {
          if (*(long *)(*param_1 + 0x118) == 0) {
            iVar4 = (**(code **)(*param_1 + 0x100))(param_1,lVar9,uVar8,uVar7,param_5);
            if (iVar4 == 0) {
              uVar14 = 0;
              goto LAB_100baea48;
            }
          }
          else {
            iVar4 = FUN_100bba3e0(lVar9,uVar8,uVar7,plVar6,param_5);
            if (iVar4 == 0) {
              uVar14 = 0;
              goto LAB_100baea48;
            }
          }
          iVar4 = (**(code **)(*param_1 + 0x100))(param_1,param_4,param_2 + 4,lVar9,param_5);
          goto LAB_100bae9fa;
        }
        goto LAB_100baeaa7;
      }
    }
  }
LAB_100baea41:
  uVar14 = 0;
LAB_100baea48:
  if (*(int *)((long)param_5 + 0x34) == 0) {
    iVar4 = *(int *)(param_5 + 5);
    *(uint *)(param_5 + 5) = iVar4 - 1U;
    uVar1 = *(uint *)(param_5[4] + (ulong)(iVar4 - 1U) * 4);
    uVar2 = *(uint *)(param_5 + 6);
    if (uVar1 <= uVar2 && uVar2 - uVar1 != 0) {
      iVar4 = *(int *)(param_5 + 3);
      uVar11 = uVar2 - uVar1;
      *(uint *)(param_5 + 3) = iVar4 - (uVar2 - uVar1);
      if (uVar11 != 0) {
        uVar12 = iVar4 + 0xfU & 0xf;
        if ((uVar11 & 1) != 0) {
          if (uVar12 == 0) {
            param_5[1] = *(undefined8 *)(param_5[1] + 0x180);
            uVar12 = 0xf;
          }
          else {
            uVar12 = uVar12 - 1;
          }
          uVar11 = uVar11 - 1;
        }
        if (uVar2 - 1 != uVar1) {
          do {
            if (uVar12 == 0) {
              param_5[1] = *(undefined8 *)(param_5[1] + 0x180);
              iVar4 = 0xf;
            }
            else {
              iVar4 = uVar12 - 1;
            }
            uVar11 = uVar11 - 2;
            if (iVar4 == 0) {
              param_5[1] = *(undefined8 *)(param_5[1] + 0x180);
              uVar12 = 0xf;
            }
            else {
              uVar12 = iVar4 - 1;
            }
          } while (uVar11 != 0);
        }
      }
    }
    *(uint *)(param_5 + 6) = uVar1;
    *(undefined4 *)(param_5 + 7) = 0;
  }
  else {
    *(int *)((long)param_5 + 0x34) = *(int *)((long)param_5 + 0x34) + -1;
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_100ba8db0(puVar5);
  }
  return uVar14;
}

