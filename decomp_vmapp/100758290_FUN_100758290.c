
undefined8
FUN_100758290(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  ulong *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar5 = DAT_1011bf930;
  param_3 = param_3 * 0x40;
  if (*(long *)(DAT_1011bf930 + 8 + param_3) != 0) {
    puVar2 = (ulong *)(DAT_1011bf930 + 8 + param_3);
    pcVar10 = (char *)(DAT_1011bf930 + param_3);
    lVar1 = DAT_1011bf930 + 0x10;
    plVar3 = (long *)(DAT_1011bf930 + 0x18 + param_3);
    uVar12 = 0;
    do {
      uVar7 = *(long *)(param_1 + 0x18) * 0x5a;
      FUN_100753030(param_1,(int)(uVar7 / DAT_1011bf948) + 5,uVar7 % DAT_1011bf948);
      uVar7 = *puVar2 - uVar12;
      if (param_5 <= uVar7) {
        uVar7 = param_5;
      }
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + uVar7;
      uVar11 = *(long *)(lVar1 + param_3) + uVar12;
      uVar9 = uVar11;
      if (*pcVar10 == '\0') {
        uVar9 = 0x1000 - (uVar11 & 0xfff);
        if (uVar9 <= uVar7) {
          uVar7 = uVar9;
        }
        lVar4 = *plVar3;
        uVar9 = (**(code **)(lVar4 + 0x760))(lVar4 + 0x740,*(undefined8 *)(lVar4 + 0x90),uVar11,0);
        if (uVar9 != 0) goto LAB_100758397;
        if (DAT_1011b55f8 < 3) goto LAB_1007584c1;
        pcVar10 = "Couldn\'t va2pa addr %llx region: %s";
        uVar7 = uVar11;
LAB_1007584b2:
        uVar12 = lVar5 + 0x28 + param_3;
LAB_1007584bc:
        FUN_1008e3970("","dbgdump",3,pcVar10,uVar7,uVar12);
LAB_1007584c1:
        uVar8 = FUN_100758100();
        return uVar8;
      }
LAB_100758397:
      uVar11 = uVar9 - 0x50000000;
      if (uVar9 >> 0x1c < 0xb) {
        uVar11 = uVar9;
      }
      lVar4 = *plVar3;
      if ((*(ulong *)(lVar4 + 0x740) <= uVar11) ||
         (cVar6 = (**(code **)(lVar4 + 0x748))(param_4,uVar7 & 0xffffffff,uVar9), cVar6 == '\0')) {
        if (DAT_1011b55f8 < 3) goto LAB_1007584c1;
        pcVar10 = "Couldn\'t read paddr %llx region: %s";
        uVar7 = uVar9;
        goto LAB_1007584b2;
      }
      cVar6 = FUN_1007567e0();
      if (cVar6 == '\0') {
        if (DAT_1011b55f8 < 3) goto LAB_1007584c1;
        pcVar10 = "Couldn\'t write buf to file rlen: %llx off: %llx file_off: %llx region: %s";
        goto LAB_1007584bc;
      }
      uVar12 = uVar12 + uVar7;
    } while (uVar12 < *puVar2);
  }
  return 1;
}

