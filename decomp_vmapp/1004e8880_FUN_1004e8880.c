
long * FUN_1004e8880(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  uint uVar7;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_31;
  
  *param_1 = (long)param_1;
  param_1[1] = (long)param_1;
  param_1[2] = 0;
  uVar5 = FUN_1004e7cb0(param_2);
  puVar2 = PTR_shared_null_100ba20d0;
  if (uVar5 != 0) {
    uVar7 = 0;
    do {
      FUN_1004e8410(&local_48,param_2);
      plVar6 = operator_new(0x20);
      uVar3 = (undefined4)local_48;
      uVar4 = local_48._4_4_;
      local_48 = puVar2;
      *(undefined4 *)(plVar6 + 2) = uVar3;
      *(undefined4 *)((long)plVar6 + 0x14) = uVar4;
      *(undefined4 *)(plVar6 + 3) = uStack_40;
      *(undefined4 *)((long)plVar6 + 0x1c) = uStack_3c;
      plVar6[1] = (long)param_1;
      lVar1 = *param_1;
      *plVar6 = lVar1;
      *(long **)(lVar1 + 8) = plVar6;
      *param_1 = (long)plVar6;
      param_1[2] = param_1[2] + 1;
      if (*(int *)puVar2 != -1) {
        if (*(int *)puVar2 != 0) {
          LOCK();
          *(int *)puVar2 = *(int *)puVar2 + -1;
          local_31 = *(int *)puVar2 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004e8926;
        }
        QArrayData::deallocate((QArrayData *)puVar2,2,8);
      }
LAB_1004e8926:
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  return param_1;
}

