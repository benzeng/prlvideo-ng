
void FUN_1000a9a70(undefined8 *param_1,long param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  Node *pNVar6;
  Node *pNVar7;
  long lVar8;
  undefined8 *puVar9;
  _func_void_Node_ptr *p_Var10;
  QArrayData *local_40;
  
  pNVar6 = *(Node **)(param_2 + 0x18);
  if (*(uint *)(pNVar6 + 0x10) < 2) goto LAB_1000a9afa;
  pNVar6 = (Node *)QHashData::detach_helper
                             ((_func_void_Node_ptr_void_ptr *)pNVar6,FUN_1000abc20,0xab020,0x20);
  p_Var10 = *(_func_void_Node_ptr **)(param_2 + 0x18);
  if (*(int *)(p_Var10 + 0x10) != -1) {
    if (*(int *)(p_Var10 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var10 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1000a9aeb;
      p_Var10 = *(_func_void_Node_ptr **)(param_2 + 0x18);
    }
    QHashData::free_helper(p_Var10);
  }
LAB_1000a9aeb:
  *(Node **)(param_2 + 0x18) = pNVar6;
LAB_1000a9afa:
  iVar5 = *(int *)(pNVar6 + 0x20);
  pNVar7 = pNVar6;
  if (iVar5 != 0) {
    puVar9 = *(undefined8 **)(pNVar6 + 8);
    do {
      pNVar7 = (Node *)*puVar9;
      if ((Node *)*puVar9 != pNVar6) break;
      iVar5 = iVar5 + -1;
      puVar9 = puVar9 + 1;
      pNVar7 = pNVar6;
    } while (iVar5 != 0);
  }
  do {
    if (1 < *(uint *)(pNVar6 + 0x10)) {
      pNVar6 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)pNVar6,FUN_1000abc20,0xab020,0x20)
      ;
      p_Var10 = *(_func_void_Node_ptr **)(param_2 + 0x18);
      if (*(int *)(p_Var10 + 0x10) != -1) {
        if (*(int *)(p_Var10 + 0x10) != 0) {
          LOCK();
          pcVar1 = p_Var10 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          UNLOCK();
          if (*(int *)pcVar1 != 0) goto LAB_1000a9b9c;
          p_Var10 = *(_func_void_Node_ptr **)(param_2 + 0x18);
        }
        QHashData::free_helper(p_Var10);
      }
LAB_1000a9b9c:
      *(Node **)(param_2 + 0x18) = pNVar6;
    }
    if (pNVar6 == pNVar7) {
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("SGAD","prl_client_app",3,"psn={%u, %u} not attached to any vmUuid",*param_3,
                      param_3[1]);
      }
      *param_1 = PTR_shared_null_1021e1288;
      return;
    }
    lVar8 = *(long *)(pNVar7 + 0x18);
    iVar5 = *(int *)(lVar8 + 8);
    if (*(int *)(lVar8 + 0xc) != iVar5) {
      puVar9 = (undefined8 *)(lVar8 + 0x10 + (long)iVar5 * 8);
      iVar2 = *param_3;
      iVar3 = param_3[1];
      lVar8 = (long)*(int *)(lVar8 + 0xc) * 8 + (long)iVar5 * -8;
      do {
        if ((iVar3 == ((int *)*puVar9)[1]) && (iVar2 == *(int *)*puVar9)) {
          if (2 < DAT_10230ffd0) {
            QString::toUtf8();
            FUN_100df99c0("SGAD","prl_client_app",3,"psn={%u, %u} attached to vmUuid=\"%s\"",iVar2,
                          iVar3,local_40 + *(long *)(local_40 + 0x10));
            if (*(int *)local_40 != -1) {
              if (*(int *)local_40 != 0) {
                LOCK();
                *(int *)local_40 = *(int *)local_40 + -1;
                UNLOCK();
                if (*(int *)local_40 != 0) goto LAB_1000a9c7c;
              }
              QArrayData::deallocate(local_40,1,8);
            }
          }
LAB_1000a9c7c:
          piVar4 = *(int **)(pNVar7 + 0x10);
          *param_1 = piVar4;
          if (*piVar4 + 1U < 2) {
            return;
          }
          LOCK();
          *piVar4 = *piVar4 + 1;
          UNLOCK();
          return;
        }
        puVar9 = puVar9 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    pNVar7 = (Node *)QHashData::nextNode(pNVar7);
    pNVar6 = *(Node **)(param_2 + 0x18);
  } while( true );
}

