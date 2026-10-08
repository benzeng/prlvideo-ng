
undefined1 FUN_100092570(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  QUrl *this;
  long lVar12;
  undefined1 uVar13;
  int *local_70;
  long *local_68;
  QString local_60;
  QUrl local_58 [8];
  QArrayData *local_50;
  undefined *local_48;
  Data *local_40;
  undefined1 local_31;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",3,"dropReceived stage 1");
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    return 0;
  }
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",3,"dropReceived stage 2");
  }
  QMimeData::urls();
  uVar1 = *(uint *)(local_40 + 8);
  uVar2 = *(uint *)(local_40 + 0xc);
  if (uVar2 == uVar1) {
    uVar13 = 0;
    goto LAB_10009295e;
  }
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",3,"dropReceived stage 4");
    uVar1 = *(uint *)(local_40 + 8);
    uVar2 = *(uint *)(local_40 + 0xc);
  }
  uVar7 = (ulong)uVar1;
  local_48 = PTR_shared_null_1021e15e8;
  if ((int)uVar1 < (int)uVar2) {
    lVar12 = 0;
    do {
      QUrl::QUrl(local_58,(QUrl *)(local_40 + ((int)uVar7 + lVar12) * 8 + 0x10));
      MacUtils::localPathForUrl((QUrl *)&local_50);
      QUrl::~QUrl(local_58);
      if (*(int *)(local_50 + 4) != 0) {
        uVar5 = QDir::separator();
        QString::QString(&local_60,uVar5);
        cVar4 = QString::endsWith(&local_50,&local_60,1);
        if (*(int *)local_60.field0_0x0 != -1) {
          if (*(int *)local_60.field0_0x0 != 0) {
            LOCK();
            *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
            local_31 = *(int *)local_60.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000926fe;
          }
          QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
        }
LAB_1000926fe:
        if (cVar4 != '\0') {
          QString::resize((int)&local_50);
        }
        FUN_1000341d0(&local_48,&local_50);
      }
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100092754;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_100092754:
      lVar12 = lVar12 + 1;
      uVar7 = (ulong)*(int *)(local_40 + 8);
    } while (lVar12 < (long)((long)*(int *)(local_40 + 0xc) - uVar7));
  }
  FUN_1000901d0();
  if (*(int *)(local_48 + 0xc) == *(int *)(local_48 + 8)) {
    uVar13 = 0;
  }
  else {
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",3,"dropReceived stage 5");
    }
    puVar8 = operator_new(0x18);
    *puVar8 = &PTR_FUN_10226c820;
    puVar8[1] = param_1;
    *(undefined4 *)(puVar8 + 2) = param_3;
    *(undefined4 *)((long)puVar8 + 0x14) = param_4;
    plVar9 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
    if (plVar9 == (long *)0x0) {
      operator_delete(puVar8);
      plVar9 = (long *)0x0;
    }
    else {
      *(undefined4 *)(plVar9 + 1) = 1;
      plVar9[2] = (long)puVar8;
      *plVar9 = (long)&PTR_FUN_10226ca80;
    }
    uVar10 = FUN_100319c30(*(undefined8 *)(param_1 + 0x20));
    if (plVar9 != (long *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_68 = plVar9;
    iVar6 = FUN_10032fa90(uVar10,&local_68,&local_48);
    if (local_68 != (long *)0x0) {
      LOCK();
      plVar11 = local_68 + 1;
      lVar12 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
    if (iVar6 != 0) {
      plVar11 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        plVar11 = (long *)plVar9[2];
      }
      pcVar3 = *(code **)(*plVar11 + 0x10);
      FUN_10008ff00(&local_70,&local_48,1);
      (*pcVar3)(plVar11,iVar6,&local_70);
      if (*local_70 != -1) {
        if (*local_70 != 0) {
          LOCK();
          *local_70 = *local_70 + -1;
          local_31 = *local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100092926;
        }
        FUN_10003cda0(&local_70,local_70);
      }
    }
LAB_100092926:
    *(undefined1 *)(param_1 + 0x28) = 1;
    uVar13 = 1;
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar11 = plVar9 + 1;
      lVar12 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_100039a80(&local_48);
LAB_10009295e:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar13;
      }
      local_31 = 0;
    }
    iVar6 = *(int *)(local_40 + 0xc);
    if (iVar6 != *(int *)(local_40 + 8)) {
      lVar12 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar6 * -8;
      this = (QUrl *)(local_40 + (long)iVar6 * 8 + 8);
      do {
        QUrl::~QUrl(this);
        this = this + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose(local_40);
  }
  return uVar13;
}

