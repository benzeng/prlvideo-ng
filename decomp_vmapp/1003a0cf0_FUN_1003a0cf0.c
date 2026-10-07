
void FUN_1003a0cf0(long param_1,ulong param_2,uint *param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint local_3c;
  
  uVar3 = (uint)param_2 & 0xffff;
  uVar5 = 0;
  if (uVar3 < 0xfffd) {
    if (uVar3 < 0x60) {
      if ((uVar3 < 0x2e) && ((0x3fc07e000001U >> (param_2 & 0x3f) & 1) != 0)) {
LAB_1003a0d3c:
        local_3c = 0;
        puVar6 = param_3;
        goto LAB_1003a0d80;
      }
    }
    else if (uVar3 == 0x60) goto LAB_1003a0d3c;
  }
  else if (uVar3 == 0xfffd) goto LAB_1003a0d3c;
  puVar6 = param_3 + 1;
  local_3c = *param_3;
  if (((local_3c & 0x2000) != 0) && (uVar5 = 0, (*(uint *)(param_1 + 0x18) & 0xfe00) != 0)) {
    uVar5 = param_3[1];
    puVar6 = param_3 + 2;
  }
LAB_1003a0d80:
  uVar9 = 0;
  if ((param_2 & 0x10000000) != 0) {
    uVar9 = *puVar6;
    puVar6 = puVar6 + 1;
  }
  if ((*(long *)(param_1 + 0x20) == 0) && (0 < *(int *)(param_1 + 8))) {
    iVar7 = 0;
    do {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x10),"\t");
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 8));
  }
  if (uVar9 != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x10),"(");
    FUN_1003a0fb0(param_1,*(undefined8 *)(param_1 + 0x10),uVar9,0);
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x10),") ");
  }
  if ((param_2 & 0x40000000) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x10),"+");
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = FUN_1003a0420(param_1,param_2 & 0xffffffff);
  FUN_10038e8e0(uVar1,uVar2);
  if (uVar3 == 0x42) {
    if ((param_2 & 0x20000) == 0) {
      pcVar4 = "p";
      if ((param_2 & 0x10000) == 0) {
        pcVar4 = "";
      }
    }
    else {
      pcVar4 = "b";
    }
  }
  else {
    uVar3 = (uint)param_2 >> 0x10 & 0xff;
    if (uVar3 < 7) {
      pcVar4 = (&PTR_s__100bbd940)[uVar3];
    }
    else {
      pcVar4 = "_ctrl?";
    }
  }
  FUN_10038e8e0(*(undefined8 *)(param_1 + 0x10),pcVar4);
  if (local_3c == 0) {
    pcVar4 = " ";
  }
  else {
    FUN_1003a13a0();
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x10)," ");
    FUN_1003a08c0(param_1,*(undefined8 *)(param_1 + 0x10),local_3c,uVar5);
    pcVar4 = ", ";
  }
  while (puVar6 < param_3 + param_4) {
    puVar8 = puVar6 + 1;
    uVar5 = *puVar6;
    if ((uVar5 & 0x2000) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      if ((*(uint *)(param_1 + 0x18) & 0xfe00) != 0) {
        uVar3 = puVar6[1];
        puVar8 = puVar6 + 2;
      }
    }
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x10),pcVar4);
    FUN_1003a0fb0(param_1,*(undefined8 *)(param_1 + 0x10),uVar5,uVar3);
    pcVar4 = ", ";
    puVar6 = puVar8;
  }
  FUN_10038e8e0(*(undefined8 *)(param_1 + 0x10),"\n");
  return;
}

