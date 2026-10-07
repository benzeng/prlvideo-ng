
undefined8 FUN_10037ece0(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  
  lVar3 = *(long *)(param_1 + 8);
  if (*(long *)(lVar3 + 0x100) == 0) {
    uVar6 = 0;
    uVar5 = 0;
    fVar7 = 0.0;
  }
  else {
    if (*(uint *)(param_2 + 0x160) < 0x90000) {
      fVar7 = (float)-*(int *)(param_2 + 0x832c);
      uVar6 = 0;
    }
    else {
      fVar7 = *(float *)(param_2 + 0x857c);
      uVar2 = FUN_10038fba0(DAT_1011c8478,*(undefined4 *)(*(long *)(lVar3 + 0x100) + 8));
      fVar7 = (float)uVar2 * fVar7;
      uVar6 = *(undefined4 *)(param_2 + 0x852c);
      lVar3 = *(long *)(param_1 + 8);
    }
    uVar5 = *(undefined4 *)(*(long *)(lVar3 + 0xf8) + 0x18);
  }
  *(undefined4 *)(lVar3 + 0x23c) = uVar5;
  (*DAT_1011c6750)(uVar6,fVar7);
  iVar1 = *(int *)(param_2 + 0x8290);
  if (iVar1 == 1) {
    (*DAT_1011c5c78)(0x2a01);
    puVar4 = &DAT_1011c5bc0;
LAB_10037edba:
    (*(code *)*puVar4)(0x2a02);
  }
  else {
    (*DAT_1011c5bc0)(0x2a01);
    if (iVar1 == 2) {
      puVar4 = &DAT_1011c5c78;
      goto LAB_10037edba;
    }
    (*DAT_1011c5bc0)(0x2a02);
    if (iVar1 == 3) {
      puVar4 = &DAT_1011c5c78;
      goto LAB_10037edc8;
    }
  }
  puVar4 = &DAT_1011c5bc0;
LAB_10037edc8:
  (*(code *)*puVar4)(0x8037);
  return 0;
}

