
void FUN_1003ba4c0(long *param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  long lVar6;
  uint uVar7;
  char *pcVar8;
  long *plVar9;
  bool bVar10;
  
  bVar1 = *(byte *)(*param_1 + 0x35);
  if ((bVar1 & 8) != 0) {
    FUN_10038e8e0(param_1 + 0x14,"-");
    bVar1 = *(byte *)(*param_1 + 0x35);
  }
  bVar10 = (bVar1 & 0x10) != 0;
  if (bVar10) {
    FUN_10038e8e0(param_1 + 0x14,"abs(");
  }
  uVar7 = (uint)bVar10;
  if ((*(int *)((long)param_1 + 0x14) != param_2) && ((*(byte *)(*param_1 + 0x35) & 4) == 0)) {
    iVar2 = FUN_1003b9bc0();
    uVar7 = uVar7 + iVar2;
  }
  if (((param_3 & param_3 - 1) != 0) &&
     ((*(char *)(*param_1 + 0x38) == '\v' || (*(char *)(*param_1 + 0x38) == '#')))) {
    uVar7 = uVar7 + 1;
    uVar3 = FUN_1003a78b0(*(undefined4 *)((long)param_1 + 0x14),param_3 & 0xff);
    FUN_10038e8e0(param_1 + 0x14,"%s(",uVar3);
  }
  uVar4 = (ulong)*(byte *)(*param_1 + 0x38);
  if ((uVar4 < 0x24) && ((0x800009800U >> (uVar4 & 0x3f) & 1) != 0)) {
LAB_1003ba612:
    ppuVar5 = &PTR_s_R_1011195d0 + uVar4 * 2;
  }
  else {
    bVar1 = *(byte *)((long)param_1 + 0x14);
    if (bVar1 < 0xf) {
      pcVar8 = "i";
      switch(bVar1) {
      case 1:
        pcVar8 = "u";
        break;
      case 2:
        break;
      default:
switchD_1003ba5dc_caseD_3:
        pcVar8 = "?";
        break;
      case 4:
        pcVar8 = "b";
        break;
      case 8:
        pcVar8 = "";
      }
    }
    else {
      if (bVar1 != 0xf) goto switchD_1003ba5dc_caseD_3;
      pcVar8 = "a";
    }
    FUN_10038e8e0(param_1 + 0x14,pcVar8);
    uVar4 = (ulong)*(byte *)(*param_1 + 0x38);
    if (*(byte *)(*param_1 + 0x38) < 0x29) goto LAB_1003ba612;
    ppuVar5 = &PTR_s_operand__101119860;
  }
  plVar9 = param_1 + 0x14;
  FUN_10038e8e0(plVar9,*ppuVar5);
  lVar6 = *param_1;
  bVar1 = *(byte *)(lVar6 + 0x38);
  uVar4 = (ulong)bVar1;
  if (bVar1 < 0x24) {
    if ((0x80000f800U >> (uVar4 & 0x3f) & 1) != 0) goto joined_r0x0001003ba704;
    if ((0x108UL >> (uVar4 & 0x3f) & 1) == 0) {
      if ((0xc0UL >> (uVar4 & 0x3f) & 1) != 0) {
        FUN_10038e8e0(plVar9,"%d",*(undefined4 *)(lVar6 + 0x28));
        goto joined_r0x0001003ba704;
      }
    }
    else {
      FUN_10038e8e0(plVar9,"%d",*(undefined4 *)(lVar6 + 0x2c));
      lVar6 = *param_1;
      bVar1 = *(byte *)(lVar6 + 0x38);
    }
  }
  if ((*(byte *)(lVar6 + 0x35) & 2) == 0) {
    if ((bVar1 & 0xfe) == 8) {
      pcVar8 = "(%d)";
    }
    else {
      pcVar8 = "[%d]";
    }
    FUN_10038e8e0(plVar9,pcVar8,*(undefined4 *)(lVar6 + 0x28));
    if (*(char *)(*param_1 + 0x38) != '\v') {
      FUN_1003b9900(plVar9,*param_1,param_3 & 0xff);
    }
  }
  else if (bVar1 == 8) {
    FUN_10038e8e0(plVar9,"_Dyn");
  }
joined_r0x0001003ba704:
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    FUN_10038e8e0(plVar9,")");
  }
  return;
}

