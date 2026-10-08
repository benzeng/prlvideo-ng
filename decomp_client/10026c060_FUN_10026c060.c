
void FUN_10026c060(long param_1)

{
  int iVar1;
  char cVar2;
  CProgressDialog *this;
  QWidget *pQVar3;
  int *piVar4;
  int *piVar5;
  undefined8 uVar6;
  QString *pQVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  Connection local_98 [8];
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  this = operator_new(0x70);
  pQVar3 = (QWidget *)FUN_10026ba50(param_1);
  CProgressDialog::CProgressDialog(this,pQVar3);
  piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
  piVar5 = *(int **)(param_1 + 0x28);
  if (piVar5 != piVar4) {
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      local_21 = *piVar4 != 0;
      UNLOCK();
      piVar5 = *(int **)(param_1 + 0x28);
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_21 = *piVar5 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x28));
      }
    }
    *(int **)(param_1 + 0x28) = piVar4;
    *(CProgressDialog **)(param_1 + 0x30) = this;
  }
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + -1;
    local_21 = *piVar4 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar4);
    }
  }
  pQVar7 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (pQVar7 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
    pQVar7 = *(QString **)(param_1 + 0x30);
  }
  FUN_1001c72e0(&local_30);
  QWidget::setWindowTitle(pQVar7);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10026c157;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10026c157:
  if (*(int *)(param_1 + 0x58) == 1) {
LAB_10026c18f:
    pQVar7 = (QString *)0x0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (pQVar7 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      pQVar7 = *(QString **)(param_1 + 0x30);
    }
    QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Template_Creation_10226f278);
    local_40 = (QArrayData *)PTR_shared_null_1021e1288;
    CProgressDialog::setText(pQVar7,&local_38);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10026c215;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10026c215:
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_21 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10026c245;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
LAB_10026c245:
    pQVar7 = (QString *)0x0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (pQVar7 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      pQVar7 = *(QString **)(param_1 + 0x30);
    }
    QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Preparing_to_create_the_virtual_m_10226f258);
    CProgressDialog::setDescription(pQVar7);
    if (*(int *)local_48 == -1) goto LAB_10026c66c;
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      iVar1 = *(int *)local_48;
      UNLOCK();
      goto joined_r0x00010026c527;
    }
  }
  else {
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar2 = FUN_10018c770(uVar9);
    iVar1 = *(int *)(param_1 + 0x58);
    if (cVar2 == '\0') {
      if (iVar1 == 0) {
        pQVar7 = (QString *)0x0;
        if ((*(long *)(param_1 + 0x28) != 0) &&
           (pQVar7 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
          pQVar7 = *(QString **)(param_1 + 0x30);
        }
        QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Virtual_Machine_Copying_10226f268);
        local_70 = (QArrayData *)PTR_shared_null_1021e1288;
        CProgressDialog::setText(pQVar7,&local_68);
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_21 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_10026c48d;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_10026c48d:
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_21 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_10026c4bd;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
LAB_10026c4bd:
        pQVar7 = (QString *)0x0;
        if ((*(long *)(param_1 + 0x28) != 0) &&
           (pQVar7 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
          pQVar7 = *(QString **)(param_1 + 0x30);
        }
        QMetaObject::tr((char *)&local_78,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Preparing_to_clone_the_virtual_m_10226f248);
        CProgressDialog::setDescription(pQVar7);
        if (*(int *)local_78 == -1) goto LAB_10026c66c;
        local_48 = local_78;
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          iVar1 = *(int *)local_78;
          UNLOCK();
          goto joined_r0x00010026c527;
        }
      }
      else {
        if (iVar1 != 3) {
          if (iVar1 != 2) goto LAB_10026c66c;
          goto LAB_10026c53f;
        }
        pQVar7 = (QString *)0x0;
        if ((*(long *)(param_1 + 0x28) != 0) &&
           (pQVar7 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
          pQVar7 = *(QString **)(param_1 + 0x30);
        }
        QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Virtual_Machine_Cloning_10226f270);
        local_88 = (QArrayData *)PTR_shared_null_1021e1288;
        CProgressDialog::setText(pQVar7,&local_80);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_21 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_10026c355;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_10026c355:
        if (*(int *)local_80.field0_0x0 != -1) {
          if (*(int *)local_80.field0_0x0 != 0) {
            LOCK();
            *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
            local_21 = *(int *)local_80.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_10026c385;
          }
          QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
        }
LAB_10026c385:
        pQVar7 = (QString *)0x0;
        if ((*(long *)(param_1 + 0x28) != 0) &&
           (pQVar7 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
          pQVar7 = *(QString **)(param_1 + 0x30);
        }
        QMetaObject::tr((char *)&local_90,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Creating_a_linked_clone_of_this_v_10226f250);
        CProgressDialog::setDescription(pQVar7);
        if (*(int *)local_90 == -1) goto LAB_10026c66c;
        local_48 = local_90;
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          iVar1 = *(int *)local_90;
          UNLOCK();
          goto joined_r0x00010026c527;
        }
      }
    }
    else {
      if (iVar1 != 2) goto LAB_10026c18f;
LAB_10026c53f:
      pQVar7 = (QString *)0x0;
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (pQVar7 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
        pQVar7 = *(QString **)(param_1 + 0x30);
      }
      QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Template_Deploying_10226f280);
      local_58 = (QArrayData *)PTR_shared_null_1021e1288;
      CProgressDialog::setText(pQVar7,&local_50);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_21 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10026c5c5;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_10026c5c5:
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_21 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10026c5f5;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_10026c5f5:
      pQVar7 = (QString *)0x0;
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (pQVar7 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
        pQVar7 = *(QString **)(param_1 + 0x30);
      }
      QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Preparing_to_deploy_the_virtual_m_10226f260);
      CProgressDialog::setDescription(pQVar7);
      if (*(int *)local_60 == -1) goto LAB_10026c66c;
      local_48 = local_60;
      if (*(int *)local_60 == 0) goto LAB_10026c65d;
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      iVar1 = *(int *)local_60;
      UNLOCK();
joined_r0x00010026c527:
      local_21 = iVar1 != 0;
      if ((bool)local_21) goto LAB_10026c66c;
    }
  }
LAB_10026c65d:
  QArrayData::deallocate(local_48,2,8);
LAB_10026c66c:
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x30);
  }
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x40);
  }
  uVar8 = 0;
  QObject::connect(local_98,uVar9,"2rejected()",uVar6,"1cancel()",0);
  QMetaObject::Connection::~Connection(local_98);
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x30);
  }
  QWidget::setAttribute(uVar8,0x37,1);
  plVar10 = (long *)0x0;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (plVar10 = (long *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
    plVar10 = *(long **)(param_1 + 0x30);
  }
  if (*(long *)((*(long **)(param_1 + 0x30))[1] + 0x10) == 0) {
    QDialog::setModal(SUB81(plVar10,0));
    QWidget::show();
  }
  else {
    (**(code **)(*plVar10 + 0x1a0))();
  }
  return;
}

