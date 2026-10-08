
undefined1 FUN_10075a710(QObject *param_1)

{
  QObject *pQVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  QAction *this;
  bool bVar10;
  Data *pDVar11;
  undefined1 uVar12;
  bool bVar13;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  undefined4 local_68;
  QArrayData *local_60;
  Connection local_58 [8];
  QString local_50;
  QAction *local_48;
  Data *local_40;
  undefined1 local_31;
  
  uVar6 = FUN_100152280();
  lVar7 = FUN_1001554a0(uVar6);
  if (lVar7 == 0) {
    return 0;
  }
  iVar3 = FUN_10015a6e0(lVar7);
  if (iVar3 != 0) {
    return 0;
  }
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  bVar10 = false;
  bVar2 = false;
  for (iVar3 = 0; iVar4 = FUN_10015d3a0(lVar7), iVar3 < iVar4; iVar3 = iVar3 + 1) {
    lVar8 = FUN_10015d330(lVar7,iVar3);
    if (lVar8 != 0) {
      uVar6 = FUN_10018c280(lVar8);
      iVar4 = FUN_100319ae0(uVar6);
      if (iVar4 != 0) {
        uVar6 = FUN_10018c280(lVar8);
        iVar4 = FUN_100319ae0(uVar6);
        uVar6 = FUN_10018c280(lVar8);
        iVar5 = FUN_100319ae0(uVar6);
        if (iVar5 == 3) {
          lVar9 = FUN_10075afb0(*(undefined8 *)(param_1 + 0x38));
          bVar13 = lVar8 != lVar9;
        }
        else {
          bVar13 = false;
        }
        this = operator_new(0x10);
        FUN_10018d830(&local_50,lVar8);
        QAction::QAction(this,&local_50,param_1);
        if (*(int *)local_50.field0_0x0 != -1) {
          if (*(int *)local_50.field0_0x0 != 0) {
            LOCK();
            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
            local_31 = *(int *)local_50.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10075a875;
          }
          QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
        }
LAB_10075a875:
        local_48 = this;
        QAction::setCheckable(SUB81(this,0));
        lVar9 = FUN_10075afb0(*(undefined8 *)(param_1 + 0x38));
        if (lVar9 == lVar8) {
          QAction::setChecked(SUB81(this,0));
        }
        QObject::connect(local_58,this,"2triggered()",*(undefined8 *)(param_1 + 0x30),"1map()",0);
        QMetaObject::Connection::~Connection(local_58);
        pQVar1 = *(QObject **)(param_1 + 0x30);
        FUN_100188480(&local_60,lVar8);
        QSignalMapper::setMapping(pQVar1,(QString *)this);
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10075a926;
          }
          QArrayData::deallocate(local_60,2,8);
        }
LAB_10075a926:
        FUN_100072390(&local_40,&local_48);
        bVar2 = (bool)(bVar2 | iVar4 == 3);
        bVar10 = (bool)(bVar13 | bVar10);
      }
    }
  }
  iVar3 = *(int *)(local_40 + 0xc);
  iVar4 = *(int *)(local_40 + 8);
  if (iVar3 - iVar4 < 2) {
    if (bVar2) {
      if (bVar10) goto LAB_10075a9e3;
    }
    else if ((bVar10) || (iVar3 != iVar4)) goto LAB_10075a9e3;
    if (iVar3 != iVar4) {
      pDVar11 = local_40 + (long)iVar4 * 8 + 0x10;
      lVar7 = (long)iVar3 * 8 + (long)iVar4 * -8;
      do {
        if (*(long **)pDVar11 != (long *)0x0) {
          (**(code **)(**(long **)pDVar11 + 0x20))();
        }
        pDVar11 = pDVar11 + 8;
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
    }
    uVar12 = 0;
  }
  else {
LAB_10075a9e3:
    local_80 = local_40;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 == 0) {
        QListData::detach((int)&local_80);
        lVar7 = (long)*(int *)(local_80 + 8);
        if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_80 + lVar7 * 8) &&
           (lVar8 = *(int *)(local_80 + 0xc) - lVar7,
           lVar8 != 0 && lVar7 <= *(int *)(local_80 + 0xc))) {
          _memcpy(local_80 + lVar7 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                  lVar8 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
    }
    local_78 = local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10;
    local_70 = local_80 + (long)*(int *)(local_80 + 0xc) * 8 + 0x10;
    if (*(int *)(local_80 + 8) != *(int *)(local_80 + 0xc)) {
      do {
        local_68 = 1;
        QWidget::addAction((QAction *)param_1);
        local_78 = local_78 + 8;
      } while (local_78 != local_70);
    }
    local_68 = 1;
    uVar12 = 1;
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10075aabe;
      }
      QListData::dispose(local_80);
    }
  }
LAB_10075aabe:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar12;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return uVar12;
}

