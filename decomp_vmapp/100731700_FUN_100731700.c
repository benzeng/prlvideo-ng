
ulong FUN_100731700(long *param_1,long *param_2,byte *param_3,long param_4,undefined8 *param_5)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong *puVar12;
  uint uVar13;
  uint uVar14;
  ulong *puVar15;
  int iVar16;
  bool bVar17;
  ulong local_40;
  
  if (param_4 == 0) {
    return 0;
  }
  bVar8 = *param_3;
  uVar9 = (uint)bVar8;
  uVar14 = uVar9 & 0xfe;
  if (6 < uVar14) {
    return 0;
  }
  if ((0x55U >> (uVar9 & 0x1e) & 1) == 0) {
    return 0;
  }
  if ((uVar9 & 0xfb) == 1) {
    return 0;
  }
  if ((bVar8 & 0xfe) == 0) {
    if (param_4 != 1) {
      return 0;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x68);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return 0;
    }
    if (*param_1 != *param_2) {
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x000100731915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*UNRECOVERED_JUMPTABLE)(param_1);
    return uVar7;
  }
  iVar16 = (int)param_1[0xe];
  iVar2 = 0;
  if ((long)iVar16 != 0) {
    iVar2 = FUN_10072d8e0(*(undefined8 *)(param_1[0xd] + -8 + (long)iVar16 * 8));
    iVar2 = iVar2 + (iVar16 + -1) * 0x40;
  }
  iVar16 = (int)(iVar2 + 7 + ((uint)(iVar2 + 7 >> 0x1f) >> 0x1d)) >> 3;
  if (((long)iVar16 << (uVar14 != 2)) + 1 != param_4) {
    return 0;
  }
  local_40 = 0;
  puVar3 = (undefined8 *)0x0;
  if (param_5 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_10081ddd0(0x40,"../src/snlic/sn_crypto_helper_15.c",0xe6);
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined4 *)(puVar3 + 7) = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    param_5 = puVar3;
  }
  FUN_1007353b0(param_5);
  plVar4 = (long *)FUN_100735470(param_5);
  plVar5 = (long *)FUN_100735470(param_5);
  if ((plVar5 == (long *)0x0) || (lVar6 = FUN_10072bbb0(param_3 + 1,iVar16,plVar4), lVar6 == 0))
  goto LAB_100731a57;
  iVar2 = (int)plVar4[1];
  lVar6 = (long)iVar2;
  if (iVar2 == (int)param_1[0xe]) {
    lVar11 = (long)(iVar2 + -1) * 8;
    puVar15 = (ulong *)(param_1[0xd] + lVar11);
    puVar12 = (ulong *)(lVar11 + *plVar4);
    do {
      if (lVar6 < 1) goto LAB_100731a57;
      uVar7 = *puVar15;
      lVar6 = lVar6 + -1;
      puVar15 = puVar15 + -1;
      uVar1 = *puVar12;
      puVar12 = puVar12 + -1;
    } while (uVar1 == uVar7);
    if (uVar7 < uVar1) goto LAB_100731a57;
  }
  else if ((int)param_1[0xe] <= iVar2) goto LAB_100731a57;
  if (uVar14 == 2) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x90);
    if ((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*param_1 != *param_2)) goto LAB_100731a57;
    iVar16 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,plVar4,bVar8 & 1,param_5);
  }
  else {
    lVar6 = FUN_10072bbb0(param_3 + (long)iVar16 + 1,iVar16,plVar5);
    if (lVar6 == 0) goto LAB_100731a57;
    iVar16 = (int)plVar5[1];
    lVar6 = (long)iVar16;
    if (iVar16 == (int)param_1[0xe]) {
      lVar11 = (long)(iVar16 + -1) * 8;
      puVar15 = (ulong *)(param_1[0xd] + lVar11);
      puVar12 = (ulong *)(lVar11 + *plVar5);
      do {
        if (lVar6 < 1) goto LAB_100731a57;
        uVar7 = *puVar15;
        lVar6 = lVar6 + -1;
        puVar15 = puVar15 + -1;
        uVar1 = *puVar12;
        puVar12 = puVar12 + -1;
      } while (uVar1 == uVar7);
      if (uVar7 < uVar1) goto LAB_100731a57;
    }
    else if ((int)param_1[0xe] <= iVar16) goto LAB_100731a57;
    if (uVar14 == 6) {
      if (0 < iVar16) {
        bVar8 = bVar8 ^ *(byte *)*plVar5;
      }
      if ((bVar8 & 1) != 0) goto LAB_100731a57;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x80);
    if ((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*param_1 != *param_2)) goto LAB_100731a57;
    iVar16 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,plVar4,plVar5,param_5);
  }
  if (iVar16 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 200);
    bVar17 = true;
    if ((UNRECOVERED_JUMPTABLE != (code *)0x0) && (*param_1 == *param_2)) {
      iVar16 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_5);
      bVar17 = iVar16 == 0;
    }
    local_40 = (ulong)(bVar17 ^ 1);
  }
LAB_100731a57:
  if (*(int *)((long)param_5 + 0x34) == 0) {
    iVar16 = *(int *)(param_5 + 5);
    *(uint *)(param_5 + 5) = iVar16 - 1U;
    uVar9 = *(uint *)(param_5[4] + (ulong)(iVar16 - 1U) * 4);
    uVar14 = *(uint *)(param_5 + 6);
    if (uVar9 <= uVar14 && uVar14 - uVar9 != 0) {
      iVar16 = *(int *)(param_5 + 3);
      uVar10 = uVar14 - uVar9;
      *(uint *)(param_5 + 3) = iVar16 - (uVar14 - uVar9);
      if (uVar10 != 0) {
        uVar13 = iVar16 + 0xfU & 0xf;
        if ((uVar10 & 1) != 0) {
          if (uVar13 == 0) {
            param_5[1] = *(undefined8 *)(param_5[1] + 0x180);
            uVar13 = 0xf;
          }
          else {
            uVar13 = uVar13 - 1;
          }
          uVar10 = uVar10 - 1;
        }
        if (uVar14 - 1 != uVar9) {
          do {
            if (uVar13 == 0) {
              param_5[1] = *(undefined8 *)(param_5[1] + 0x180);
              iVar16 = 0xf;
            }
            else {
              iVar16 = uVar13 - 1;
            }
            uVar10 = uVar10 - 2;
            if (iVar16 == 0) {
              param_5[1] = *(undefined8 *)(param_5[1] + 0x180);
              uVar13 = 0xf;
            }
            else {
              uVar13 = iVar16 - 1;
            }
          } while (uVar10 != 0);
        }
      }
    }
    *(uint *)(param_5 + 6) = uVar9;
    *(undefined4 *)(param_5 + 7) = 0;
  }
  else {
    *(int *)((long)param_5 + 0x34) = *(int *)((long)param_5 + 0x34) + -1;
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_100729fd0(puVar3);
  }
  return local_40;
}

