
void FUN_1000855d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *self;
  undefined8 uVar2;
  QObject *pQVar3;
  int *piVar4;
  QMenu *this;
  long lVar5;
  undefined8 uVar6;
  QAction *this_00;
  QAction *this_01;
  CSignalSelectorBinding *pCVar7;
  undefined8 uVar8;
  objc_object *poVar9;
  QObject *pQVar10;
  Data *local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  int *local_60;
  QObject *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  self = PTR__OBJC_CLASS___NSString_10226a7c8;
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(lVar1 + 0x28);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_3,PTR_s_vmUuid_102269b10);
  if (self == (undefined *)0x0) {
    local_40 = (QArrayData *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_40,(ID)self,PTR_s_QStringWithString__1022696d0,uVar2);
  }
  pQVar3 = (QObject *)FUN_10007f750(uVar8);
  piVar4 = (int *)0x0;
  if (pQVar3 != (QObject *)0x0) {
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000856ae;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000856ae:
  if (piVar4 == (int *)0x0) {
    return;
  }
  if ((pQVar3 == (QObject *)0x0) || (piVar4[1] == 0)) goto LAB_100085a29;
  if (*(long **)(lVar1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(lVar1 + 0x38) + 0x20))();
  }
  this = operator_new(0x30);
  QMenu::QMenu(this,(QWidget *)0x0);
  *(QMenu **)(lVar1 + 0x38) = this;
  pQVar10 = (QObject *)0x0;
  if (piVar4[1] != 0) {
    pQVar10 = pQVar3;
  }
  lVar5 = FUN_10008b940(pQVar10);
  if (lVar5 == 0) {
    pQVar10 = (QObject *)0x0;
    if (piVar4[1] != 0) {
      pQVar10 = pQVar3;
    }
    lVar5 = FUN_10008b970(pQVar10);
    if (lVar5 != 0) {
      this_00 = operator_new(0x10);
      QAction::QAction(this_00,*(QObject **)(lVar1 + 0x38));
      pQVar10 = (QObject *)0x0;
      if (piVar4[1] != 0) {
        pQVar10 = pQVar3;
      }
      lVar5 = FUN_10008b970(pQVar10);
      if (*(int *)(lVar5 + 0x160) == 2) {
LAB_1000857cf:
        QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Resume_Download_1022708f8);
      }
      else {
        pQVar10 = (QObject *)0x0;
        if (piVar4[1] != 0) {
          pQVar10 = pQVar3;
        }
        lVar5 = FUN_10008b970(pQVar10);
        if (*(int *)(lVar5 + 0x160) == 1) goto LAB_1000857cf;
        QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Pause_Download_102270900);
      }
      QAction::setText((QString *)this_00);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100085855;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_100085855:
      QWidget::addAction(*(QAction **)(lVar1 + 0x38));
      this_01 = operator_new(0x10);
      QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,(int)PTR_s_Remove_102270908);
      QAction::QAction(this_01,&local_50,*(QObject **)(lVar1 + 0x38));
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000858e2;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_1000858e2:
      QMenu::addSeparator();
      QWidget::addAction(*(QAction **)(lVar1 + 0x38));
      pCVar7 = operator_new(0x18);
      pQVar10 = (QObject *)0x0;
      if (piVar4[1] != 0) {
        pQVar10 = pQVar3;
      }
      uVar8 = FUN_10008bad0(pQVar10);
      poVar9 = (objc_object *)(*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_progress_102269fa8)
      ;
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar7,(QObject *)this_00,"2triggered()",poVar9,
                 (objc_selector *)PTR_s_togglePauseResume_102269fb0);
      pCVar7 = operator_new(0x18);
      local_80 = PTR___NSConcreteStackBlock_1021e1280;
      local_78 = 0xc6000000;
      local_74 = 0;
      local_70 = FUN_100085be0;
      local_68 = &DAT_1021eddf0;
      LOCK();
      *piVar4 = *piVar4 + 1;
      local_31 = *piVar4 != 0;
      UNLOCK();
      local_60 = piVar4;
      local_58 = pQVar3;
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar7,(QObject *)this_01,"2triggered()",(_func_void *)&local_80);
      if (local_60 != (int *)0x0) {
        LOCK();
        *local_60 = *local_60 + -1;
        local_31 = *local_60 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (local_60 != (int *)0x0)) {
          operator_delete(local_60);
        }
      }
    }
  }
  else {
    uVar2 = FUN_1006e1350();
    uVar8 = *(undefined8 *)(lVar1 + 0x38);
    pQVar10 = (QObject *)0x0;
    if (piVar4[1] != 0) {
      pQVar10 = pQVar3;
    }
    uVar6 = FUN_10008b940(pQVar10);
    FUN_1006e5990(uVar2,uVar8,uVar6,1);
  }
  QWidget::actions();
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_2,PTR_s_fillWithQActions__102269fb8,&local_88);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      UNLOCK();
      if (*(int *)local_88 != 0) goto LAB_100085a29;
      local_31 = 0;
    }
    QListData::dispose(local_88);
  }
LAB_100085a29:
  LOCK();
  *piVar4 = *piVar4 + -1;
  local_31 = *piVar4 != 0;
  UNLOCK();
  if (!(bool)local_31) {
    operator_delete(piVar4);
  }
  return;
}

