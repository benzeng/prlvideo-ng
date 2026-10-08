
undefined8 FUN_10037bee0(long param_1,long param_2,long param_3)

{
  long lVar1;
  QString *pQVar2;
  Data_conflict DVar3;
  QVariant local_50;
  Data_conflict local_40;
  QVariant local_38;
  Data_conflict local_28;
  undefined1 local_19;
  
  if (*(long *)PTR_self_1021e1388 == param_2) {
    pQVar2 = (QString *)QDeclarativeView::rootContext();
    if (pQVar2 != (QString *)0x0) {
      if (*(short *)(param_3 + 0x10) == 0x7a) {
        local_40.field7 = QString::fromAscii_helper("appIsActive",0xb);
        QVariant::QVariant(&local_50,false);
        QDeclarativeContext::setContextProperty(pQVar2,(QVariant *)&local_40);
        QVariant::~QVariant(&local_50);
        if (*(int *)local_40.field15 == -1) {
          return 0;
        }
        DVar3 = local_40;
        if (*(int *)local_40.field15 != 0) {
          LOCK();
          *(int *)local_40.field15 = *(int *)local_40.field15 + -1;
          UNLOCK();
          if (*(int *)local_40.field15 != 0) {
            return 0;
          }
          local_19 = 0;
        }
      }
      else {
        if (*(short *)(param_3 + 0x10) != 0x79) {
          return 0;
        }
        local_28.field7 = QString::fromAscii_helper("appIsActive",0xb);
        QVariant::QVariant(&local_38,true);
        QDeclarativeContext::setContextProperty(pQVar2,(QVariant *)&local_28);
        QVariant::~QVariant(&local_38);
        if (*(int *)local_28.field15 == -1) {
          return 0;
        }
        DVar3 = local_28;
        if (*(int *)local_28.field15 != 0) {
          LOCK();
          *(int *)local_28.field15 = *(int *)local_28.field15 + -1;
          UNLOCK();
          if (*(int *)local_28.field15 != 0) {
            return 0;
          }
          local_19 = 0;
        }
      }
      QArrayData::deallocate((QArrayData *)DVar3.field15,2,8);
    }
  }
  else {
    lVar1 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      lVar1 = *(long *)(param_1 + 0x20);
    }
    if ((lVar1 == param_2) && (*(short *)(param_3 + 0x10) == 0xe)) {
      QWidget::resize(*(QSize **)(param_1 + 0x10));
    }
  }
  return 0;
}

