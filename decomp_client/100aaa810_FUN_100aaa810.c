
undefined1 FUN_100aaa810(long *param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  size_t sVar5;
  undefined1 uVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  undefined1 local_138 [256];
  long local_38;
  
  lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar9;
  if ((param_3 & 2) == 0) {
    uVar3 = FUN_100bc7520();
    lVar4 = FUN_100be5430(uVar3);
    param_1[1] = lVar4;
  }
  else {
    uVar3 = FUN_100bd6040();
    lVar4 = FUN_100be5430(uVar3);
    param_1[1] = lVar4;
    FUN_100be4800(lVar4,0x20,0x3000000,0);
    lVar4 = param_1[1];
  }
  plVar10 = param_1 + 1;
  if (lVar4 == 0) {
    uVar3 = FUN_100c63310();
    FUN_100c63950(uVar3,local_138,0x100);
    pcVar8 = "Can\'t create client SSL context (SSL error: %s)";
  }
  else {
    FUN_100be6ce0(lVar4,1);
    cVar2 = FUN_100a74fe0(param_2);
    if (cVar2 == '\0') {
      pcVar8 = "ADH:!eNULL:@STRENGTH";
    }
    else {
      pcVar8 = "RSA:ADH:!eNULL:@STRENGTH";
    }
    FUN_100be4ba0(*plVar10,pcVar8);
    if ((param_3 & 2) == 0) {
      uVar3 = FUN_100bc1cb0();
      lVar4 = FUN_100be5430(uVar3);
      param_1[2] = lVar4;
    }
    else {
      uVar3 = FUN_100bd5550();
      lVar4 = FUN_100be5430(uVar3);
      param_1[2] = lVar4;
      FUN_100be4800(lVar4,0x20,0x3000000,0);
      lVar4 = param_1[2];
    }
    plVar7 = param_1 + 2;
    if (lVar4 == 0) {
      uVar3 = FUN_100c63310();
      FUN_100c63950(uVar3,local_138,0x100);
      pcVar8 = "Can\'t create server SSL context (SSL error: %s)";
    }
    else {
      FUN_100be6ce0(lVar4,1);
      cVar2 = FUN_100a74fe0(param_2);
      if (cVar2 == '\0') {
        pcVar8 = "ADH:!eNULL:@STRENGTH";
      }
      else {
        pcVar8 = "RSA:ADH:!eNULL:@STRENGTH";
      }
      FUN_100be4ba0(*plVar7,pcVar8);
      FUN_100be70b0(*plVar7,FUN_100aaa2b0);
      puVar1 = PTR_s_ParallelsServer_102281c90;
      lVar9 = *plVar7;
      sVar5 = _strlen(PTR_s_ParallelsServer_102281c90);
      FUN_100be34a0(lVar9,puVar1,sVar5 & 0xffffffff);
      cVar2 = FUN_100a74fe0(param_2);
      uVar6 = 1;
      if (cVar2 == '\0') {
        lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
        goto LAB_100aaaaa5;
      }
      cVar2 = FUN_100aaaad0(param_1,param_2,param_3);
      lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
      if (cVar2 != '\0') goto LAB_100aaaaa5;
      uVar3 = FUN_100c63310();
      FUN_100c63950(uVar3,local_138,0x100);
      pcVar8 = "Can\'t init SSL context (SSL error: %s)";
    }
  }
  FUN_100df99c0("","IOCommunication",0,pcVar8,local_138);
  if (*param_1 != 0) {
    FUN_100c7cd70();
  }
  *param_1 = 0;
  if (param_1[2] != 0) {
    FUN_100be37c0();
  }
  if (*plVar10 != 0) {
    FUN_100be37c0();
  }
  param_1[2] = 0;
  *plVar10 = 0;
  uVar6 = 0;
LAB_100aaaaa5:
  if (lVar9 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

