
/* WARNING: Type propagation algorithm not settling */

void FUN_1007a2710(QFrame *param_1,undefined4 *param_2,undefined8 param_3)

{
  QFrame *pQVar1;
  QFrame *pQVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  QObject *pQVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  long local_78;
  long local_70;
  long local_68 [3];
  undefined4 local_50;
  undefined4 local_4c;
  QVariant local_48;
  undefined1 local_31;
  
  QFrame::QFrame(param_1,param_3,0);
  *(undefined ***)param_1 = &PTR_FUN_10222c870;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10222ca68;
  pQVar1 = param_1 + 0x30;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x48) = 3;
  param_1[0x4c] = (QFrame)0x0;
  *(undefined4 *)(param_1 + 0x50) = 3;
  param_1[0x54] = (QFrame)0x0;
  *(undefined4 *)(param_1 + 0x58) = 3;
  param_1[0x5c] = (QFrame)0x0;
  *(undefined4 *)(param_1 + 0x60) = 3;
  param_1[100] = (QFrame)0x0;
  puVar3 = PTR_shared_null_1021e1288;
  auVar9._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar9._0_8_ = PTR_shared_null_1021e1288;
  auVar9._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar9;
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar9;
  *(undefined **)(param_1 + 0x90) = puVar3;
  *(undefined **)(param_1 + 0xa0) = puVar3;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0xff;
  *(undefined4 *)(param_1 + 0xac) = 0xff;
  param_1[0xb8] = (QFrame)0x0;
  *(undefined **)(param_1 + 0xc0) = PTR_shared_null_1021e15d0;
  param_1[200] = (QFrame)0x0;
  param_1[0xe0] = (QFrame)0x0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  QPixmap::QPixmap((QPixmap *)(param_1 + 0xf8));
  QPixmap::QPixmap((QPixmap *)(param_1 + 0x118));
  pQVar2 = param_1 + 0x138;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  QPixmap::QPixmap((QPixmap *)(param_1 + 0x150));
  QVariant::QVariant(&local_48,true);
  QObject::setProperty((char *)param_1,(QVariant *)"macNoSubpixelAA");
  QVariant::~QVariant(&local_48);
  if (param_2 != (undefined4 *)0x0) {
    if (param_2[10] == 7) {
      QString::operator=((QString *)(param_1 + 0xa0),(QString *)(param_2 + 0x18));
      uVar5 = FUN_100152280();
      pQVar6 = (QObject *)FUN_1001548f0(uVar5,param_1 + 0xa0);
      piVar7 = (int *)0x0;
      if (pQVar6 != (QObject *)0x0) {
        piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar6);
      }
      piVar8 = *(int **)pQVar1;
      if (piVar8 != piVar7) {
        if (piVar7 != (int *)0x0) {
          LOCK();
          *piVar7 = *piVar7 + 1;
          local_31 = *piVar7 != 0;
          UNLOCK();
          piVar8 = *(int **)pQVar1;
        }
        if (piVar8 != (int *)0x0) {
          LOCK();
          *piVar8 = *piVar8 + -1;
          local_31 = *piVar8 != 0;
          UNLOCK();
          if ((!(bool)local_31) && (*(void **)pQVar1 != (void *)0x0)) {
            operator_delete(*(void **)pQVar1);
          }
        }
        *(int **)(param_1 + 0x30) = piVar7;
        *(QObject **)(param_1 + 0x38) = pQVar6;
      }
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + -1;
        local_31 = *piVar7 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar7);
        }
      }
      if (((*(long *)pQVar1 != 0) && (*(int *)(*(long *)pQVar1 + 4) != 0)) &&
         (*(long *)(param_1 + 0x38) != 0)) {
        uVar5 = FUN_10018c280();
        uVar5 = FUN_100319960(uVar5);
        local_50 = 0x91;
        local_4c = 0x5a;
        local_68[1] = 0;
        local_68[2] = 0xffffffffffffffff;
        pQVar6 = (QObject *)FUN_100327670(uVar5,&local_50,local_68 + 1,DAT_100e151e0);
        piVar7 = (int *)0x0;
        if (pQVar6 != (QObject *)0x0) {
          piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar6);
        }
        piVar8 = *(int **)pQVar2;
        if (piVar8 != piVar7) {
          if (piVar7 != (int *)0x0) {
            LOCK();
            *piVar7 = *piVar7 + 1;
            local_31 = *piVar7 != 0;
            UNLOCK();
            piVar8 = *(int **)pQVar2;
          }
          if (piVar8 != (int *)0x0) {
            LOCK();
            *piVar8 = *piVar8 + -1;
            local_31 = *piVar8 != 0;
            UNLOCK();
            if ((!(bool)local_31) && (*(void **)pQVar2 != (void *)0x0)) {
              operator_delete(*(void **)pQVar2);
            }
          }
          *(int **)(param_1 + 0x138) = piVar7;
          *(QObject **)(param_1 + 0x140) = pQVar6;
        }
        if (piVar7 != (int *)0x0) {
          LOCK();
          *piVar7 = *piVar7 + -1;
          local_31 = *piVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            operator_delete(piVar7);
          }
        }
        uVar5 = 0;
        if ((*(long *)pQVar1 != 0) && (uVar5 = 0, *(int *)(*(long *)pQVar1 + 4) != 0)) {
          uVar5 = *(undefined8 *)(param_1 + 0x38);
        }
        QObject::connect(local_68,uVar5,"2vmConfigurationChanged(CVmConfiguration)",param_1,
                         "1update()",0);
        if (local_68[0] == 0) {
          cVar4 = '\0';
        }
        else {
          cVar4 = QMetaObject::Connection::isConnected_helper();
        }
        QMetaObject::Connection::~Connection((Connection *)local_68);
        uVar5 = 0;
        if ((*(long *)pQVar1 != 0) && (uVar5 = 0, *(int *)(*(long *)pQVar1 + 4) != 0)) {
          uVar5 = *(undefined8 *)(param_1 + 0x38);
        }
        QObject::connect(&local_70,uVar5,
                         "2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",param_1,
                         "1onVmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",0);
        if (cVar4 == '\0') {
          cVar4 = '\0';
        }
        else if (local_70 == 0) {
          cVar4 = '\0';
        }
        else {
          cVar4 = QMetaObject::Connection::isConnected_helper();
        }
        QMetaObject::Connection::~Connection((Connection *)&local_70);
        uVar5 = 0;
        if ((*(long *)pQVar2 != 0) && (uVar5 = 0, *(int *)(*(long *)pQVar2 + 4) != 0)) {
          uVar5 = *(undefined8 *)(param_1 + 0x140);
        }
        QObject::connect(&local_78,uVar5,"2imageUpdated(QImage)",param_1,"1update()",0);
        if ((cVar4 != '\0') && (local_78 != 0)) {
          QMetaObject::Connection::isConnected_helper();
        }
        QMetaObject::Connection::~Connection((Connection *)&local_78);
      }
    }
    else if (param_2[10] - 1 < 3) {
      QString::operator=((QString *)(param_1 + 0x80),(QString *)(param_2 + 0x10));
      QString::operator=((QString *)(param_1 + 0x90),(QString *)(param_2 + 0x14));
      QString::operator=((QString *)(param_1 + 0xa0),(QString *)(param_2 + 0x18));
      QString::operator=((QString *)(param_1 + 0x88),(QString *)(param_2 + 0x12));
      QString::operator=((QString *)(param_1 + 0x70),(QString *)(param_2 + 0xc));
      QString::operator=((QString *)(param_1 + 0x78),(QString *)(param_2 + 0xe));
      *(undefined4 *)(param_1 + 0x98) = param_2[0x16];
      *(undefined4 *)(param_1 + 0xac) = param_2[0x1b];
      *(undefined4 *)(param_1 + 0xa8) = param_2[0x1a];
      param_1[0xb0] = *(QFrame *)(param_2 + 0x1c);
      param_1[0xb1] = *(QFrame *)((long)param_2 + 0x71);
      *(undefined4 *)(param_1 + 0xb4) = param_2[0x1d];
    }
    *(undefined4 *)(param_1 + 0x48) = param_2[2];
    param_1[0x4c] = *(QFrame *)(param_2 + 3);
    *(undefined4 *)(param_1 + 0x50) = param_2[4];
    param_1[0x54] = *(QFrame *)(param_2 + 5);
    *(undefined4 *)(param_1 + 0x58) = param_2[6];
    param_1[0x5c] = *(QFrame *)(param_2 + 7);
    *(undefined4 *)(param_1 + 0x60) = param_2[8];
    param_1[100] = *(QFrame *)(param_2 + 9);
    *(undefined4 *)(param_1 + 0x68) = param_2[10];
    *(undefined4 *)(param_1 + 0x44) = param_2[1];
    *(undefined4 *)(param_1 + 0x40) = *param_2;
    QWidget::setFixedSize((int)param_1,0xd3);
  }
  return;
}

