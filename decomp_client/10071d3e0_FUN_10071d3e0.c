
void FUN_10071d3e0(long param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined1 uVar5;
  long *plVar6;
  undefined8 uVar7;
  Data *pDVar8;
  QKeySequence *pQVar9;
  _func_void_Node_ptr *p_Var10;
  long lVar11;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  long *local_a0;
  Data *local_98;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  int local_78;
  uint local_6c;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  int local_48;
  _func_void_Node_ptr *local_40;
  undefined1 local_31;
  
  FUN_10071e790();
  cVar4 = FUN_10071f870(param_1);
  if (cVar4 == '\0') {
    return;
  }
  FUN_10071eb40(&local_40,param_1);
  FUN_100721910(&local_68,&local_40);
  FUN_1000722f0(&local_60,&local_68);
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_48 = 1;
  if (*(int *)local_68 == -1) {
LAB_10071d4c9:
    if (local_58 != local_50) {
      do {
        uVar3 = **(uint **)local_58;
        local_6c = uVar3;
        if ((*(int *)(local_40 + 0x14) != 0) && (*(uint *)(local_40 + 0x20) != 0)) {
          for (p_Var10 = *(_func_void_Node_ptr **)
                          (*(long *)(local_40 + 8) +
                          ((ulong)(*(uint *)(local_40 + 0x24) ^ uVar3) %
                          (ulong)*(uint *)(local_40 + 0x20)) * 8); p_Var10 != local_40;
              p_Var10 = *(_func_void_Node_ptr **)p_Var10) {
            if ((*(uint *)(p_Var10 + 8) == (*(uint *)(local_40 + 0x24) ^ uVar3)) &&
               (uVar3 == *(uint *)(p_Var10 + 0xc))) {
              if (p_Var10 != local_40) {
                FUN_1005607f0(&local_98,p_Var10 + 0x10);
                goto LAB_10071d557;
              }
              break;
            }
          }
        }
        local_98 = (Data *)PTR_shared_null_1021e15e8;
LAB_10071d557:
        FUN_1005607f0(&local_90,&local_98);
        pDVar8 = local_98;
        local_88 = local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10;
        local_80 = local_90 + (long)*(int *)(local_90 + 0xc) * 8 + 0x10;
        local_78 = 1;
        if (*(int *)local_98 == -1) {
LAB_10071d623:
          for (; pDVar8 = local_88, local_88 != local_80; local_88 = local_88 + 8) {
            plVar6 = operator_new(0x30);
            local_a8 = (QArrayData *)PTR_shared_null_1021e1288;
            uVar5 = FUN_10071c5d0(param_1,&local_a8);
            uVar7 = FUN_10071fac0(param_1,uVar5);
            FUN_1007232c0(plVar6,uVar7,param_1,uVar3);
            if (*(int *)local_a8 != -1) {
              if (*(int *)local_a8 != 0) {
                LOCK();
                *(int *)local_a8 = *(int *)local_a8 + -1;
                local_31 = *(int *)local_a8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10071d6a9;
              }
              QArrayData::deallocate(local_a8,2,8);
            }
LAB_10071d6a9:
            local_a0 = plVar6;
            cVar4 = FUN_100723350(plVar6,pDVar8,0);
            if (cVar4 == '\0') {
              FUN_1006946e0(&local_b8,uVar3);
              QString::toUtf8();
              FUN_100df99c0("","prl_client_app",0,
                            "KeyAction for %s was not added into hook (already exist or some other reason)."
                            ,local_b0 + *(long *)(local_b0 + 0x10));
              if (*(int *)local_b0 != -1) {
                if (*(int *)local_b0 != 0) {
                  LOCK();
                  *(int *)local_b0 = *(int *)local_b0 + -1;
                  local_31 = *(int *)local_b0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10071d771;
                }
                QArrayData::deallocate(local_b0,1,8);
              }
LAB_10071d771:
              if (*(int *)local_b8 != -1) {
                if (*(int *)local_b8 != 0) {
                  LOCK();
                  *(int *)local_b8 = *(int *)local_b8 + -1;
                  local_31 = *(int *)local_b8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10071d7a7;
                }
                QArrayData::deallocate(local_b8,2,8);
              }
LAB_10071d7a7:
              (**(code **)(*plVar6 + 8))(plVar6);
            }
            else {
              uVar7 = FUN_100721140(param_1 + 0x20,&local_6c);
              FUN_1007222d0(uVar7,&local_a0);
            }
            local_78 = 1;
          }
        }
        else {
          if (*(int *)local_98 == 0) {
LAB_10071d5bb:
            iVar2 = *(int *)(local_98 + 0xc);
            if (iVar2 != *(int *)(local_98 + 8)) {
              lVar11 = (long)*(int *)(local_98 + 8) * 8 + (long)iVar2 * -8;
              pQVar9 = (QKeySequence *)(local_98 + (long)iVar2 * 8 + 8);
              do {
                QKeySequence::~QKeySequence(pQVar9);
                pQVar9 = pQVar9 + -8;
                lVar11 = lVar11 + 8;
              } while (lVar11 != 0);
            }
            QListData::dispose(pDVar8);
          }
          else {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if (!(bool)local_31) goto LAB_10071d5bb;
          }
          if (local_78 != 0) goto LAB_10071d623;
        }
        pDVar8 = local_90;
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10071d841;
          }
          iVar2 = *(int *)(local_90 + 0xc);
          if (iVar2 != *(int *)(local_90 + 8)) {
            lVar11 = (long)*(int *)(local_90 + 8) * 8 + (long)iVar2 * -8;
            pQVar9 = (QKeySequence *)(local_90 + (long)iVar2 * 8 + 8);
            do {
              QKeySequence::~QKeySequence(pQVar9);
              pQVar9 = pQVar9 + -8;
              lVar11 = lVar11 + 8;
            } while (lVar11 != 0);
          }
          QListData::dispose(pDVar8);
        }
LAB_10071d841:
        local_58 = local_58 + 8;
        local_48 = 1;
      } while (local_58 != local_50);
    }
  }
  else {
    if (*(int *)local_68 == 0) {
LAB_10071d47c:
      iVar2 = *(int *)(local_68 + 0xc);
      if (iVar2 != *(int *)(local_68 + 8)) {
        lVar11 = (long)*(int *)(local_68 + 8) * 8 + (long)iVar2 * -8;
        pDVar8 = local_68 + (long)iVar2 * 8 + 8;
        do {
          if (*(void **)pDVar8 != (void *)0x0) {
            operator_delete(*(void **)pDVar8);
          }
          pDVar8 = pDVar8 + -8;
          lVar11 = lVar11 + 8;
        } while (lVar11 != 0);
      }
      QListData::dispose(local_68);
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_10071d47c;
    }
    if (local_48 != 0) goto LAB_10071d4c9;
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10071d8cf;
    }
    iVar2 = *(int *)(local_60 + 0xc);
    if (iVar2 != *(int *)(local_60 + 8)) {
      lVar11 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar2 * -8;
      pDVar8 = local_60 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar8 != (void *)0x0) {
          operator_delete(*(void **)pDVar8);
        }
        pDVar8 = pDVar8 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose(local_60);
  }
LAB_10071d8cf:
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_31 = 0;
    }
    QHashData::free_helper(local_40);
  }
  return;
}

