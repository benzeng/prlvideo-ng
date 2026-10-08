
void FUN_1000352c0(long param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  _func_void_Node_ptr *p_Var8;
  void *pvVar9;
  _func_void_Node_ptr *p_Var10;
  void *local_50;
  QArrayData *local_48;
  _func_void_Node_ptr *local_40;
  undefined1 local_31;
  
  uVar6 = FUN_100152280();
  uVar6 = FUN_1001554a0(uVar6);
  iVar3 = FUN_10015d3a0(uVar6);
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      uVar7 = FUN_10015d330(uVar6,iVar3);
      FUN_100034d30(&local_40);
      uVar4 = FUN_10018a9d0(uVar7);
      p_Var2 = local_40;
      p_Var10 = local_40;
      if (*(uint *)(local_40 + 0x20) != 0) {
        for (p_Var8 = *(_func_void_Node_ptr **)
                       (*(long *)(local_40 + 8) +
                       ((ulong)(*(uint *)(local_40 + 0x24) ^ uVar4) %
                       (ulong)*(uint *)(local_40 + 0x20)) * 8);
            (p_Var10 = local_40, p_Var8 != local_40 &&
            ((*(uint *)(p_Var8 + 8) != (*(uint *)(local_40 + 0x24) ^ uVar4) ||
             (p_Var10 = p_Var8, uVar4 != *(uint *)(p_Var8 + 0xc)))));
            p_Var8 = *(_func_void_Node_ptr **)p_Var8) {
        }
      }
      if (*(int *)(local_40 + 0x10) != -1) {
        if (*(int *)(local_40 + 0x10) != 0) {
          LOCK();
          pcVar1 = local_40 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_31 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000353ac;
        }
        QHashData::free_helper(local_40);
      }
LAB_1000353ac:
      if (p_Var10 != p_Var2) {
        FUN_100188480(&local_48,uVar7);
        pvVar9 = operator_new(0x38);
        FUN_1000371c0(pvVar9,uVar7,param_1);
        local_50 = pvVar9;
        FUN_1000360d0(param_1 + 0x18,&local_48,&local_50);
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10003541e;
          }
          QArrayData::deallocate(local_48,2,8);
        }
      }
LAB_10003541e:
      iVar3 = iVar3 + 1;
      iVar5 = FUN_10015d3a0(uVar6);
    } while (iVar3 < iVar5);
  }
  iVar3 = *(int *)(*(long *)(param_1 + 0x20) + 0x10);
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x14) == 0) {
    if (-1 < iVar3) {
      QTimer::stop();
      FUN_1000351d0(param_1);
    }
  }
  else if (iVar3 < 0) {
    QTimer::start((int)*(long *)(param_1 + 0x20));
  }
  return;
}

