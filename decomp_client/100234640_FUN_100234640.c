
void FUN_100234640(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  QWidget *pQVar4;
  CSplashScreen *this;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  QObject *pQVar8;
  int *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar3 = FUN_100370280();
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1003193e0(&local_40,uVar7);
  pQVar4 = (QWidget *)FUN_1003704b0(uVar3,&local_40,DAT_100e152b8);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002346c8;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002346c8:
  if (pQVar4 == (QWidget *)0x0) {
    return;
  }
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar1 = FUN_10031bab0(uVar7);
  if (cVar1 != '\0') goto LAB_10023490e;
  this = operator_new(0x38);
  QMetaObject::tr((char *)&local_48,(char *)&PTR_PTR_1022026c0,0x1ddd96a);
  CSplashScreen::CSplashScreen(this,&local_48,true,pQVar4);
  piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
  piVar6 = *(int **)(param_1 + 0x60);
  if (piVar6 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_31 = *piVar5 != 0;
      UNLOCK();
      piVar6 = *(int **)(param_1 + 0x60);
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_31 = *piVar6 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + 0x60) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x60));
      }
    }
    *(int **)(param_1 + 0x60) = piVar5;
    *(CSplashScreen **)(param_1 + 0x68) = this;
  }
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    local_31 = *piVar5 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar5);
    }
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002347db;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1002347db:
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x60) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x60) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x68);
  }
  QWidget::setAttribute(uVar7,0x37,1);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar7 = FUN_100319390(uVar7);
  iVar2 = FUN_10018f890(uVar7);
  if (iVar2 != 0x80b) {
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar7 = FUN_100319390(uVar7);
    iVar2 = FUN_10018f890(uVar7);
    if (iVar2 != 0x809) {
      uVar7 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar7 = *(undefined8 *)(param_1 + 0x20);
      }
      uVar7 = FUN_100319390(uVar7);
      iVar2 = FUN_10018f890(uVar7);
      if (iVar2 != 0x80c) {
        uVar7 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar7 = *(undefined8 *)(param_1 + 0x20);
        }
        uVar7 = FUN_100319390(uVar7);
        iVar2 = FUN_10018f890(uVar7);
        if (iVar2 != 0x80e) {
          uVar7 = 0;
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
            uVar7 = *(undefined8 *)(param_1 + 0x20);
          }
          uVar7 = FUN_100319390(uVar7);
          iVar2 = FUN_10018f890(uVar7);
          if (iVar2 != 0x80f) {
            pQVar8 = (QObject *)0x0;
            if ((*(long *)(param_1 + 0x60) != 0) &&
               (pQVar8 = (QObject *)0x0, *(int *)(*(long *)(param_1 + 0x60) + 4) != 0)) {
              pQVar8 = *(QObject **)(param_1 + 0x68);
            }
            QTimer::singleShot(1000,pQVar8,"1show()");
            goto LAB_10023490e;
          }
        }
      }
    }
  }
  QWidget::show();
LAB_10023490e:
  cVar1 = QWidget::isMinimized();
  if (cVar1 == '\0') {
    QWidget::hide();
  }
  else {
    QWidget::setWindowOpacity(0.0);
    QWidget::showNormal();
    QWidget::hide();
    QWidget::setWindowOpacity(DAT_100e11050);
  }
  MacUtils::detachAllSheets((QWidget *)&local_50,pQVar4);
  if (*local_50 != -1) {
    if (*local_50 != 0) {
      LOCK();
      *local_50 = *local_50 + -1;
      UNLOCK();
      if (*local_50 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_10006b5d0(&local_50,local_50);
  }
  return;
}

