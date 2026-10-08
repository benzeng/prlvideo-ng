
void FUN_1000b0fc0(long param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  void **ppvVar11;
  long lVar12;
  _func_void_Node_ptr *p_Var13;
  undefined1 local_44 [4];
  long local_40;
  undefined1 local_31;
  
  plVar1 = (long *)(param_1 + 0x18);
  if (*(int *)(*param_2 + 4) == 0) {
    FUN_1000aaac0(&local_40,plVar1);
    uVar10 = (ulong)*(uint *)(local_40 + 8);
    lVar12 = 0;
    if ((int)*(uint *)(local_40 + 8) < *(int *)(local_40 + 0xc)) {
      do {
        FUN_1000b0fc0(param_1,local_40 + 0x10 + ((int)uVar10 + lVar12) * 8);
        lVar12 = lVar12 + 1;
        uVar10 = (ulong)*(int *)(local_40 + 8);
      } while (lVar12 < (long)((long)*(int *)(local_40 + 0xc) - uVar10));
    }
    FUN_100039a80(&local_40);
    return;
  }
  p_Var6 = (_func_void_Node_ptr_void_ptr *)FUN_1000aab80(plVar1);
  p_Var7 = (_func_void_Node_ptr_void_ptr *)*plVar1;
  if (*(uint *)(p_Var7 + 0x10) < 2) goto LAB_1000b104d;
  p_Var7 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var7,FUN_1000abc20,0xab020,0x20);
  p_Var13 = (_func_void_Node_ptr *)*plVar1;
  if (*(int *)(p_Var13 + 0x10) != -1) {
    if (*(int *)(p_Var13 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var13 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      local_31 = *(int *)pcVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b104a;
      p_Var13 = (_func_void_Node_ptr *)*plVar1;
    }
    QHashData::free_helper(p_Var13);
  }
LAB_1000b104a:
  *plVar1 = (long)p_Var7;
LAB_1000b104d:
  if (p_Var7 != p_Var6) {
    ppvVar11 = (void **)(p_Var6 + 0x18);
    puVar9 = *(uint **)(p_Var6 + 0x18);
    if (1 < *puVar9) {
      FUN_1000abfa0(ppvVar11,puVar9[1]);
      puVar9 = *ppvVar11;
    }
    puVar8 = puVar9 + (long)(int)puVar9[2] * 2 + 4;
    while( true ) {
      if (1 < *puVar9) {
        FUN_1000abfa0(ppvVar11,puVar9[1]);
        puVar9 = *ppvVar11;
      }
      if (puVar9 + (long)(int)puVar9[3] * 2 + 4 == puVar8) break;
      puVar4 = *(undefined4 **)puVar8;
      iVar5 = _GetProcessPID(puVar4,local_44);
      if (iVar5 == 0) {
        puVar8 = puVar8 + 2;
        puVar9 = *ppvVar11;
      }
      else {
        if (1 < DAT_10230ffd0) {
          FUN_100df99c0("SGAC","prl_client_app",2,"Helper with psn={%u, %u} not running anymore",
                        *puVar4,puVar4[1]);
        }
        puVar9 = *ppvVar11;
        if (1 < *puVar9) {
          uVar3 = puVar9[2];
          FUN_1000abfa0(ppvVar11,puVar9[1]);
          puVar8 = (uint *)((long)*ppvVar11 +
                           ((long)(int)((ulong)((long)puVar8 - (long)(puVar9 + (ulong)uVar3 * 2 + 4)
                                               ) >> 3) + (long)*(int *)((long)*ppvVar11 + 8)) * 8 +
                           0x10);
        }
        if (*(void **)puVar8 != (void *)0x0) {
          operator_delete(*(void **)puVar8);
        }
        puVar8 = (uint *)QListData::erase(ppvVar11);
        puVar9 = *ppvVar11;
      }
    }
    if (puVar9[3] == puVar9[2]) {
      FUN_1000aac60(plVar1,p_Var6);
    }
  }
  return;
}

