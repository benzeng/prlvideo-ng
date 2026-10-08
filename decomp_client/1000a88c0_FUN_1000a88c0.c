
void FUN_1000a88c0(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  Node *pNVar9;
  Node *pNVar10;
  char *pcVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  _func_void_Node_ptr *p_Var15;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QString local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  Data *local_178;
  Data *local_170;
  Data *local_168;
  undefined4 local_160;
  QString local_158;
  long local_150;
  QArrayData *local_148;
  CVmEvent local_140 [224];
  QEvent local_60 [24];
  long *local_48;
  int local_3c;
  int local_38;
  undefined1 local_31;
  
  local_38 = 0;
  iVar5 = _PrlHandle_GetType(*param_2,&local_38);
  if (iVar5 != 0) {
    if (DAT_10230ffd0 < 1) {
      return;
    }
    pcVar11 = "PrlHandle_GetType call error, code %d";
LAB_1000a8918:
    FUN_100df99c0("SGAD","prl_client_app",1,pcVar11,iVar5);
    return;
  }
  if (local_38 != 0x10000012) {
    return;
  }
  iVar5 = _PrlEvent_GetType(*param_2,&local_3c);
  if (iVar5 != 0) {
    if (DAT_10230ffd0 < 1) {
      return;
    }
    pcVar11 = "PrlEvent_GetType call error, code %d";
    goto LAB_1000a8918;
  }
  if (local_3c != 0x186a3) {
    return;
  }
  lVar2 = *param_2;
  local_150 = lVar2;
  if (lVar2 != 0) {
    _PrlHandle_AddRef(lVar2);
  }
  FUN_1000a8740(&local_148);
  CVmEvent::CVmEvent(local_140,(QTypedArrayData<unsigned_short> *)&local_148);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000a89f2;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1000a89f2:
  if (lVar2 != 0) {
    _PrlHandle_Free(lVar2);
  }
  local_158.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_178 = (Data *)*local_48;
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 == 0) {
      QListData::detach((int)&local_178);
      lVar12 = (long)*(int *)(local_178 + 8);
      lVar2 = *local_48;
      if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_178 + lVar12 * 8) &&
         (lVar14 = *(int *)(local_178 + 0xc) - lVar12,
         lVar14 != 0 && lVar12 <= *(int *)(local_178 + 0xc))) {
        _memcpy(local_178 + lVar12 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8)
                ,lVar14 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + 1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
    }
  }
  local_170 = local_178 + (long)*(int *)(local_178 + 8) * 8 + 0x10;
  local_168 = local_178 + (long)*(int *)(local_178 + 0xc) * 8 + 0x10;
  uVar6 = 0;
  if (*(int *)(local_178 + 8) != *(int *)(local_178 + 0xc)) {
    uVar6 = 0;
    do {
      local_160 = 1;
      uVar3 = *(undefined8 *)local_170;
      CVmEventParameter::getParamName();
      iVar5 = QString::compare_helper
                        (local_180 + *(long *)(local_180 + 0x10),*(undefined4 *)(local_180 + 4),
                         "device_type",0xffffffff,1);
      if (*(int *)local_180 != -1) {
        if (*(int *)local_180 != 0) {
          LOCK();
          *(int *)local_180 = *(int *)local_180 + -1;
          local_31 = *(int *)local_180 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000a8b33;
        }
        QArrayData::deallocate(local_180,2,8);
      }
LAB_1000a8b33:
      if (iVar5 == 0) {
        CVmEventParameter::getParamValue();
        uVar6 = QString::toInt((bool *)&local_188,0);
        if (*(int *)local_188 != -1) {
          if (*(int *)local_188 != 0) {
            LOCK();
            *(int *)local_188 = *(int *)local_188 + -1;
            local_31 = *(int *)local_188 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000a8c80;
          }
          QArrayData::deallocate(local_188,2,8);
        }
      }
      else {
        CVmEventParameter::getParamName();
        iVar5 = QString::compare_helper
                          (local_190 + *(long *)(local_190 + 0x10),*(undefined4 *)(local_190 + 4),
                           "vm_config_dev_state",0xffffffff,1);
        if (*(int *)local_190 != -1) {
          if (*(int *)local_190 != 0) {
            LOCK();
            *(int *)local_190 = *(int *)local_190 + -1;
            local_31 = *(int *)local_190 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000a8bab;
          }
          QArrayData::deallocate(local_190,2,8);
        }
LAB_1000a8bab:
        if (iVar5 == 0) {
          FUN_1000aa610(&local_198,uVar3);
          QString::operator=(&local_158,&local_198);
          if (*(int *)local_198.field0_0x0 != -1) {
            if (*(int *)local_198.field0_0x0 != 0) {
              LOCK();
              *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
              local_31 = *(int *)local_198.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000a8c80;
            }
            QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
          }
        }
      }
LAB_1000a8c80:
      local_170 = local_170 + 8;
    } while (local_170 != local_168);
  }
  local_160 = 1;
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000a8cd5;
    }
    QListData::dispose(local_178);
  }
LAB_1000a8cd5:
  plVar8 = (long *)FUN_10010e020(uVar6,&local_158);
  if (plVar8 != (long *)0x0) {
    iVar5 = CVmDevice::getConnected();
    CVmDevice::getSystemName();
    iVar7 = (**(code **)(*plVar8 + 0x68))(plVar8);
    if ((iVar5 != 1) && (iVar7 == 5)) {
      pNVar9 = (Node *)param_1[2];
      if (*(uint *)(pNVar9 + 0x10) < 2) goto LAB_1000a8d93;
      pNVar9 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)pNVar9,FUN_1000aaf90,0xaafd0,0x20)
      ;
      p_Var15 = (_func_void_Node_ptr *)param_1[2];
      if (*(int *)(p_Var15 + 0x10) != -1) {
        if (*(int *)(p_Var15 + 0x10) != 0) {
          LOCK();
          pcVar1 = p_Var15 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_31 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000a8d8f;
          p_Var15 = (_func_void_Node_ptr *)param_1[2];
        }
        QHashData::free_helper(p_Var15);
      }
LAB_1000a8d8f:
      param_1[2] = (long)pNVar9;
LAB_1000a8d93:
      iVar5 = *(int *)(pNVar9 + 0x20);
      pNVar10 = pNVar9;
      if (iVar5 != 0) {
        puVar13 = *(undefined8 **)(pNVar9 + 8);
        do {
          pNVar10 = (Node *)*puVar13;
          if ((Node *)*puVar13 != pNVar9) break;
          iVar5 = iVar5 + -1;
          puVar13 = puVar13 + 1;
          pNVar10 = pNVar9;
        } while (iVar5 != 0);
      }
      do {
        if (1 < *(uint *)(pNVar9 + 0x10)) {
          pNVar9 = (Node *)QHashData::detach_helper
                                     ((_func_void_Node_ptr_void_ptr *)pNVar9,FUN_1000aaf90,0xaafd0,
                                      0x20);
          p_Var15 = (_func_void_Node_ptr *)param_1[2];
          if (*(int *)(p_Var15 + 0x10) != -1) {
            if (*(int *)(p_Var15 + 0x10) != 0) {
              LOCK();
              pcVar1 = p_Var15 + 0x10;
              *(int *)pcVar1 = *(int *)pcVar1 + -1;
              local_31 = *(int *)pcVar1 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000a8e2f;
              p_Var15 = (_func_void_Node_ptr *)param_1[2];
            }
            QHashData::free_helper(p_Var15);
          }
LAB_1000a8e2f:
          param_1[2] = (long)pNVar9;
        }
        if (pNVar9 == pNVar10) break;
        uVar3 = *(undefined8 *)(pNVar10 + 0x18);
        FUN_1000b6ea0(&local_1a8,uVar3);
        if ((*(int *)(local_1a8 + 4) != 0) &&
           (cVar4 = QString::startsWith(&local_1a8,&local_1a0,1), cVar4 != '\0')) {
          pcVar1 = *(code **)(*param_1 + 0xa0);
          FUN_1000b6ef0(&local_1b0,uVar3);
          (*pcVar1)(param_1,&local_1b0);
          if (*(int *)local_1b0 != -1) {
            if (*(int *)local_1b0 != 0) {
              LOCK();
              *(int *)local_1b0 = *(int *)local_1b0 + -1;
              local_31 = *(int *)local_1b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000a8ecd;
            }
            QArrayData::deallocate(local_1b0,2,8);
          }
LAB_1000a8ecd:
          FUN_1000b6f40(uVar3);
        }
        if (*(int *)local_1a8 != -1) {
          if (*(int *)local_1a8 != 0) {
            LOCK();
            *(int *)local_1a8 = *(int *)local_1a8 + -1;
            local_31 = *(int *)local_1a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000a8dd0;
          }
          QArrayData::deallocate(local_1a8,2,8);
        }
LAB_1000a8dd0:
        pNVar10 = (Node *)QHashData::nextNode(pNVar10);
        pNVar9 = (Node *)param_1[2];
      } while( true );
    }
    (**(code **)(*plVar8 + 0x20))();
    if (*(int *)local_1a0 != -1) {
      if (*(int *)local_1a0 != 0) {
        LOCK();
        *(int *)local_1a0 = *(int *)local_1a0 + -1;
        local_31 = *(int *)local_1a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000a8f69;
      }
      QArrayData::deallocate(local_1a0,2,8);
    }
  }
LAB_1000a8f69:
  if (*(int *)local_158.field0_0x0 != -1) {
    if (*(int *)local_158.field0_0x0 != 0) {
      LOCK();
      *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
      local_31 = *(int *)local_158.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000a8f9f;
    }
    QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
  }
LAB_1000a8f9f:
  QEvent::~QEvent(local_60);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_140);
  return;
}

