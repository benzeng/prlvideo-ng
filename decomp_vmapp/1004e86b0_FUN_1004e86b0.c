
long * FUN_1004e86b0(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  undefined *local_78;
  long local_70;
  long local_68;
  undefined2 local_60;
  undefined *local_58;
  long local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  *param_1 = (long)param_1;
  param_1[1] = (long)param_1;
  param_1[2] = 0;
  uVar3 = FUN_1004e7cb0(param_2);
  puVar2 = PTR_shared_null_100ba20d0;
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      FUN_1004e84e0(&local_78,param_2,param_3);
      plVar4 = operator_new(0x50);
      plVar4[2] = (long)local_78;
      local_78 = puVar2;
      *(undefined2 *)(plVar4 + 5) = local_60;
      plVar4[4] = local_68;
      plVar4[3] = local_70;
      plVar4[6] = (long)local_58;
      local_58 = puVar2;
      *(undefined4 *)(plVar4 + 8) = local_48;
      plVar4[7] = local_50;
      *(undefined4 *)(plVar4 + 9) = local_40;
      plVar4[1] = (long)param_1;
      lVar1 = *param_1;
      *plVar4 = lVar1;
      *(long **)(lVar1 + 8) = plVar4;
      *param_1 = (long)plVar4;
      param_1[2] = param_1[2] + 1;
      if (*(int *)puVar2 != -1) {
        if (*(int *)puVar2 == 0) {
LAB_1004e8798:
          QArrayData::deallocate((QArrayData *)puVar2,2,8);
        }
        else {
          LOCK();
          *(int *)puVar2 = *(int *)puVar2 + -1;
          local_31 = *(int *)puVar2 != 0;
          UNLOCK();
          if (!(bool)local_31) goto LAB_1004e8798;
        }
        if (*(int *)puVar2 != -1) {
          if (*(int *)puVar2 != 0) {
            LOCK();
            *(int *)puVar2 = *(int *)puVar2 + -1;
            local_31 = *(int *)puVar2 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004e87e0;
          }
          QArrayData::deallocate((QArrayData *)puVar2,2,8);
        }
      }
LAB_1004e87e0:
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  return param_1;
}

