
undefined8
FUN_100bae1f0(long *param_1,long param_2,long param_3,long param_4,long param_5,undefined8 *param_6)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 local_40;
  
  puVar5 = (undefined8 *)0x0;
  if (param_6 == (undefined8 *)0x0) {
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
    param_6 = puVar5;
  }
  if (param_3 != 0) {
    lVar1 = param_2 + 8;
    local_40 = 0;
    iVar4 = FUN_100bb54a0(0,lVar1,param_3,param_1 + 0xd,param_6);
    if (iVar4 == 0) goto LAB_100bae4a1;
    if (*(int *)(param_2 + 0x18) != 0) {
      if ((int)param_1[0xf] == 0) {
        pcVar6 = FUN_100bb66e0;
      }
      else {
        pcVar6 = FUN_100bb6450;
      }
      iVar4 = (*pcVar6)(lVar1,lVar1,param_1 + 0xd);
      if (iVar4 == 0) goto LAB_100bae4a1;
    }
    if ((*(code **)(*param_1 + 0x118) != (code *)0x0) &&
       (iVar4 = (**(code **)(*param_1 + 0x118))(param_1,lVar1,lVar1,param_6), iVar4 == 0))
    goto LAB_100bae4a1;
  }
  if (param_4 != 0) {
    lVar1 = param_2 + 0x20;
    iVar4 = FUN_100bb54a0(0,lVar1,param_4,param_1 + 0xd,param_6);
    if (iVar4 == 0) {
LAB_100bae40a:
      local_40 = 0;
      goto LAB_100bae4a1;
    }
    if (*(int *)(param_2 + 0x30) != 0) {
      if ((int)param_1[0xf] == 0) {
        pcVar6 = FUN_100bb66e0;
      }
      else {
        pcVar6 = FUN_100bb6450;
      }
      iVar4 = (*pcVar6)(lVar1,lVar1,param_1 + 0xd);
      if (iVar4 == 0) goto LAB_100bae40a;
    }
    local_40 = 0;
    if ((*(code **)(*param_1 + 0x118) != (code *)0x0) &&
       (iVar4 = (**(code **)(*param_1 + 0x118))(param_1,lVar1,lVar1,param_6), iVar4 == 0))
    goto LAB_100bae4a1;
  }
  if (param_5 != 0) {
    puVar2 = (undefined8 *)(param_2 + 0x38);
    local_40 = 0;
    iVar4 = FUN_100bb54a0(0,puVar2,param_5,param_1 + 0xd,param_6);
    if (iVar4 == 0) goto LAB_100bae4a1;
    if (*(int *)(param_2 + 0x48) != 0) {
      if ((int)param_1[0xf] == 0) {
        pcVar6 = FUN_100bb66e0;
      }
      else {
        pcVar6 = FUN_100bb6450;
      }
      iVar4 = (*pcVar6)(puVar2,puVar2,param_1 + 0xd);
      if (iVar4 == 0) goto LAB_100bae4a1;
    }
    if (*(int *)(param_2 + 0x40) == 1) {
      if (*(long *)*puVar2 == 1) {
        bVar7 = *(int *)(param_2 + 0x48) == 0;
      }
      else {
        bVar7 = false;
      }
    }
    else {
      bVar7 = false;
    }
    pcVar6 = *(code **)(*param_1 + 0x118);
    if (pcVar6 != (code *)0x0) {
      if ((bVar7 == false) || (pcVar3 = *(code **)(*param_1 + 0x128), pcVar3 == (code *)0x0)) {
        iVar4 = (*pcVar6)(param_1,puVar2,puVar2);
      }
      else {
        iVar4 = (*pcVar3)(param_1,puVar2,param_6);
      }
      local_40 = 0;
      if (iVar4 == 0) goto LAB_100bae4a1;
    }
    *(uint *)(param_2 + 0x50) = (uint)bVar7;
  }
  local_40 = 1;
LAB_100bae4a1:
  if (puVar5 != (undefined8 *)0x0) {
    FUN_100ba8db0();
  }
  return local_40;
}

