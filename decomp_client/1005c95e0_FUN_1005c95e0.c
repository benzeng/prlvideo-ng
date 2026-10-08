
undefined4 * FUN_1005c95e0(undefined4 *param_1,long *param_2,QString *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  plVar6 = (long *)*param_2;
  if ((*(int *)((long)plVar6 + 0x14) != 0) && (uVar1 = *(uint *)(plVar6 + 4), uVar1 != 0)) {
    uVar5 = qHash(param_3,*(uint *)((long)plVar6 + 0x24));
    uVar2 = (ulong)uVar5 % (ulong)uVar1;
    plVar8 = *(long **)(plVar6[1] + uVar2 * 8);
    if (plVar8 != plVar6) {
      plVar10 = (long *)(plVar6[1] + uVar2 * 8);
      do {
        plVar7 = plVar6;
        plVar9 = plVar8;
        if (*(uint *)(plVar8 + 1) == uVar5) {
          cVar4 = operator==(param_3,(QString *)(plVar8 + 2));
          plVar6 = (long *)*plVar10;
          plVar7 = (long *)*param_2;
          plVar9 = plVar6;
          if (cVar4 != '\0') break;
        }
        plVar6 = plVar7;
        plVar8 = (long *)*plVar9;
        plVar7 = plVar6;
        plVar10 = plVar9;
      } while (plVar8 != plVar6);
      if (plVar6 != plVar7) {
        FUN_100260700(param_1,plVar6 + 3);
        return param_1;
      }
    }
  }
  *param_1 = 0xff;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar3 = PTR_shared_null_1021e1288;
  auVar11._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar11._0_8_ = PTR_shared_null_1021e1288;
  auVar11._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 4) = auVar11;
  auVar12._8_4_ = (int)PTR_shared_null_1021e15e8;
  auVar12._0_8_ = PTR_shared_null_1021e15e8;
  auVar12._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 8) = auVar12;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined **)(param_1 + 0xe) = puVar3;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  return param_1;
}

