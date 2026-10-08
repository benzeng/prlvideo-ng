
long * FUN_100061150(long *param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  int *piVar4;
  _func_void_Node_ptr *p_Var5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  long lVar7;
  undefined8 *puVar8;
  _func_void_Node_ptr *local_40;
  _func_void_Node_ptr_void_ptr *local_38;
  int *local_30;
  undefined1 local_21;
  
  FUN_1000613c0(&local_40);
  if ((*(int *)(local_40 + 0x14) != 0) && (*(uint *)(local_40 + 0x20) != 0)) {
    for (p_Var5 = *(_func_void_Node_ptr **)
                   (*(long *)(local_40 + 8) +
                   ((ulong)(*(uint *)(local_40 + 0x24) ^ param_2) %
                   (ulong)*(uint *)(local_40 + 0x20)) * 8); p_Var5 != local_40;
        p_Var5 = *(_func_void_Node_ptr **)p_Var5) {
      if ((*(uint *)(p_Var5 + 8) == (*(uint *)(local_40 + 0x24) ^ param_2)) &&
         (*(uint *)(p_Var5 + 0xc) == param_2)) {
        if (p_Var5 != local_40) {
          p_Var3 = *(_func_void_Node_ptr_void_ptr **)(p_Var5 + 0x10);
          if (1 < *(int *)(p_Var3 + 0x10) + 1U) {
            LOCK();
            pcVar1 = p_Var3 + 0x10;
            *(int *)pcVar1 = *(int *)pcVar1 + 1;
            local_21 = *(int *)pcVar1 != 0;
            UNLOCK();
          }
          p_Var6 = p_Var3;
          if ((((byte)p_Var3[0x28] & 1) != 0) || (*(uint *)(p_Var3 + 0x10) < 2)) goto LAB_100061244;
          local_38 = p_Var3;
          p_Var6 = (_func_void_Node_ptr_void_ptr *)
                   QHashData::detach_helper(p_Var3,FUN_100062bb0,0x62be0,0x18);
          if (*(int *)(p_Var3 + 0x10) == -1) goto LAB_100061244;
          if (*(int *)(p_Var3 + 0x10) != 0) {
            LOCK();
            pcVar1 = p_Var3 + 0x10;
            *(int *)pcVar1 = *(int *)pcVar1 + -1;
            local_21 = *(int *)pcVar1 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100061244;
          }
          QHashData::free_helper((_func_void_Node_ptr *)p_Var3);
          goto LAB_100061244;
        }
        break;
      }
    }
  }
  local_38 = (_func_void_Node_ptr_void_ptr *)PTR_shared_null_1021e15d0;
  p_Var6 = local_38;
LAB_100061244:
  local_38 = p_Var6;
  FUN_1000625e0(&local_30,&local_38);
  *param_1 = (long)local_30;
  if (*local_30 != -1) {
    if (*local_30 == 0) {
      QListData::detach((int)param_1);
      lVar7 = *param_1;
      iVar2 = *(int *)(lVar7 + 8);
      if (iVar2 != *(int *)(lVar7 + 0xc)) {
        local_30 = local_30 + (long)local_30[2] * 2 + 4;
        puVar8 = (undefined8 *)(lVar7 + 0x10 + (long)iVar2 * 8);
        lVar7 = (long)*(int *)(lVar7 + 0xc) * 8 + (long)iVar2 * -8;
        do {
          piVar4 = *(int **)local_30;
          *puVar8 = piVar4;
          if (1 < *piVar4 + 1U) {
            LOCK();
            *piVar4 = *piVar4 + 1;
            local_21 = *piVar4 != 0;
            UNLOCK();
          }
          puVar8 = puVar8 + 1;
          local_30 = local_30 + 2;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    else {
      LOCK();
      *local_30 = *local_30 + 1;
      local_21 = *local_30 != 0;
      UNLOCK();
    }
  }
  FUN_100039a80(&local_30);
  if (*(int *)(local_38 + 0x10) != -1) {
    if (*(int *)(local_38 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_38 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_21 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100061303;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_38);
  }
LAB_100061303:
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_21 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_21) {
        return param_1;
      }
    }
    QHashData::free_helper(local_40);
  }
  return param_1;
}

