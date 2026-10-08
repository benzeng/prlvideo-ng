
undefined8 * FUN_1000a5770(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_60;
  undefined *local_58;
  undefined8 uStack_50;
  undefined *local_48;
  
  *param_1 = PTR_shared_null_1021e15e8;
  puVar5 = *(uint **)(param_2 + 0x10);
  puVar6 = (undefined8 *)(param_2 + 0x10);
  if (1 < *puVar5) {
    FUN_1000a5ea0(puVar6);
    puVar5 = (uint *)*puVar6;
  }
  if (*(long *)(puVar5 + 4) == 0) {
    puVar3 = puVar5 + 2;
  }
  else {
    puVar3 = *(uint **)(puVar5 + 8);
  }
  if (1 < *puVar5) {
    FUN_1000a5ea0(puVar6);
    puVar5 = (uint *)*puVar6;
  }
  puVar1 = PTR_shared_null_1021e1288;
  if (puVar3 != puVar5 + 2) {
    auVar7._8_4_ = (int)PTR_shared_null_1021e1288;
    auVar7._0_8_ = PTR_shared_null_1021e1288;
    auVar7._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    do {
      uStack_60 = auVar7._8_8_;
      local_58 = puVar1;
      uStack_50 = uStack_60;
      local_48 = puVar1;
      uVar4 = 0;
      if (*(long *)(puVar3 + 8) != 0) {
        uVar4 = *(undefined8 *)(*(long *)(puVar3 + 8) + 0x10);
      }
      cVar2 = FUN_1000a2000(uVar4,&local_58);
      if (cVar2 != '\0') {
        FUN_1000a5ce0(param_1,&local_58);
      }
      FUN_1000a3d70(&local_58);
      puVar3 = (uint *)QMapNodeBase::nextNode();
    } while (puVar3 != puVar5 + 2);
  }
  return param_1;
}

