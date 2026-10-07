
undefined8 FUN_1003b94a0(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  byte bVar3;
  undefined1 uVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined **ppuVar7;
  float fVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  
  if ((*(byte *)(param_2 + 0x39) & 1) == 0) {
    bVar3 = *(byte *)(param_2 + 0x35);
    if ((bVar3 & 8) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"-");
      bVar3 = *(byte *)(param_2 + 0x35);
    }
    if ((bVar3 & 0x10) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"abs(");
      bVar3 = *(byte *)(param_2 + 0x35);
    }
    if ((bVar3 & 1) == 0) {
      lVar2 = *(long *)(param_2 + 8);
      if (lVar2 == 0) {
        uVar10 = *(undefined8 *)(param_1 + 8);
LAB_1003b97b1:
        pcVar9 = "a";
        goto switchD_1003b954b_caseD_2;
      }
      pbVar6 = (byte *)(*(long *)(lVar2 + 0x80) + 0x48);
      if (*(long *)(lVar2 + 0x80) == 0) {
        pbVar6 = (byte *)(lVar2 + 0x7c);
      }
      bVar3 = *pbVar6;
      uVar10 = *(undefined8 *)(param_1 + 8);
      if (bVar3 < 0xf) {
        pcVar9 = "i";
        switch(bVar3) {
        case 1:
          pcVar9 = "u";
          break;
        case 2:
          break;
        default:
          goto switchD_1003b954b_caseD_3;
        case 4:
          pcVar9 = "b";
          break;
        case 8:
          pcVar9 = "";
        }
      }
      else {
        if (bVar3 == 0xf) goto LAB_1003b97b1;
switchD_1003b954b_caseD_3:
        pcVar9 = "?";
      }
switchD_1003b954b_caseD_2:
      FUN_10038e8e0(uVar10,pcVar9);
    }
    puVar11 = (undefined8 *)(param_1 + 8);
    if ((ulong)*(byte *)(param_2 + 0x38) < 0x29) {
      ppuVar7 = &PTR_s_R_1011195d0 + (ulong)*(byte *)(param_2 + 0x38) * 2;
    }
    else {
      ppuVar7 = &PTR_s_operand__101119860;
    }
    FUN_10038e8e0(*puVar11,*ppuVar7);
    uVar5 = (ulong)*(byte *)(param_2 + 0x38);
    if (*(byte *)(param_2 + 0x38) < 0x24) {
      if ((0x800006800U >> (uVar5 & 0x3f) & 1) == 0) {
        if ((0x4c0UL >> (uVar5 & 0x3f) & 1) == 0) {
          if ((0x108UL >> (uVar5 & 0x3f) & 1) != 0) {
            FUN_10038e8e0(*puVar11,"%d",*(undefined4 *)(param_2 + 0x2c));
          }
          goto LAB_1003b984c;
        }
        uVar10 = *puVar11;
        uVar1 = *(undefined4 *)(param_2 + 0x28);
        pcVar9 = "%d";
LAB_1003b987c:
        FUN_10038e8e0(uVar10,pcVar9,uVar1);
        goto LAB_1003b9883;
      }
    }
    else {
LAB_1003b984c:
      if ((*(byte *)(param_2 + 0x35) & 2) == 0) {
        FUN_10038e8e0(*puVar11,"[%d]",*(undefined4 *)(param_2 + 0x28));
        if (*(char *)(param_2 + 0x38) == '\x19') {
          uVar10 = *puVar11;
          uVar1 = *(undefined4 *)(param_2 + 0x2c);
          pcVar9 = "[%d]";
          goto LAB_1003b987c;
        }
LAB_1003b9883:
        uVar4 = 0xf;
        if ((*(byte *)(param_2 + 0x35) & 4) != 0) {
          uVar4 = *(undefined1 *)(param_2 + 0x30);
        }
        FUN_1003b9900(*puVar11,param_2,uVar4);
      }
    }
    if ((*(byte *)(param_2 + 0x35) & 0x10) == 0) {
      return 0;
    }
    uVar10 = *puVar11;
    goto LAB_1003b98a5;
  }
  if ((ulong)*(byte *)(param_2 + 0x38) < 0x29) {
    ppuVar7 = &PTR_s_R_1011195d0 + (ulong)*(byte *)(param_2 + 0x38) * 2;
  }
  else {
    ppuVar7 = &PTR_s_operand__101119860;
  }
  FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"%s(",*ppuVar7);
  fVar8 = *(float *)(param_2 + 0x28);
  if (((fVar8 == *(float *)(param_2 + 0x2c)) && (fVar8 == *(float *)(param_2 + 0x30))) &&
     (fVar8 == *(float *)(param_2 + 0x34))) {
    lVar2 = *(long *)(param_2 + 8);
    if (lVar2 == 0) {
      uVar10 = *(undefined8 *)(param_1 + 8);
    }
    else {
      pcVar9 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
      if (*(long *)(lVar2 + 0x80) == 0) {
        pcVar9 = (char *)(lVar2 + 0x7c);
      }
      uVar10 = *(undefined8 *)(param_1 + 8);
      if (*pcVar9 == '\b') {
LAB_1003b9769:
        FUN_10038e8e0((double)fVar8,uVar10,"%f");
        uVar10 = *(undefined8 *)(param_1 + 8);
        goto LAB_1003b98a5;
      }
    }
  }
  else {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"");
    lVar2 = *(long *)(param_2 + 8);
    if (lVar2 == 0) {
      uVar10 = *(undefined8 *)(param_1 + 8);
LAB_1003b9640:
      FUN_10038e8e0(uVar10,"%x",*(undefined4 *)(param_2 + 0x28));
    }
    else {
      pcVar9 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
      if (*(long *)(lVar2 + 0x80) == 0) {
        pcVar9 = (char *)(lVar2 + 0x7c);
      }
      uVar10 = *(undefined8 *)(param_1 + 8);
      if (*pcVar9 != '\b') goto LAB_1003b9640;
      FUN_10038e8e0((double)*(float *)(param_2 + 0x28),uVar10,"%f");
    }
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),", ");
    lVar2 = *(long *)(param_2 + 8);
    if (lVar2 == 0) {
      uVar10 = *(undefined8 *)(param_1 + 8);
LAB_1003b96ab:
      FUN_10038e8e0(uVar10,"%x",*(undefined4 *)(param_2 + 0x2c));
    }
    else {
      pcVar9 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
      if (*(long *)(lVar2 + 0x80) == 0) {
        pcVar9 = (char *)(lVar2 + 0x7c);
      }
      uVar10 = *(undefined8 *)(param_1 + 8);
      if (*pcVar9 != '\b') goto LAB_1003b96ab;
      FUN_10038e8e0((double)*(float *)(param_2 + 0x2c),uVar10,"%f");
    }
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),", ");
    lVar2 = *(long *)(param_2 + 8);
    if (lVar2 == 0) {
      uVar10 = *(undefined8 *)(param_1 + 8);
LAB_1003b9716:
      FUN_10038e8e0(uVar10,"%x",*(undefined4 *)(param_2 + 0x30));
    }
    else {
      pcVar9 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
      if (*(long *)(lVar2 + 0x80) == 0) {
        pcVar9 = (char *)(lVar2 + 0x7c);
      }
      uVar10 = *(undefined8 *)(param_1 + 8);
      if (*pcVar9 != '\b') goto LAB_1003b9716;
      FUN_10038e8e0((double)*(float *)(param_2 + 0x30),uVar10,"%f");
    }
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),", ");
    lVar2 = *(long *)(param_2 + 8);
    if (lVar2 == 0) {
      uVar10 = *(undefined8 *)(param_1 + 8);
    }
    else {
      pcVar9 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
      if (*(long *)(lVar2 + 0x80) == 0) {
        pcVar9 = (char *)(lVar2 + 0x7c);
      }
      uVar10 = *(undefined8 *)(param_1 + 8);
      if (*pcVar9 == '\b') {
        fVar8 = *(float *)(param_2 + 0x34);
        goto LAB_1003b9769;
      }
    }
    fVar8 = *(float *)(param_2 + 0x34);
  }
  FUN_10038e8e0(uVar10,"%x",fVar8);
  uVar10 = *(undefined8 *)(param_1 + 8);
LAB_1003b98a5:
  FUN_10038e8e0(uVar10,")");
  return 0;
}

