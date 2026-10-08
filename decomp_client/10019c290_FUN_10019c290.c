
void FUN_10019c290(undefined8 param_1)

{
  char cVar1;
  CTaskGenericId *pCVar2;
  CSlotInfo *pCVar3;
  int iVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  long lVar7;
  Data_conflict local_90;
  undefined4 local_88;
  QArrayData *local_80;
  int *local_78 [4];
  QVariant local_58 [2];
  QArrayData *local_40;
  Data *local_38;
  undefined1 local_29;
  
  FUN_1009e1320(&local_38,0,0xffffffff);
  iVar4 = *(int *)(local_38 + 8);
  if (*(int *)(local_38 + 0xc) == iVar4) {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","!lstHosts.isEmpty()",
                  "ProblemReport/CClientProblemReportDelegate.cpp",0x4a,"processProxyDetection");
    iVar4 = *(int *)(local_38 + 8);
  }
  local_40 = *(QArrayData **)(local_38 + (long)iVar4 * 8 + 0x10);
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_29 = *(int *)local_40 != 0;
    UNLOCK();
  }
  local_80 = (QArrayData *)
             QString::fromAscii_helper("1onProxyInfoReceived(PRL_RESULT, CAbstractTask*)",0x30);
  local_88 = 0x80000000;
  local_90.field7 = 0;
  FUN_100a1c600(local_78,param_1,&local_80,&local_90);
  QVariant::~QVariant((QVariant *)&local_90);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10019c3a1;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10019c3a1:
  cVar1 = FUN_10019cd90(local_78);
  if (cVar1 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","listener.isValid()",
                  "ProblemReport/CClientProblemReportDelegate.cpp",0x4e,"processProxyDetection");
  }
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  pCVar3 = operator_new(0x18);
  FUN_10019ce20(pCVar3,&local_40,0);
  CTaskManager::runTask(pCVar2,pCVar3,SUB81(local_78,0));
  QVariant::~QVariant(local_58);
  if (local_78[0] != (int *)0x0) {
    LOCK();
    *local_78[0] = *local_78[0] + -1;
    local_29 = *local_78[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_78[0] != (int *)0x0)) {
      operator_delete(local_78[0]);
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10019c485;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10019c485:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar4 = *(int *)(local_38 + 0xc);
    if (iVar4 != *(int *)(local_38 + 8)) {
      lVar7 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar4 * -8;
      pDVar5 = local_38 + (long)iVar4 * 8 + 8;
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_10019c4f0:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_10019c4f0;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(local_38);
  }
  return;
}

