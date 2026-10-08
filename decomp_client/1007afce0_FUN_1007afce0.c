
void FUN_1007afce0(QWidget *param_1,QAction *param_2,int param_3)

{
  undefined *puVar1;
  char cVar2;
  QMenu *this;
  undefined8 uVar3;
  size_t sVar4;
  QArrayData *pQVar5;
  int iVar6;
  QKeySequence local_e0 [8];
  QArrayData *local_d8;
  QKeySequence local_d0 [8];
  QArrayData *local_c8;
  QKeySequence local_c0 [8];
  QArrayData *local_b8;
  QKeySequence local_b0 [8];
  QArrayData *local_a8;
  QKeySequence local_a0 [8];
  QArrayData *local_98;
  QKeySequence local_90 [8];
  QArrayData *local_88;
  QKeySequence local_80 [8];
  QArrayData *local_78;
  QKeySequence local_70 [8];
  QArrayData *local_68;
  QKeySequence local_60 [8];
  QArrayData *local_58;
  QVariant local_50;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  this = operator_new(0x30);
  QMenu::QMenu(this,param_1);
  QWidget::setAttribute(this,0x37,1);
  if (param_3 == 1) {
    QMetaObject::tr((char *)&local_98,(char *)&PTR_staticMetaObject_10222d000,0x1e17d5b);
    QKeySequence::QKeySequence(local_a0,0,0,0,0);
    QMenu::addAction((QString *)this,(QObject *)&local_98,(char *)param_1,(QKeySequence *)"1OnNew()"
                    );
    QKeySequence::~QKeySequence(local_a0);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_29 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007b01a1;
      }
LAB_1007b0192:
      QArrayData::deallocate(local_98,2,8);
    }
  }
  else {
    if (param_3 == 0) {
      QMetaObject::tr((char *)&local_58,(char *)&PTR_staticMetaObject_10222d000,0x1e17cd6);
      QKeySequence::QKeySequence(local_60,0,0,0,0);
      QMenu::addAction((QString *)this,(QObject *)&local_58,(char *)param_1,
                       (QKeySequence *)"1OnGoTo()");
      QKeySequence::~QKeySequence(local_60);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_29 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1007afe4d;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_1007afe4d:
      QMetaObject::tr((char *)&local_68,(char *)&PTR_staticMetaObject_10222d000,0x1e17ce5);
      QKeySequence::QKeySequence(local_70,0,0,0,0);
      QMenu::addAction((QString *)this,(QObject *)&local_68,(char *)param_1,
                       (QKeySequence *)"1OnDeleteSnapshot()");
      QKeySequence::~QKeySequence(local_70);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_29 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1007afed1;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_1007afed1:
      QMetaObject::tr((char *)&local_78,(char *)&PTR_staticMetaObject_10222d000,0x1e17cf5);
      QKeySequence::QKeySequence(local_80,0,0,0,0);
      QMenu::addAction((QString *)this,(QObject *)&local_78,(char *)param_1,
                       (QKeySequence *)"1OnDeleteSnapshotWithChildren()");
      QKeySequence::~QKeySequence(local_80);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_29 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1007aff55;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1007aff55:
      QMetaObject::tr((char *)&local_88,(char *)&PTR_staticMetaObject_10222d000,0x1e17d42);
      QKeySequence::QKeySequence(local_90,0,0,0,0);
      QMenu::addAction((QString *)this,(QObject *)&local_88,(char *)param_1,
                       (QKeySequence *)"1OnEdit()");
      QKeySequence::~QKeySequence(local_90);
      if (*(int *)local_88 == -1) goto LAB_1007b01a1;
      local_98 = local_88;
      if (*(int *)local_88 == 0) goto LAB_1007b0192;
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      iVar6 = *(int *)local_88;
      UNLOCK();
    }
    else {
      QMetaObject::tr((char *)&local_a8,(char *)&PTR_staticMetaObject_10222d000,0x1e17cd6);
      QKeySequence::QKeySequence(local_b0,0,0,0,0);
      QMenu::addAction((QString *)this,(QObject *)&local_a8,(char *)param_1,
                       (QKeySequence *)"1OnGoTo()");
      QKeySequence::~QKeySequence(local_b0);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_29 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1007b006f;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_1007b006f:
      QMetaObject::tr((char *)&local_b8,(char *)&PTR_staticMetaObject_10222d000,0x1e17ce5);
      QKeySequence::QKeySequence(local_c0,0,0,0,0);
      QMenu::addAction((QString *)this,(QObject *)&local_b8,(char *)param_1,
                       (QKeySequence *)"1OnDeleteSnapshot()");
      QKeySequence::~QKeySequence(local_c0);
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_29 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1007b0108;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_1007b0108:
      QMetaObject::tr((char *)&local_c8,(char *)&PTR_staticMetaObject_10222d000,0x1e17d42);
      QKeySequence::QKeySequence(local_d0,0,0,0,0);
      QMenu::addAction((QString *)this,(QObject *)&local_c8,(char *)param_1,
                       (QKeySequence *)"1OnEdit()");
      QKeySequence::~QKeySequence(local_d0);
      if (*(int *)local_c8 == -1) goto LAB_1007b01a1;
      local_98 = local_c8;
      if (*(int *)local_c8 == 0) goto LAB_1007b0192;
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      iVar6 = *(int *)local_c8;
      UNLOCK();
    }
    local_29 = iVar6 != 0;
    if (!(bool)local_29) goto LAB_1007b0192;
  }
LAB_1007b01a1:
  if (((*(long *)(param_1 + 0x118) != 0) && (*(int *)(*(long *)(param_1 + 0x118) + 4) != 0)) &&
     (*(long *)(param_1 + 0x120) != 0)) {
    uVar3 = FUN_10018d490();
    cVar2 = FUN_1001754c0(uVar3);
    if (cVar2 != '\0') {
      QMetaObject::tr((char *)&local_d8,(char *)&PTR_staticMetaObject_10222d000,0x1e17d6f);
      QKeySequence::QKeySequence(local_e0,0,0,0,0);
      QMenu::addAction((QString *)this,(QObject *)&local_d8,(char *)param_1,
                       (QKeySequence *)"1OnLinkedClone()");
      QKeySequence::~QKeySequence(local_e0);
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_29 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1007b027e;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
    }
  }
LAB_1007b027e:
  FontUtils::setMacContextMenuFont((QWidget *)this,false);
  puVar1 = PTR_s_QWidget___color__rgba__255__255__102271080;
  iVar6 = -1;
  if (PTR_s_QWidget___color__rgba__255__255__102271080 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_QWidget___color__rgba__255__255__102271080);
    iVar6 = (int)sVar4;
  }
  pQVar5 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar6);
  local_40 = pQVar5;
  FUN_100137810(&local_38,&local_40,PTR_s_QMenu___background_color___33343_102271058);
  QWidget::setStyleSheet((QString *)this);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007b0309;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007b0309:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_29 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007b0334;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1007b0334:
  QVariant::QVariant(&local_50,true);
  QObject::setProperty((char *)this,(QVariant *)"macNoSubpixelAA");
  QVariant::~QVariant(&local_50);
  QMenu::popup((QPoint *)this,param_2);
  return;
}

