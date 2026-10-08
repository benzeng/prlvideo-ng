
void FUN_1006ee530(long param_1)

{
  long lVar1;
  QString *pQVar2;
  int iVar3;
  QStackedWidget *this;
  void *pvVar4;
  undefined8 uVar5;
  QWidget *pQVar6;
  QVBoxLayout *this_00;
  QSize *pQVar7;
  QArrayData *pQVar8;
  QArrayData *local_50;
  undefined8 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  this = operator_new(0x30);
  QStackedWidget::QStackedWidget(this,*(QWidget **)(param_1 + 0x10));
  *(QStackedWidget **)(param_1 + 0x20) = this;
  pvVar4 = operator_new(0x38);
  FUN_1006eaf40(pvVar4,this);
  *(void **)(param_1 + 0x28) = pvVar4;
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Connecting_to_the_Parallels_onli_1022709a0);
  FUN_1006eb150(pvVar4,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006ee5dd;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006ee5dd:
  iVar3 = FUN_1006eb140(*(undefined8 *)(param_1 + 0x28));
  CProgressIndicator::setTimeInterval(iVar3);
  uVar5 = FUN_1006eb140(*(undefined8 *)(param_1 + 0x28));
  CProgressIndicator::setType(uVar5,1);
  iVar3 = FUN_1006eb140(*(undefined8 *)(param_1 + 0x28));
  CProgressIndicator::setIndicatorSize(iVar3);
  QWidget::setFixedSize(*(QSize **)(param_1 + 0x28));
  QStackedWidget::addWidget(*(QWidget **)(param_1 + 0x20));
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,*(undefined8 *)(param_1 + 0x20),0);
  *(QWidget **)(param_1 + 0x30) = pQVar6;
  this_00 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this_00,pQVar6);
  QLayout::setMargin((int)this_00);
  QWidget::setFixedSize(*(QSize **)(param_1 + 0x30));
  QStackedWidget::addWidget(*(QWidget **)(param_1 + 0x20));
  pQVar7 = operator_new(0x38);
  CAbstractWebView::CAbstractWebView((CAbstractWebView *)pQVar7,*(undefined8 *)(param_1 + 0x30),0,0)
  ;
  *(QSize **)(param_1 + 0x38) = pQVar7;
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
  local_48 = CONCAT44((*(int *)(lVar1 + 0x20) + 1) - *(int *)(lVar1 + 0x18),
                      (*(int *)(lVar1 + 0x1c) + 1) - *(int *)(lVar1 + 0x14));
  QWidget::setFixedSize(pQVar7);
  QBoxLayout::addWidget(this_00,*(undefined8 *)(param_1 + 0x38),0,0);
  pvVar4 = operator_new(0x38);
  FUN_1006eaf40(pvVar4,*(undefined8 *)(param_1 + 0x20));
  *(void **)(param_1 + 0x40) = pvVar4;
  QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Processing_your_request__please_w_1022709a8);
  FUN_1006eb150(pvVar4,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006ee776;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006ee776:
  pQVar2 = *(QString **)(param_1 + 0x40);
  pQVar8 = (QArrayData *)
           QString::fromAscii_helper
                     ("QWidget { color: rgb(204, 204, 204); }QWidget { background-image: url(:/pixmaps/PD10_Theme/pattern.png); }"
                      ,0x6a);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006ee7cb;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_1006ee7cb:
  iVar3 = FUN_1006eb140(*(undefined8 *)(param_1 + 0x40));
  CProgressIndicator::setTimeInterval(iVar3);
  uVar5 = FUN_1006eb140(*(undefined8 *)(param_1 + 0x40));
  CProgressIndicator::setType(uVar5,0);
  iVar3 = FUN_1006eb140(*(undefined8 *)(param_1 + 0x40));
  CProgressIndicator::setIndicatorSize(iVar3);
  QWidget::setFixedSize(*(QSize **)(param_1 + 0x40));
  QStackedWidget::addWidget(*(QWidget **)(param_1 + 0x20));
  pQVar7 = operator_new(0x38);
  FUN_1006ebc70(pQVar7,*(undefined8 *)(param_1 + 0x20));
  *(QSize **)(param_1 + 0x48) = pQVar7;
  QWidget::setFixedSize(pQVar7);
  QStackedWidget::addWidget(*(QWidget **)(param_1 + 0x20));
  FUN_1003812a0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20));
  return;
}

