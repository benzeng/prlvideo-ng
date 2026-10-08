
undefined8 FUN_100a3e050(long param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  Node *pNVar4;
  Node *pNVar5;
  undefined8 *puVar6;
  _func_void_Node_ptr *p_Var7;
  long *plVar8;
  undefined1 local_38 [8];
  
  FUN_100a400f0(param_3);
  if (*(char *)(param_1 + 0x28) == '\0') {
    return 0;
  }
  lVar2 = *param_2;
  iVar3 = QString::compare_helper
                    (*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4),"http",0xffffffff,1)
  ;
  if (iVar3 == 0) {
LAB_100a3e262:
    plVar8 = (long *)(param_1 + 0x30);
  }
  else {
    lVar2 = *param_2;
    iVar3 = QString::compare_helper
                      (*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4),"https",0xffffffff
                       ,1);
    if (iVar3 == 0) goto LAB_100a3e262;
    lVar2 = *param_2;
    iVar3 = QString::compare_helper
                      (*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4),"ftp",0xffffffff,1
                      );
    if (iVar3 == 0) {
      plVar8 = (long *)(param_1 + 0x38);
    }
    else {
      lVar2 = *param_2;
      iVar3 = QString::compare_helper
                        (*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4),"mailto",
                         0xffffffff,1);
      if (iVar3 == 0) {
        plVar8 = (long *)(param_1 + 0x40);
      }
      else {
        lVar2 = *param_2;
        iVar3 = QString::compare_helper
                          (*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4),"telnet",
                           0xffffffff,1);
        if (iVar3 != 0) {
          lVar2 = *param_2;
          iVar3 = QString::compare_helper
                            (*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4),"ssh",
                             0xffffffff,1);
          if (iVar3 != 0) {
            lVar2 = *param_2;
            iVar3 = QString::compare_helper
                              (*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4),"feed",
                               0xffffffff,1);
            if (iVar3 != 0) {
              lVar2 = *param_2;
              iVar3 = QString::compare_helper
                                (*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4),"feeds",
                                 0xffffffff,1);
              if (iVar3 != 0) {
                lVar2 = *param_2;
                iVar3 = QString::compare_helper
                                  (*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4),
                                   "outlookfeed",0xffffffff,1);
                if (iVar3 != 0) {
                  lVar2 = *param_2;
                  iVar3 = QString::compare_helper
                                    (*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4),
                                     "outlookfeeds",0xffffffff,1);
                  if (iVar3 != 0) {
                    lVar2 = *param_2;
                    iVar3 = QString::compare_helper
                                      (*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4),
                                       "news",0xffffffff,1);
                    if (iVar3 != 0) {
                      return 0;
                    }
                    plVar8 = (long *)(param_1 + 0x58);
                    goto LAB_100a3e27e;
                  }
                }
              }
            }
            plVar8 = (long *)(param_1 + 0x50);
            goto LAB_100a3e27e;
          }
        }
        plVar8 = (long *)(param_1 + 0x48);
      }
    }
  }
LAB_100a3e27e:
  pNVar4 = (Node *)*plVar8;
  if (*(uint *)(pNVar4 + 0x10) < 2) goto LAB_100a3e2e0;
  pNVar4 = (Node *)QHashData::detach_helper
                             ((_func_void_Node_ptr_void_ptr *)pNVar4,FUN_100a40260,0xa3f580,0x18);
  p_Var7 = (_func_void_Node_ptr *)*plVar8;
  if (*(int *)(p_Var7 + 0x10) != -1) {
    if (*(int *)(p_Var7 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var7 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100a3e2dc;
      p_Var7 = (_func_void_Node_ptr *)*plVar8;
    }
    QHashData::free_helper(p_Var7);
  }
LAB_100a3e2dc:
  *plVar8 = (long)pNVar4;
LAB_100a3e2e0:
  iVar3 = *(int *)(pNVar4 + 0x20);
  pNVar5 = pNVar4;
  if (iVar3 != 0) {
    puVar6 = *(undefined8 **)(pNVar4 + 8);
    do {
      pNVar5 = (Node *)*puVar6;
      if ((Node *)*puVar6 != pNVar4) break;
      iVar3 = iVar3 + -1;
      puVar6 = puVar6 + 1;
      pNVar5 = pNVar4;
    } while (iVar3 != 0);
  }
  do {
    if (1 < *(uint *)(pNVar4 + 0x10)) {
      pNVar4 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)pNVar4,FUN_100a40260,0xa3f580,0x18
                                 );
      p_Var7 = (_func_void_Node_ptr *)*plVar8;
      if (*(int *)(p_Var7 + 0x10) != -1) {
        if (*(int *)(p_Var7 + 0x10) != 0) {
          LOCK();
          pcVar1 = p_Var7 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          UNLOCK();
          if (*(int *)pcVar1 != 0) goto LAB_100a3e391;
          p_Var7 = (_func_void_Node_ptr *)*plVar8;
        }
        QHashData::free_helper(p_Var7);
      }
LAB_100a3e391:
      *plVar8 = (long)pNVar4;
    }
    if (pNVar5 == pNVar4) {
      return 1;
    }
    FUN_100a40280(param_3,pNVar5 + 0x10,local_38);
    pNVar5 = (Node *)QHashData::nextNode(pNVar5);
    pNVar4 = (Node *)*plVar8;
  } while( true );
}

