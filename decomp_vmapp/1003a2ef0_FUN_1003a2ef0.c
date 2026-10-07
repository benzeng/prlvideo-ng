
undefined8
FUN_1003a2ef0(long param_1,ulong param_2,uint *param_3,uint param_4,uint *param_5,long param_6)

{
  uint uVar1;
  uint *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  bool bVar7;
  
  uVar4 = (uint)param_2 & 0xffff;
  puVar6 = param_3;
  if (uVar4 < 0xfffd) {
    if (0x5f < uVar4) {
      bVar7 = uVar4 == 0x60;
      goto LAB_1003a2f3d;
    }
    if ((uVar4 < 0x2e) && ((0x3fc07e000001U >> (param_2 & 0x3f) & 1) != 0)) goto LAB_1003a2f6e;
  }
  else {
    bVar7 = uVar4 == 0xfffd;
LAB_1003a2f3d:
    if (bVar7) goto LAB_1003a2f6e;
  }
  uVar4 = *param_3;
  *param_5 = uVar4;
  puVar6 = param_3 + 1;
  if (((uVar4 & 0x2000) != 0) && ((*(uint *)**(undefined8 **)(param_1 + 0x10) & 0xfe00) != 0)) {
    param_5[1] = param_3[1];
    puVar6 = param_3 + 2;
  }
LAB_1003a2f6e:
  if ((param_2 & 0x10000000) != 0) {
    uVar4 = *puVar6;
    puVar3 = *(undefined1 **)(param_5 + 10);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = *(undefined1 **)(param_5 + 0xe);
    }
    puVar6 = puVar6 + 1;
    *puVar3 = 0;
    param_5[8] = 0;
    FUN_10038e8e0(param_5 + 8,"dst");
    param_5[2] = uVar4;
  }
  if (puVar6 < param_3 + param_4) {
    puVar2 = (uint *)**(undefined8 **)(param_1 + 0x10);
    uVar4 = 0;
    do {
      puVar5 = puVar6 + 1;
      uVar1 = *puVar6;
      *(uint *)(param_6 + (ulong)uVar4 * 0xb8) = uVar1;
      if (((uVar1 & 0x2000) != 0) && ((*puVar2 & 0xfe00) != 0)) {
        puVar5 = puVar6 + 2;
        *(uint *)(param_6 + 4 + (ulong)uVar4 * 0xb8) = puVar6[1];
      }
      uVar4 = uVar4 + 1;
      puVar6 = puVar5;
    } while (puVar5 < param_3 + param_4);
  }
  return 0;
}

