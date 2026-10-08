
void FUN_1000a6b90(long *param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  uint *puVar5;
  ulong uVar6;
  long lVar7;
  _func_void_Node_ptr *p_Var8;
  code *pcVar9;
  long local_40;
  undefined1 local_31;
  
  plVar1 = param_1 + 3;
  if (*(int *)(*param_2 + 4) == 0) {
    FUN_1000aaac0(&local_40,plVar1);
    uVar6 = (ulong)*(uint *)(local_40 + 8);
    lVar7 = 0;
    if ((int)*(uint *)(local_40 + 8) < *(int *)(local_40 + 0xc)) {
      do {
        FUN_1000a6b90(param_1,local_40 + 0x10 + ((int)uVar6 + lVar7) * 8);
        lVar7 = lVar7 + 1;
        uVar6 = (ulong)*(int *)(local_40 + 8);
      } while (lVar7 < (long)((long)*(int *)(local_40 + 0xc) - uVar6));
    }
    FUN_100036370(&local_40);
    return;
  }
  p_Var3 = (_func_void_Node_ptr_void_ptr *)FUN_1000aab80(plVar1);
  p_Var4 = (_func_void_Node_ptr_void_ptr *)*plVar1;
  if (*(uint *)(p_Var4 + 0x10) < 2) goto LAB_1000a6c1f;
  p_Var4 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var4,FUN_1000abc20,0xab020,0x20);
  p_Var8 = (_func_void_Node_ptr *)*plVar1;
  if (*(int *)(p_Var8 + 0x10) != -1) {
    if (*(int *)(p_Var8 + 0x10) != 0) {
      LOCK();
      pcVar9 = p_Var8 + 0x10;
      *(int *)pcVar9 = *(int *)pcVar9 + -1;
      local_31 = *(int *)pcVar9 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000a6c1c;
      p_Var8 = (_func_void_Node_ptr *)*plVar1;
    }
    QHashData::free_helper(p_Var8);
  }
LAB_1000a6c1c:
  *plVar1 = (long)p_Var4;
LAB_1000a6c1f:
  if (p_Var4 != p_Var3) {
    puVar5 = *(uint **)(p_Var3 + 0x18);
    if ((int)puVar5[2] < (int)puVar5[3]) {
      pcVar9 = p_Var3 + 0x18;
      lVar7 = 0;
      do {
        pcVar2 = *(code **)(*param_1 + 0x70);
        if (1 < *puVar5) {
          FUN_1000abfa0(pcVar9,puVar5[1]);
          puVar5 = *(uint **)pcVar9;
        }
        (*pcVar2)(param_1,*(undefined8 *)(puVar5 + ((int)puVar5[2] + lVar7) * 2 + 4));
        lVar7 = lVar7 + 1;
        puVar5 = *(uint **)pcVar9;
      } while (lVar7 < (long)(int)puVar5[3] - (long)(int)puVar5[2]);
    }
    FUN_1000aac60(plVar1,p_Var3);
  }
  return;
}

