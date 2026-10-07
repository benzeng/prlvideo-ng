
void FUN_1004eb600(long *param_1,undefined1 (*param_2) [16])

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar6 = operator_new(0x70);
  lVar1 = *(long *)(*param_2 + 8);
  plVar6[2] = *(long *)*param_2;
  plVar6[3] = lVar1;
  puVar5 = PTR_shared_null_100ba20d0;
  auVar8._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar8._0_8_ = PTR_shared_null_100ba20d0;
  auVar8._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  *param_2 = auVar8;
  lVar1 = *(long *)param_2[1];
  lVar2 = *(long *)(param_2[1] + 8);
  *(undefined **)param_2[1] = puVar5;
  plVar6[4] = lVar1;
  plVar6[5] = lVar2;
  *(undefined **)(param_2[1] + 8) = puVar5;
  lVar1 = *(long *)param_2[2];
  plVar6[7] = *(long *)(param_2[2] + 8);
  plVar6[6] = lVar1;
  plVar7 = plVar6 + 8;
  plVar6[8] = (long)plVar7;
  plVar6[9] = (long)plVar7;
  plVar6[10] = 0;
  lVar1 = *(long *)param_2[4];
  if (lVar1 != 0) {
    lVar2 = *(long *)param_2[3];
    plVar3 = *(long **)(param_2[3] + 8);
    lVar4 = *plVar3;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar2 + 8);
    **(long **)(lVar2 + 8) = lVar4;
    lVar4 = plVar6[8];
    *(long **)(lVar4 + 8) = plVar3;
    *plVar3 = lVar4;
    plVar6[8] = lVar2;
    *(long **)(lVar2 + 8) = plVar7;
    plVar6[10] = lVar1;
    *(undefined8 *)param_2[4] = 0;
  }
  plVar7 = plVar6 + 0xb;
  plVar6[0xb] = (long)plVar7;
  plVar6[0xc] = (long)plVar7;
  plVar6[0xd] = 0;
  lVar1 = *(long *)(param_2[5] + 8);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_2[4] + 8);
    plVar3 = *(long **)param_2[5];
    lVar4 = *plVar3;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar2 + 8);
    **(long **)(lVar2 + 8) = lVar4;
    lVar4 = plVar6[0xb];
    *(long **)(lVar4 + 8) = plVar3;
    *plVar3 = lVar4;
    plVar6[0xb] = lVar2;
    *(long **)(lVar2 + 8) = plVar7;
    plVar6[0xd] = lVar1;
    *(undefined8 *)(param_2[5] + 8) = 0;
  }
  plVar6[1] = (long)param_1;
  lVar1 = *param_1;
  *plVar6 = lVar1;
  *(long **)(lVar1 + 8) = plVar6;
  *param_1 = (long)plVar6;
  param_1[2] = param_1[2] + 1;
  return;
}

