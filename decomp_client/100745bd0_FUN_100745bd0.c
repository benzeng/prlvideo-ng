
void FUN_100745bd0(QObject *param_1,char param_2)

{
  long lVar1;
  undefined *puVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  long local_b0;
  QObject local_a8 [8];
  int *local_a0;
  int *local_98;
  int *local_90;
  int *local_88;
  int *local_80;
  int *local_78;
  undefined4 local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined4 local_54;
  undefined *local_50;
  void *local_48;
  undefined4 *local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  if (param_2 == '\0') {
    if (*(int *)(param_1 + 0x20) - 1U < 2) {
      if (DAT_10230ffd0 < 2) goto LAB_100745d08;
      FUN_100746110(&local_68);
      QString::toUtf8();
      FUN_100df99c0("","prl_client_app",2,"Web Store catalog state is <%s> already, skipping reload"
                    ,local_60 + *(long *)(local_60 + 0x10));
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          UNLOCK();
          local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_60 != 0);
          if (*(int *)local_60 != 0) goto LAB_100745c90;
        }
        QArrayData::deallocate(local_60,1,8);
      }
LAB_100745c90:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          UNLOCK();
          local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_68 != 0);
          if (*(int *)local_68 != 0) goto LAB_100745d08;
        }
        QArrayData::deallocate(local_68,2,8);
      }
      goto LAB_100745d08;
    }
    if (param_1[0x28] == (QObject)0x0) {
      *(undefined4 *)(param_1 + 0x20) = 1;
      local_54 = 1;
      local_48 = (void *)0x0;
      local_40 = &local_54;
      QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f6280,0,&local_48);
      if (((*(long *)(param_1 + 0x70) != 0) && (*(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) &&
         (*(QObject **)(param_1 + 0x78) != (QObject *)0x0)) {
        plVar7 = (long *)0x0;
        QObject::disconnect(*(QObject **)(param_1 + 0x78),(char *)0x0,param_1,(char *)0x0);
        if ((*(long *)(param_1 + 0x70) != 0) &&
           (plVar7 = (long *)0x0, *(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) {
          plVar7 = *(long **)(param_1 + 0x78);
        }
        (**(code **)(*plVar7 + 0x78))(plVar7,0x80000275);
      }
      puVar2 = PTR_shared_null_1021e12f0;
      local_50 = PTR_shared_null_1021e12f0;
      FUN_100283220(param_1 + 0x68,&local_50);
      if (*(int *)puVar2 != -1) {
        if (*(int *)puVar2 != 0) {
          LOCK();
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)puVar2 != 0);
          if (*(int *)puVar2 != 0) goto LAB_100745e00;
        }
        if (*(long *)(puVar2 + 0x10) != 0) {
          FUN_100283b30();
          QMapDataBase::freeTree((QMapNodeBase *)puVar2,(int)*(undefined8 *)(puVar2 + 0x10));
        }
        QMapDataBase::freeData((QMapDataBase *)PTR_shared_null_1021e12f0);
      }
LAB_100745e00:
      pQVar3 = operator_new(0x78);
      local_a8[0] = param_1[0x28];
      local_a0 = *(int **)(param_1 + 0x30);
      if (1 < *local_a0 + 1U) {
        LOCK();
        *local_a0 = *local_a0 + 1;
        UNLOCK();
        local_48 = (void *)CONCAT71(local_48._1_7_,*local_a0 != 0);
        local_a8[0] = param_1[0x28];
      }
      local_98 = *(int **)(param_1 + 0x38);
      if (1 < *local_98 + 1U) {
        LOCK();
        *local_98 = *local_98 + 1;
        UNLOCK();
        local_48 = (void *)CONCAT71(local_48._1_7_,*local_98 != 0);
        local_a8[0] = param_1[0x28];
      }
      local_90 = *(int **)(param_1 + 0x40);
      if (1 < *local_90 + 1U) {
        LOCK();
        *local_90 = *local_90 + 1;
        UNLOCK();
        local_48 = (void *)CONCAT71(local_48._1_7_,*local_90 != 0);
        local_a8[0] = param_1[0x28];
      }
      local_88 = *(int **)(param_1 + 0x48);
      if (1 < *local_88 + 1U) {
        LOCK();
        *local_88 = *local_88 + 1;
        UNLOCK();
        local_48 = (void *)CONCAT71(local_48._1_7_,*local_88 != 0);
        local_a8[0] = param_1[0x28];
      }
      local_80 = *(int **)(param_1 + 0x50);
      if (1 < *local_80 + 1U) {
        LOCK();
        *local_80 = *local_80 + 1;
        UNLOCK();
        local_48 = (void *)CONCAT71(local_48._1_7_,*local_80 != 0);
        local_a8[0] = param_1[0x28];
      }
      local_78 = *(int **)(param_1 + 0x58);
      if (1 < *local_78 + 1U) {
        LOCK();
        *local_78 = *local_78 + 1;
        UNLOCK();
        local_48 = (void *)CONCAT71(local_48._1_7_,*local_78 != 0);
      }
      local_70 = *(undefined4 *)(param_1 + 0x60);
      FUN_100282190(pQVar3,param_1 + 0x18,local_a8);
      piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
      piVar5 = *(int **)(param_1 + 0x70);
      if (piVar5 != piVar4) {
        if (piVar4 != (int *)0x0) {
          LOCK();
          *piVar4 = *piVar4 + 1;
          UNLOCK();
          local_48 = (void *)CONCAT71(local_48._1_7_,*piVar4 != 0);
          piVar5 = *(int **)(param_1 + 0x70);
        }
        if (piVar5 != (int *)0x0) {
          LOCK();
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          local_48 = (void *)CONCAT71(local_48._1_7_,*piVar5 != 0);
          if ((*piVar5 == 0) && (*(void **)(param_1 + 0x70) != (void *)0x0)) {
            operator_delete(*(void **)(param_1 + 0x70));
          }
        }
        *(int **)(param_1 + 0x70) = piVar4;
        *(QObject **)(param_1 + 0x78) = pQVar3;
      }
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        local_48 = (void *)CONCAT71(local_48._1_7_,*piVar4 != 0);
        if (*piVar4 == 0) {
          operator_delete(piVar4);
        }
      }
      FUN_10012ac30(local_a8);
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x70) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x78);
      }
      QObject::connect(&local_b0,uVar6,"2taskFinished(PRL_RESULT)",param_1,
                       "1onTaskLoadCatalogFinished(PRL_RESULT)",0);
      if (local_b0 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_b0);
      CAbstractTask::execute();
      goto LAB_100745d08;
    }
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    local_54 = 0;
    local_48 = (void *)0x0;
    local_40 = &local_54;
    QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f6280,0,&local_48);
  }
  FUN_1008589a0(*(undefined8 *)(param_1 + 0x10));
LAB_100745d08:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

