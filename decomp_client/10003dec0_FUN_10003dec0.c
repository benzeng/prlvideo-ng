
void FUN_10003dec0(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined4 param_5)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  long lVar6;
  _func_void_Node_ptr *p_Var7;
  long *local_d0;
  undefined8 local_c8;
  ulong uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long *local_40;
  undefined1 local_31;
  
  plVar1 = (long *)(param_1 + 0x10);
  p_Var4 = (_func_void_Node_ptr_void_ptr *)FUN_10003ebe0(plVar1);
  p_Var5 = *(_func_void_Node_ptr_void_ptr **)(param_1 + 0x10);
  if (*(uint *)(p_Var5 + 0x10) < 2) goto LAB_10003df65;
  p_Var5 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var5,FUN_10003f440,0x3f3a0,0x20);
  p_Var7 = (_func_void_Node_ptr *)*plVar1;
  if (*(int *)(p_Var7 + 0x10) != -1) {
    if (*(int *)(p_Var7 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var7 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      UNLOCK();
      local_c8 = CONCAT71(local_c8._1_7_,*(int *)pcVar2 != 0);
      if (*(int *)pcVar2 != 0) goto LAB_10003df61;
      p_Var7 = (_func_void_Node_ptr *)*plVar1;
    }
    QHashData::free_helper(p_Var7);
  }
LAB_10003df61:
  *plVar1 = (long)p_Var5;
LAB_10003df65:
  if (p_Var5 != p_Var4) {
    lVar6 = 0;
    FUN_100a68d20(&local_40,0,2,&DAT_1023117c8,1);
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 9;
    uStack_c0 = (ulong)param_3;
    if (local_40 != (long *)0x0) {
      lVar6 = local_40[2];
    }
    FUN_100a68f60(lVar6,0,0,&local_c8,0x80);
    lVar6 = 0;
    if (local_40 != (long *)0x0) {
      lVar6 = local_40[2];
    }
    FUN_100a69140(lVar6,1,0,param_4,param_5);
    (**(code **)(**(long **)(param_1 + 0x18) + 0x120))
              (&local_d0,*(long **)(param_1 + 0x18),param_2,&local_40);
    plVar1 = local_d0;
    if ((local_d0 != (long *)0x0) && (local_d0[2] != 0)) {
      local_31 = 0;
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
      FUN_100a6fb80(local_d0[2],0xffffffff,&local_31);
      LOCK();
      plVar3 = plVar1 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    if ((local_d0 != (long *)0x0) &&
       ((local_d0[2] == 0 || (FUN_100a6fe10(local_d0[2]), local_d0 != (long *)0x0)))) {
      LOCK();
      plVar1 = local_d0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_d0 + 0x10))();
      }
    }
    if (local_40 != (long *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
    return;
  }
  return;
}

