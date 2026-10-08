
void FUN_10007ffa0(long param_1,QString *param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  long lVar6;
  CTaskGenericId *pCVar7;
  long *plVar8;
  long lVar9;
  Data *pDVar10;
  long lVar11;
  CTaskGenericId local_80 [24];
  QString local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  Data *local_40;
  undefined1 local_31;
  
  if (DAT_102310920 == (void *)0x0) {
    pvVar5 = operator_new(0x50);
    FUN_1001d1080(pvVar5);
    DAT_10226c778 = 1;
    DAT_102310920 = pvVar5;
  }
  cVar4 = FUN_1001d1200(DAT_102310920);
  if (cVar4 == '\0') {
    local_60 = *(Data **)(param_1 + 0x20);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 == 0) {
        QListData::detach((int)&local_60);
        lVar9 = (long)*(int *)(local_60 + 8);
        lVar6 = *(long *)(param_1 + 0x20);
        if (((Data *)(lVar6 + (long)*(int *)(lVar6 + 8) * 8) != local_60 + lVar9 * 8) &&
           (lVar11 = *(int *)(local_60 + 0xc) - lVar9,
           lVar11 != 0 && lVar9 <= *(int *)(local_60 + 0xc))) {
          _memcpy(local_60 + lVar9 * 8 + 0x10,(void *)(lVar6 + 0x10 + (long)*(int *)(lVar6 + 8) * 8)
                  ,lVar11 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + 1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
      }
    }
    local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
    local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
    local_48 = 1;
    if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
      do {
        local_48 = 1;
        uVar2 = *(undefined8 *)local_58;
        FUN_10008ba40(&local_68,uVar2);
        cVar4 = operator==(&local_68,param_2);
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000800db;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
LAB_1000800db:
        if (cVar4 != '\0') {
          lVar6 = FUN_10008b9a0(uVar2);
          if (lVar6 != 0) {
            pCVar7 = (CTaskGenericId *)CTaskManager::instance();
            lVar6 = FUN_10008b9a0(uVar2);
            FUN_100081140(local_80,lVar6 + 0x10);
            CTaskManager::getTaskById(pCVar7);
            plVar8 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_102202120);
            CTaskGenericId::~CTaskGenericId(local_80);
            if ((plVar8 != (long *)0x0) && (cVar4 = CAbstractTask::isFinished(), cVar4 == '\0')) {
              (**(code **)(*plVar8 + 0x88))(&local_40,plVar8);
              iVar1 = *(int *)(local_40 + 8);
              if (iVar1 == *(int *)(local_40 + 0xc)) {
                bVar3 = false;
              }
              else {
                pDVar10 = local_40 + (long)iVar1 * 8 + 0x10;
                lVar6 = (long)*(int *)(local_40 + 0xc) * 8 + (long)iVar1 * -8;
                do {
                  bVar3 = true;
                  if (*(int *)pDVar10 == 3) goto LAB_1000801a6;
                  pDVar10 = pDVar10 + 8;
                  lVar6 = lVar6 + -8;
                } while (lVar6 != 0);
                bVar3 = false;
              }
LAB_1000801a6:
              if (*(int *)local_40 != -1) {
                if (*(int *)local_40 != 0) {
                  LOCK();
                  *(int *)local_40 = *(int *)local_40 + -1;
                  local_31 = *(int *)local_40 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000801c8;
                }
                QListData::dispose(local_40);
              }
LAB_1000801c8:
              if (bVar3) goto LAB_1000801cc;
            }
          }
          FUN_10007f620(param_1,uVar2);
          break;
        }
LAB_1000801cc:
        local_58 = local_58 + 8;
        local_48 = 1;
      } while (local_58 != local_50);
    }
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        UNLOCK();
        if (*(int *)local_60 != 0) {
          return;
        }
        local_31 = 0;
      }
      QListData::dispose(local_60);
    }
  }
  return;
}

