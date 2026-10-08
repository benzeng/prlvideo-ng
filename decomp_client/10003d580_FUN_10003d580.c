
void FUN_10003d580(long param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  _func_void_Node_ptr *p_Var6;
  _func_void_Node_ptr *local_20;
  undefined1 local_11;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x70))();
    local_20 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
    cVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x88))(*(long **)(param_1 + 0x18),&local_20);
    if (cVar3 == '\0') {
      FUN_100df99c0("SGA_SERVER","prl_client_app",0,"Cannot get binding info");
    }
    else {
      iVar4 = *(int *)(local_20 + 0x20);
      p_Var6 = local_20;
      if (iVar4 != 0) {
        plVar5 = *(long **)(local_20 + 8);
        do {
          p_Var6 = (_func_void_Node_ptr *)*plVar5;
          if ((_func_void_Node_ptr *)*plVar5 != local_20) break;
          iVar4 = iVar4 + -1;
          plVar5 = plVar5 + 1;
          p_Var6 = local_20;
        } while (iVar4 != 0);
      }
      uVar2 = *(undefined2 *)(p_Var6 + 0x18);
      (*(code *)PTR__objc_msgSend_1021e1c68)(DAT_102311d98,PTR_s_assignPort__1022699c0,uVar2);
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("SGA_SERVER","prl_client_app",2,"Server port %u stored in the shared memory",
                      uVar2);
      }
    }
    if (*(int *)(local_20 + 0x10) != -1) {
      if (*(int *)(local_20 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_20 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) {
          return;
        }
        local_11 = 0;
      }
      QHashData::free_helper(local_20);
    }
  }
  return;
}

