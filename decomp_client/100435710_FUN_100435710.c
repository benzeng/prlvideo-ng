
void FUN_100435710(QString *param_1)

{
  QFont *pQVar1;
  QString *pQVar2;
  QObject *pQVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QFont local_50 [16];
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_100436970(param_1[0xc].field0_0x0,param_1);
  FUN_1001c72e0(&local_40);
  QWidget::setWindowTitle(param_1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100435777;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100435777:
  iVar6 = QWidget::layout();
  iVar7 = WidgetUtils::getCheckBoxTextStartPos();
  QLayout::setContentsMargins(iVar6,iVar7,6,0);
  pQVar1 = *(QFont **)(param_1[0xc].field0_0x0 + 0xa0);
  FontUtils::getSmallFont(SUB81(local_50,0));
  QWidget::setFont(pQVar1);
  QFont::~QFont(local_50);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  uVar8 = CVmCommonOptions::getOsVersion();
  uVar11 = 8;
  if (uVar8 - 0x809 < 8) {
LAB_100435858:
    if ((uVar8 < 0x807) || (uVar11 != 8)) goto LAB_100435866;
  }
  else {
    uVar11 = uVar8 >> 8;
    uVar12 = uVar11 - 9;
    if (uVar12 < 8) {
      bVar5 = 0xc1U >> ((byte)uVar12 & 0x1f) & 1;
    }
    else {
      bVar5 = 0;
    }
    if ((1 < uVar8 - 0x807) && (bVar5 == 0)) {
      QWidget::hide();
    }
    if ((7 < uVar12) || ((0xc1U >> (uVar12 & 0x1f) & 1) == 0)) {
      QWidget::hide();
      goto LAB_100435858;
    }
LAB_100435866:
    if ((7 < uVar11 - 9) || ((0xc1U >> (uVar11 - 9 & 0x1f) & 1) == 0)) {
      QWidget::hide();
    }
  }
  if ((uVar8 < 0x806) || ((uVar8 & 0xffffff00) != 0x800)) {
    QWidget::hide();
  }
  else {
    pQVar2 = *(QString **)(param_1[0xc].field0_0x0 + 0xa0);
    if (uVar8 == 0x807) {
      QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,0x1df4210);
      QLabel::setText(pQVar2);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          iVar6 = *(int *)local_58;
          UNLOCK();
joined_r0x000100435951:
          local_31 = iVar6 != 0;
          if ((bool)local_31) goto LAB_100435966;
        }
LAB_100435957:
        QArrayData::deallocate(local_58,2,8);
      }
    }
    else {
      QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,0x1df4242);
      QLabel::setText(pQVar2);
      if (*(int *)local_60 != -1) {
        local_58 = local_60;
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          iVar6 = *(int *)local_60;
          UNLOCK();
          goto joined_r0x000100435951;
        }
        goto LAB_100435957;
      }
    }
  }
LAB_100435966:
  uVar9 = FUN_100152280();
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  lVar10 = FUN_1001547d0(uVar9,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004359c3;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004359c3:
  if (lVar10 != 0) {
    pQVar3 = *(QObject **)(param_1[0xc].field0_0x0 + 8);
    iVar6 = FUN_10015aae0(lVar10);
    WidgetUtils::Adjuster::adjustWidgetText(pQVar3,uVar8,iVar6);
  }
  QWidget::hide();
  (**(code **)(param_1->field0_0x0 + 0x78))(param_1);
  QWidget::setFixedWidth((int)param_1);
  (**(code **)(param_1->field0_0x0 + 0x78))(param_1);
  QWidget::setFixedHeight((int)param_1);
  pQVar4 = param_1[5].field0_0x0;
  param_1[0x2d].field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       CONCAT44((*(int *)(pQVar4 + 0x20) + 1) - *(int *)(pQVar4 + 0x18),
                (*(int *)(pQVar4 + 0x1c) + 1) - *(int *)(pQVar4 + 0x14));
  return;
}

