
void FUN_1000d1cb0(long *param_1,int *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  CTaskGenericId *pCVar7;
  uint *puVar8;
  Node *pNVar9;
  void *pvVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar13;
  Node *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  uint uStack_6c;
  QArrayData *local_68;
  QArrayData *local_60;
  CTaskGenericId local_58 [24];
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar13 = (undefined4)((ulong)in_stack_ffffffffffffff38 >> 0x20);
  if ((param_2[1] != *(int *)((long)param_1 + 0x21c)) || (*param_2 != (int)param_1[0x43])) {
    if ((param_2[1] == *(int *)((long)param_1 + 0x214)) && (*param_2 == (int)param_1[0x42])) {
      return;
    }
    QMutex::lock();
    iVar3 = FUN_1000cf550(param_1,param_2);
    if (iVar3 < 0) {
      if ((1 < DAT_10230ffd0) &&
         (FUN_100df99c0("SGAC","prl_client_app",2,
                        "Warning: app associated with helper with psn={%u, %u} not running",*param_2
                        ,param_2[1]), 2 < DAT_10230ffd0)) {
        FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",*param_2,
                      param_2[1],CONCAT44(uVar13,0x12af));
      }
      FUN_1000c6a60(param_1,param_2);
    }
    else {
      iVar4 = FUN_1000dfea0(param_1);
      if (iVar4 == 0) {
        puVar8 = (uint *)param_1[0xb];
        if (1 < *puVar8) {
          FUN_1000e6e10(param_1 + 0xb,puVar8[1]);
          puVar8 = (uint *)param_1[0xb];
        }
        lVar6 = *(long *)(puVar8 + ((long)iVar3 + (long)(int)puVar8[2]) * 2 + 4);
        lVar1 = *(long *)(lVar6 + 0x38);
        if (*(int *)(lVar1 + 0xc) == *(int *)(lVar1 + 8)) {
          if (2 < DAT_10230ffd0) {
            FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",*param_2
                          ,param_2[1],CONCAT44(uVar13,0x12c9));
          }
          FUN_1000c6a60(param_1,param_2);
        }
        cVar2 = FUN_1000bd150(param_1);
        if (cVar2 != '\0') {
          (**(code **)(*param_1 + 0xa0))(param_1);
        }
        uStack_90 = 0;
        local_88 = 0;
        local_98 = 0x10;
        uStack_a0 = 0;
        local_a8 = 0x20000006b;
        FUN_1000b9340(&local_b0,lVar6);
        iVar3 = *(int *)(local_b0 + 0x20);
        pNVar9 = local_b0;
        if (iVar3 != 0) {
          plVar11 = *(long **)(local_b0 + 8);
          do {
            pNVar9 = (Node *)*plVar11;
            if ((Node *)*plVar11 != local_b0) break;
            iVar3 = iVar3 + -1;
            plVar11 = plVar11 + 1;
            pNVar9 = local_b0;
          } while (iVar3 != 0);
        }
        if (pNVar9 != local_b0) {
          do {
            local_98 = CONCAT44(*(undefined4 *)(pNVar9 + 0xc),(undefined4)local_98);
            uVar5 = (**(code **)(*param_1 + 0x68))(param_1);
            FUN_1000e85b0(uVar5,&local_a8);
            pNVar9 = (Node *)QHashData::nextNode(pNVar9);
          } while (pNVar9 != local_b0);
        }
        if (*(int *)(local_b0 + 0x10) != -1) {
          if (*(int *)(local_b0 + 0x10) != 0) {
            LOCK();
            pNVar9 = local_b0 + 0x10;
            *(int *)pNVar9 = *(int *)pNVar9 + -1;
            local_31 = *(int *)pNVar9 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000d20cb;
          }
          QHashData::free_helper((_func_void_Node_ptr *)local_b0);
        }
      }
      else if (iVar4 == -2) {
        FUN_100df99c0("SGAC","prl_client_app",0,"Error: helper psn={%u, %u} failed to start Vm",
                      *param_2,param_2[1]);
        if (2 < DAT_10230ffd0) {
          FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",*param_2,
                        param_2[1],CONCAT44(uVar13,0x12bc));
        }
        FUN_1000c6a60(param_1,param_2);
      }
    }
LAB_1000d20cb:
    QMutex::unlock();
    return;
  }
  uVar5 = FUN_100152280();
  lVar6 = FUN_1001548f0(uVar5,param_1 + 2);
  if (lVar6 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,"Failed to get vm for vmUuid=\"%s\"",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 == -1) {
      return;
    }
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    uVar12 = 1;
    local_68 = local_40;
    goto LAB_1000d2141;
  }
  pCVar7 = (CTaskGenericId *)CTaskManager::instance();
  FUN_100071f00(local_58,lVar6);
  cVar2 = CTaskManager::isTaskRunning(pCVar7);
  CTaskGenericId::~CTaskGenericId(local_58);
  if (cVar2 == '\0') {
    pvVar10 = operator_new(0x40);
    local_80 = 3;
    local_78 = local_78 & 0xffffff00;
    uStack_7c = 0;
    uStack_74 = 0xffff;
    local_70 = 0;
    uStack_6c = uStack_6c & 0xffffff00;
    FUN_1002c08d0(pvVar10,lVar6);
    CAbstractTask::execute();
    return;
  }
  FUN_10018d830(&local_68,lVar6);
  QString::toUtf8();
  FUN_100df99c0("SGAC","prl_client_app",0,"VM %s is already quiting",
                local_60 + *(long *)(local_60 + 0x10));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000d1db1;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_1000d1db1:
  if (*(int *)local_68 == -1) {
    return;
  }
  if (*(int *)local_68 != 0) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + -1;
    UNLOCK();
    if (*(int *)local_68 != 0) {
      return;
    }
    local_31 = 0;
  }
  uVar12 = 2;
LAB_1000d2141:
  QArrayData::deallocate(local_68,uVar12,8);
  return;
}

