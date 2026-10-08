
void FUN_1000a7d00(QObject *param_1)

{
  QObject *pQVar1;
  code *pcVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  Node *pNVar7;
  Node *pNVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  _func_void_Node_ptr *p_Var11;
  bool bVar12;
  long local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  uint local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f8900;
  pQVar1 = param_1 + 0x10;
  pNVar7 = *(Node **)(param_1 + 0x10);
  if (*(uint *)(pNVar7 + 0x10) < 2) goto LAB_1000a7d89;
  pNVar7 = (Node *)QHashData::detach_helper
                             ((_func_void_Node_ptr_void_ptr *)pNVar7,FUN_1000aaf90,0xaafd0,0x20);
  p_Var11 = *(_func_void_Node_ptr **)pQVar1;
  if (*(int *)(p_Var11 + 0x10) != -1) {
    if (*(int *)(p_Var11 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var11 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      local_31 = *(int *)pcVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000a7d85;
      p_Var11 = *(_func_void_Node_ptr **)pQVar1;
    }
    QHashData::free_helper(p_Var11);
  }
LAB_1000a7d85:
  *(Node **)pQVar1 = pNVar7;
LAB_1000a7d89:
  iVar5 = *(int *)(pNVar7 + 0x20);
  pNVar8 = pNVar7;
  if (iVar5 != 0) {
    puVar10 = *(undefined8 **)(pNVar7 + 8);
    do {
      pNVar8 = (Node *)*puVar10;
      if ((Node *)*puVar10 != pNVar7) break;
      iVar5 = iVar5 + -1;
      puVar10 = puVar10 + 1;
      pNVar8 = pNVar7;
    } while (iVar5 != 0);
  }
  do {
    if (1 < *(uint *)(pNVar7 + 0x10)) {
      pNVar7 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)pNVar7,FUN_1000aaf90,0xaafd0,0x20)
      ;
      p_Var11 = *(_func_void_Node_ptr **)pQVar1;
      if (*(int *)(p_Var11 + 0x10) != -1) {
        if (*(int *)(p_Var11 + 0x10) != 0) {
          LOCK();
          pcVar2 = p_Var11 + 0x10;
          *(int *)pcVar2 = *(int *)pcVar2 + -1;
          local_31 = *(int *)pcVar2 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000a7e26;
          p_Var11 = *(_func_void_Node_ptr **)pQVar1;
        }
        QHashData::free_helper(p_Var11);
      }
LAB_1000a7e26:
      *(Node **)pQVar1 = pNVar7;
    }
    if (pNVar7 == pNVar8) break;
    if (0 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("SGAD","prl_client_app",1,
                    "Warning: client for vmUuid=\"%s\" is still alive! Finish him!",
                    local_40 + *(long *)(local_40 + 0x10));
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000a7e9f;
        }
        QArrayData::deallocate(local_40,1,8);
      }
    }
LAB_1000a7e9f:
    if (*(long **)(pNVar8 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(pNVar8 + 0x18) + 0x20))();
    }
    pNVar8 = (Node *)QHashData::nextNode(pNVar8);
    pNVar7 = *(Node **)pQVar1;
  } while( true );
  FUN_1000aa570(pQVar1);
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1000a6b90(param_1,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000a7f57;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000a7f57:
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x20))();
  }
  uVar9 = FUN_100152280();
  FUN_100154d10(&local_70,uVar9);
  FUN_100062ec0(&local_68,&local_70);
  local_60 = local_68 + (long)local_68[2] * 2 + 4;
  local_58 = local_68 + (long)local_68[3] * 2 + 4;
  local_50 = 1;
  if (*local_70 == -1) {
LAB_1000a7fe6:
    do {
      if (local_60 == local_58) break;
      piVar3 = (int *)**(undefined8 **)local_60;
      lVar4 = (*(undefined8 **)local_60)[1];
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        local_31 = *piVar3 != 0;
        UNLOCK();
      }
      if (local_50 != 0) {
        if (((piVar3 != (int *)0x0) && (lVar4 != 0)) && (piVar3[1] != 0)) {
          FUN_10015aa20(&local_78);
          _PrlSrv_UnregEventHandler(local_78,FUN_1000a7520,param_1);
          if (local_78 != 0) {
            _PrlHandle_Free();
          }
        }
        local_50 = 0;
      }
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + -1;
        local_31 = *piVar3 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar3);
        }
      }
      local_60 = local_60 + 2;
      uVar6 = local_50 ^ 1;
      bVar12 = local_50 != 1;
      local_50 = uVar6;
    } while (bVar12);
  }
  else {
    if (*local_70 == 0) {
LAB_1000a7fd2:
      FUN_100063050(&local_70,local_70);
    }
    else {
      LOCK();
      *local_70 = *local_70 + -1;
      local_31 = *local_70 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1000a7fd2;
    }
    if (local_50 != 0) goto LAB_1000a7fe6;
  }
  if (*local_68 != -1) {
    if (*local_68 != 0) {
      LOCK();
      *local_68 = *local_68 + -1;
      local_31 = *local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000a80cc;
    }
    FUN_100063050(&local_68,local_68);
  }
LAB_1000a80cc:
  p_Var11 = *(_func_void_Node_ptr **)(param_1 + 0x20);
  if (*(int *)(p_Var11 + 0x10) != -1) {
    if (*(int *)(p_Var11 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var11 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      local_31 = *(int *)pcVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000a80fb;
      p_Var11 = *(_func_void_Node_ptr **)(param_1 + 0x20);
    }
    QHashData::free_helper(p_Var11);
  }
LAB_1000a80fb:
  p_Var11 = *(_func_void_Node_ptr **)(param_1 + 0x18);
  if (*(int *)(p_Var11 + 0x10) != -1) {
    if (*(int *)(p_Var11 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var11 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      local_31 = *(int *)pcVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000a812a;
      p_Var11 = *(_func_void_Node_ptr **)(param_1 + 0x18);
    }
    QHashData::free_helper(p_Var11);
  }
LAB_1000a812a:
  p_Var11 = *(_func_void_Node_ptr **)pQVar1;
  if (*(int *)(p_Var11 + 0x10) != -1) {
    if (*(int *)(p_Var11 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var11 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      local_31 = *(int *)pcVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000a8159;
      p_Var11 = *(_func_void_Node_ptr **)pQVar1;
    }
    QHashData::free_helper(p_Var11);
  }
LAB_1000a8159:
  QObject::~QObject(param_1);
  return;
}

