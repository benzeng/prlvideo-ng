
undefined8 FUN_1001e18f0(long param_1)

{
  long lVar1;
  char cVar2;
  CSplashScreen *this;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x10) + 0x40) != 0)) goto LAB_1001e1ace;
  FUN_1001c72e0(&local_38);
  cVar2 = FUN_100d80630(1);
  if (cVar2 != '\0') {
    QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,(int)PTR_s_Lite_102270a50);
    QString::fromUtf8_helper((char *)&local_40,0x1e31adc);
    QString::append(&local_40);
    QString::append(&local_38);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_29 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001e19bc;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_1001e19bc:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001e19ec;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1001e19ec:
  lVar1 = *(long *)(param_1 + 0x10);
  this = operator_new(0x38);
  CSplashScreen::CSplashScreen(this,&local_38,true,(QWidget *)0x0);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
  piVar4 = *(int **)(lVar1 + 0x38);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_29 = *piVar3 != 0;
      UNLOCK();
      piVar4 = *(int **)(lVar1 + 0x38);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(lVar1 + 0x38) != (void *)0x0)) {
        operator_delete(*(void **)(lVar1 + 0x38));
      }
    }
    *(int **)(lVar1 + 0x38) = piVar3;
    *(CSplashScreen **)(lVar1 + 0x40) = this;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_29 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar3);
    }
  }
  QWidget::show();
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) goto LAB_1001e1ace;
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1001e1ace:
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
  uVar5 = 0;
  if ((lVar1 != 0) && (uVar5 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x40);
  }
  return uVar5;
}

