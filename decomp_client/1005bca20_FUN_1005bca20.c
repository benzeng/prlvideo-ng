
undefined8 * FUN_1005bca20(undefined8 *param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  QArrayData *local_50;
  int local_48;
  int *local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15d0;
  plVar6 = (long *)(param_2 + 0x140);
  FUN_1005bf8f0(&local_40,plVar6);
  puVar3 = PTR_shared_null_1021e15e8;
  puVar2 = PTR_shared_null_1021e1288;
  uVar5 = (ulong)(uint)local_40[2];
  if (local_40[2] < local_40[3]) {
    lVar7 = 0;
    auVar8._8_4_ = (int)PTR_shared_null_1021e1288;
    auVar8._0_8_ = PTR_shared_null_1021e1288;
    auVar8._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    auVar9._8_4_ = (int)PTR_shared_null_1021e15e8;
    auVar9._0_8_ = PTR_shared_null_1021e15e8;
    auVar9._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
    do {
      puVar1 = *(undefined8 **)(local_40 + ((int)uVar5 + lVar7) * 2 + 4);
      local_50 = (QArrayData *)*puVar1;
      if (1 < *(int *)local_50 + 1U) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + 1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
      }
      local_48 = *(int *)(puVar1 + 1);
      if (local_48 == param_3) {
        if (*(int *)(*plVar6 + 0x14) == 0) {
LAB_1005bcb10:
          local_b8 = 0xff;
          local_b4 = 0;
          local_b0 = 0;
          uStack_d0 = auVar8._8_8_;
          local_a8 = puVar2;
          uStack_a0 = uStack_d0;
          uStack_e0 = auVar9._8_8_;
          local_98 = puVar3;
          uStack_90 = uStack_e0;
          local_88 = 0;
          local_80 = PTR_shared_null_1021e1288;
          local_78 = 0;
          local_74 = 0;
          local_70 = 0;
          local_58 = 0;
          local_60 = 0;
          local_68 = 0;
        }
        else {
          plVar4 = (long *)FUN_100287910(plVar6,&local_50,0);
          if (*plVar4 == *plVar6) goto LAB_1005bcb10;
          FUN_100260700(&local_b8,*plVar4 + 0x20);
        }
        FUN_1002b5b50(param_1,&local_50,&local_b8);
        FUN_10005e410(&local_b8);
      }
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005bcbcc;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_1005bcbcc:
      lVar7 = lVar7 + 1;
      uVar5 = (ulong)local_40[2];
    } while (lVar7 < (long)((long)local_40[3] - uVar5));
  }
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    FUN_1005c0b70(&local_40,local_40);
  }
  return param_1;
}

