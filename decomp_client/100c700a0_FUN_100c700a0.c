
undefined8
FUN_100c700a0(long param_1,char *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
             undefined4 param_6)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_88;
  int local_84;
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar7;
  iVar3 = FUN_100bf7220();
  if (iVar3 == 0) {
LAB_100c70242:
    FUN_100c62ee0(6,0x74,0x79,"evp_pbe.c",0xa2);
    if (param_1 == 0) {
      FUN_100c583f0(&local_88,"NULL",0x50);
    }
    else {
      FUN_100c74920(&local_88,0x50,param_1);
    }
    uVar6 = 0;
    FUN_100c642a0(2,"TYPE=",&local_88);
    goto LAB_100c702f6;
  }
  local_88 = 0;
  local_84 = iVar3;
  if (DAT_1023183b0 == 0) {
LAB_100c70120:
    lVar4 = FUN_100bf7eb0(&local_88,&DAT_1022512b0,0x15,0x18,FUN_100c705e0);
    if (lVar4 == 0) goto LAB_100c70242;
  }
  else {
    iVar3 = FUN_100c60360(DAT_1023183b0,&local_88);
    if (iVar3 == -1) goto LAB_100c70120;
    lVar4 = FUN_100c60820(DAT_1023183b0,iVar3);
    if (lVar4 == 0) goto LAB_100c70120;
  }
  iVar3 = *(int *)(lVar4 + 8);
  iVar1 = *(int *)(lVar4 + 0xc);
  pcVar2 = *(code **)(lVar4 + 0x10);
  sVar5 = 0;
  if ((param_2 != (char *)0x0) && (sVar5 = param_3 & 0xffffffff, (int)param_3 == -1)) {
    sVar5 = _strlen(param_2);
  }
  lVar7 = 0;
  if (iVar3 == -1) {
LAB_100c701b4:
    lVar4 = 0;
    if (iVar1 != -1) {
      uVar6 = FUN_100bf70a0(iVar1);
      lVar4 = FUN_100c6bd60(uVar6);
      if (lVar4 == 0) {
        uVar6 = 0xa1;
        uVar8 = 0xbf;
        goto LAB_100c702e5;
      }
    }
    iVar3 = (*pcVar2)(param_5,param_2,sVar5 & 0xffffffff,param_4,lVar7,lVar4,param_6);
    uVar6 = 1;
    lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
    if (iVar3 == 0) {
      FUN_100c62ee0(6,0x74,0x78,"evp_pbe.c",0xc5);
      uVar6 = 0;
    }
  }
  else {
    uVar6 = FUN_100bf70a0(iVar3);
    lVar7 = FUN_100c6bd50(uVar6);
    if (lVar7 != 0) goto LAB_100c701b4;
    uVar6 = 0xa0;
    uVar8 = 0xb5;
LAB_100c702e5:
    FUN_100c62ee0(6,0x74,uVar6,"evp_pbe.c",uVar8);
    uVar6 = 0;
    lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
LAB_100c702f6:
  if (lVar7 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

