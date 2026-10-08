
void FUN_100035670(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  int iVar2;
  _func_void_Node_ptr *p_Var3;
  _func_void_Node_ptr *p_Var4;
  void *pvVar5;
  undefined8 uVar6;
  long *plVar7;
  bool bVar8;
  _func_void_Node_ptr *local_58;
  void *local_50;
  _func_void_Node_ptr *local_48;
  _func_void_Node_ptr *local_40;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0x39) == '\0') {
    return;
  }
  FUN_100034d30(&local_40);
  if (*(uint *)(local_40 + 0x20) == 0) {
    bVar8 = false;
  }
  else {
    p_Var3 = *(_func_void_Node_ptr **)
              (*(long *)(local_40 + 8) +
              ((ulong)(*(uint *)(local_40 + 0x24) ^ param_3) % (ulong)*(uint *)(local_40 + 0x20)) *
              8);
    if (p_Var3 != local_40) {
LAB_1000356d0:
      if ((*(uint *)(p_Var3 + 8) != (*(uint *)(local_40 + 0x24) ^ param_3)) ||
         (*(uint *)(p_Var3 + 0xc) != param_3)) goto LAB_1000356db;
      if (p_Var3 == local_40) {
        bVar8 = false;
      }
      else {
        FUN_100034d30(&local_48);
        p_Var3 = local_48;
        if (*(uint *)(local_48 + 0x20) != 0) {
          for (p_Var4 = *(_func_void_Node_ptr **)
                         (*(long *)(local_48 + 8) +
                         ((ulong)(*(uint *)(local_48 + 0x24) ^ param_4) %
                         (ulong)*(uint *)(local_48 + 0x20)) * 8);
              (p_Var3 = local_48, p_Var4 != local_48 &&
              ((*(uint *)(p_Var4 + 8) != (*(uint *)(local_48 + 0x24) ^ param_4) ||
               (p_Var3 = p_Var4, *(uint *)(p_Var4 + 0xc) != param_4))));
              p_Var4 = *(_func_void_Node_ptr **)p_Var4) {
          }
        }
        bVar8 = p_Var3 == local_48;
        if (*(int *)(local_48 + 0x10) != -1) {
          if (*(int *)(local_48 + 0x10) != 0) {
            LOCK();
            pcVar1 = local_48 + 0x10;
            *(int *)pcVar1 = *(int *)pcVar1 + -1;
            local_31 = *(int *)pcVar1 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000357ce;
          }
          QHashData::free_helper(local_48);
        }
      }
      goto LAB_1000357ce;
    }
    bVar8 = false;
  }
LAB_1000357ce:
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000357f8;
    }
    QHashData::free_helper(local_40);
  }
LAB_1000357f8:
  if (bVar8) {
    pvVar5 = operator_new(0x38);
    uVar6 = FUN_100152280();
    uVar6 = FUN_1001548f0(uVar6,param_2);
    FUN_1000371c0(pvVar5,uVar6,param_1);
    local_50 = pvVar5;
    FUN_1000360d0(param_1 + 0x18,param_2,&local_50);
    goto LAB_1000358d4;
  }
  FUN_100034d30(&local_58);
  p_Var3 = local_58;
  if (*(uint *)(local_58 + 0x20) != 0) {
    for (p_Var4 = *(_func_void_Node_ptr **)
                   (*(long *)(local_58 + 8) +
                   ((ulong)(*(uint *)(local_58 + 0x24) ^ param_3) %
                   (ulong)*(uint *)(local_58 + 0x20)) * 8);
        (p_Var3 = local_58, p_Var4 != local_58 &&
        ((*(uint *)(p_Var4 + 8) != (*(uint *)(local_58 + 0x24) ^ param_3) ||
         (p_Var3 = p_Var4, *(uint *)(p_Var4 + 0xc) != param_3))));
        p_Var4 = *(_func_void_Node_ptr **)p_Var4) {
    }
  }
  if (*(int *)(local_58 + 0x10) != -1) {
    if (*(int *)(local_58 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_58 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000358b5;
    }
    QHashData::free_helper(local_58);
  }
LAB_1000358b5:
  if ((p_Var3 == local_58) &&
     (plVar7 = (long *)FUN_100036410(param_1 + 0x18,param_2), plVar7 != (long *)0x0)) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
LAB_1000358d4:
  iVar2 = *(int *)(*(long *)(param_1 + 0x20) + 0x10);
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x14) == 0) {
    if (-1 < iVar2) {
      QTimer::stop();
      FUN_1000351d0(param_1);
    }
  }
  else if (iVar2 < 0) {
    QTimer::start((int)*(long *)(param_1 + 0x20));
  }
  return;
LAB_1000356db:
  p_Var3 = *(_func_void_Node_ptr **)p_Var3;
  if (p_Var3 == local_40) goto code_r0x0001000356e3;
  goto LAB_1000356d0;
code_r0x0001000356e3:
  bVar8 = false;
  goto LAB_1000357ce;
}

