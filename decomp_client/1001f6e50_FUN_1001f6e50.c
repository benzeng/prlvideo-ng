
void FUN_1001f6e50(long param_1)

{
  QString *pQVar1;
  CProgressDialog *this;
  int *piVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  QFont *pQVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  QWidget *pQVar10;
  undefined8 uVar11;
  Connection local_70 [8];
  Connection local_68 [8];
  QArrayData *local_60;
  QString local_58;
  QFont local_50 [16];
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar4 = *(long *)(param_1 + 0x38);
  if (((lVar4 == 0) || (*(int *)(lVar4 + 4) == 0)) || (*(long *)(param_1 + 0x40) == 0)) {
    if (((*(long *)(param_1 + 0x48) == 0) || (*(int *)(*(long *)(param_1 + 0x48) + 4) == 0)) ||
       (pQVar10 = *(QWidget **)(param_1 + 0x50), pQVar10 == (QWidget *)0x0)) {
      pQVar10 = (QWidget *)0x0;
      if (((*(long *)(param_1 + 0x18) != 0) &&
          (pQVar10 = (QWidget *)0x0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
         (pQVar10 = (QWidget *)0x0, *(long *)(param_1 + 0x20) != 0)) {
        pQVar1 = (QString *)CSearchParentHelper::instance();
        uVar7 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar7 = *(undefined8 *)(param_1 + 0x20);
        }
        FUN_100188480(&local_38,uVar7);
        pQVar10 = (QWidget *)
                  CSearchParentHelper::getParentForMessage(pQVar1,SUB81(&local_38,0),(QWidget *)0x0)
        ;
        if (*(int *)local_38 != -1) {
          if (*(int *)local_38 != 0) {
            LOCK();
            *(int *)local_38 = *(int *)local_38 + -1;
            local_29 = *(int *)local_38 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1001f6f28;
          }
          QArrayData::deallocate(local_38,2,8);
        }
      }
    }
LAB_1001f6f28:
    this = operator_new(0x70);
    CProgressDialog::CProgressDialog(this,pQVar10);
    piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
    piVar3 = *(int **)(param_1 + 0x38);
    if (piVar3 != piVar2) {
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        local_29 = *piVar2 != 0;
        UNLOCK();
        piVar3 = *(int **)(param_1 + 0x38);
      }
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + -1;
        local_29 = *piVar3 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (*(void **)(param_1 + 0x38) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x38));
        }
      }
      *(int **)(param_1 + 0x38) = piVar2;
      *(CProgressDialog **)(param_1 + 0x40) = this;
    }
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_29 = *piVar2 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar2);
      }
    }
    pQVar1 = (QString *)0x0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (pQVar1 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      pQVar1 = *(QString **)(param_1 + 0x40);
    }
    FUN_1001c72e0(&local_40);
    QWidget::setWindowTitle(pQVar1);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001f7007;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1001f7007:
    pQVar6 = (QFont *)0x0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (pQVar6 = (QFont *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      pQVar6 = *(QFont **)(param_1 + 0x40);
    }
    FontUtils::getSmallFont(SUB81(local_50,0));
    CProgressDialog::setTextFont(pQVar6);
    QFont::~QFont(local_50);
    pQVar1 = (QString *)0x0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (pQVar1 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      pQVar1 = *(QString **)(param_1 + 0x40);
    }
    QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Please_wait_while_the_virtual_ha_10226fba0);
    local_60 = (QArrayData *)PTR_shared_null_1021e1288;
    CProgressDialog::setText(pQVar1,&local_58);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001f70c6;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1001f70c6:
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_29 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001f70f6;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_1001f70f6:
    iVar9 = 0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (iVar9 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      iVar9 = (int)*(undefined8 *)(param_1 + 0x40);
    }
    uVar7 = 0;
    CProgressDialog::setRange(iVar9,0);
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x40);
    }
    QWidget::setAttribute(uVar7,0x37,1);
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x40);
    }
    uVar11 = 0;
    QObject::connect(local_68,uVar7,"2compactProgressChanged(uint)",uVar5,"1setValue(uint)",0);
    QMetaObject::Connection::~Connection(local_68);
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      uVar11 = *(undefined8 *)(param_1 + 0x40);
    }
    iVar9 = 0;
    QObject::connect(local_70,uVar11,"2canceled()",param_1,"1onCancelCompactButtonPressed()",0);
    QMetaObject::Connection::~Connection(local_70);
    lVar4 = *(long *)(param_1 + 0x38);
    if (lVar4 == 0) goto LAB_1001f71f2;
  }
  iVar9 = 0;
  if (*(int *)(lVar4 + 4) != 0) {
    iVar9 = (int)*(undefined8 *)(param_1 + 0x40);
  }
LAB_1001f71f2:
  plVar8 = (long *)0x0;
  CProgressDialog::setValue(iVar9);
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (plVar8 = (long *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
    plVar8 = *(long **)(param_1 + 0x40);
  }
  (**(code **)(*plVar8 + 0x1a0))(plVar8);
  return;
}

