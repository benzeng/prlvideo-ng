
void FUN_100633780(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  QLocale local_68 [8];
  QArrayData *local_60;
  QArrayData *local_58;
  QUrl local_50 [8];
  QArrayData *local_48;
  QArrayData *local_40;
  QUrl local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  QObject::sender();
  lVar2 = QMetaObject::cast((QObject *)&PTR_PTR_102221eb0);
  if ((param_2 < 0) || (lVar2 == 0)) {
LAB_10063389f:
    local_60 = (QArrayData *)
               QString::fromAscii_helper("http://www.parallels.com/licenses-@LOCALE@",0x2a);
    QLocale::QLocale(local_68);
    FUN_100d3f730(&local_58,&local_60,local_68);
    QUrl::QUrl(local_50,&local_58,0);
    QDesktopServices::openUrl(local_50);
    QUrl::~QUrl(local_50);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_21 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10063391f;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_10063391f:
    QLocale::~QLocale(local_68);
    if (*(int *)local_60 == -1) goto LAB_100633958;
    local_48 = local_60;
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      iVar1 = *(int *)local_60;
      UNLOCK();
joined_r0x000100633943:
      local_21 = iVar1 != 0;
      if ((bool)local_21) goto LAB_100633958;
    }
  }
  else {
    FUN_10062e270(&local_30,lVar2);
    iVar1 = *(int *)(local_30 + 4);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006337f9;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_1006337f9:
    if (iVar1 == 0) goto LAB_10063389f;
    FUN_10062e270(&local_48,lVar2);
    QString::toUtf8();
    QUrl::fromEncoded(local_38,&local_40,0);
    QDesktopServices::openUrl(local_38);
    QUrl::~QUrl(local_38);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10063386d;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_10063386d:
    if (*(int *)local_48 == -1) goto LAB_100633958;
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      iVar1 = *(int *)local_48;
      UNLOCK();
      goto joined_r0x000100633943;
    }
  }
  QArrayData::deallocate(local_48,2,8);
LAB_100633958:
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98),0));
  QStackedWidget::setCurrentWidget(*(QWidget **)(*(long *)(param_1 + 0x60) + 0x20));
  CProgressIndicator::toggleAnimation(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x40),0));
  FUN_1006331a0(param_1);
  return;
}

