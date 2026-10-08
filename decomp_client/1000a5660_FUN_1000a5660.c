
undefined1 (*) [16] FUN_1000a5660(undefined1 (*param_1) [16],long param_2,QString *param_3)

{
  undefined *puVar1;
  char cVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  puVar1 = PTR_shared_null_1021e1288;
  auVar8._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar8._0_8_ = PTR_shared_null_1021e1288;
  auVar8._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *param_1 = auVar8;
  *(undefined **)param_1[1] = puVar1;
  puVar4 = *(uint **)(param_2 + 0x10);
  plVar7 = (long *)(param_2 + 0x10);
  if (1 < *puVar4) {
    FUN_1000a5ea0(plVar7);
    puVar4 = (uint *)*plVar7;
  }
  puVar3 = *(uint **)(puVar4 + 4);
  puVar6 = (uint *)0x0;
  if (*(uint **)(puVar4 + 4) != (uint *)0x0) {
    do {
      while (puVar4 = puVar3, cVar2 = operator<((QString *)(puVar4 + 6),param_3), cVar2 != '\0') {
        puVar3 = *(uint **)(puVar4 + 4);
        if (*(uint **)(puVar4 + 4) == (uint *)0x0) {
          puVar4 = puVar6;
          if (puVar6 == (uint *)0x0) goto LAB_1000a5706;
          goto LAB_1000a56f6;
        }
      }
      puVar3 = *(uint **)(puVar4 + 2);
      puVar6 = puVar4;
    } while (*(uint **)(puVar4 + 2) != (uint *)0x0);
LAB_1000a56f6:
    cVar2 = operator<(param_3,(QString *)(puVar4 + 6));
    if (cVar2 == '\0') goto LAB_1000a570d;
  }
LAB_1000a5706:
  puVar4 = (uint *)(*plVar7 + 8);
LAB_1000a570d:
  puVar3 = (uint *)*plVar7;
  if (1 < *puVar3) {
    FUN_1000a5ea0(plVar7);
    puVar3 = (uint *)*plVar7;
  }
  if (puVar3 + 2 != puVar4) {
    uVar5 = 0;
    if (*(long *)(puVar4 + 8) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(puVar4 + 8) + 0x10);
    }
    FUN_1000a2000(uVar5,param_1);
  }
  return param_1;
}

