
void FUN_10038ba60(long param_1)

{
  QString *pQVar1;
  char *pcVar2;
  undefined *puVar3;
  size_t sVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  QVariant local_d8;
  Data *local_c8;
  Data *local_c0;
  Data *local_b8;
  undefined4 local_b0;
  QArrayData *local_a8;
  Data *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QFont local_78 [16];
  QFont local_68 [16];
  QVariant local_58;
  QVariant local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_10038d210(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
  pQVar1 = *(QString **)(param_1 + 0x10);
  QMetaObject::tr((char *)&local_38,"",0x1df015a);
  QWidget::setWindowTitle(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10038bae3;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10038bae3:
  QWidget::setWindowFlags(*(undefined8 *)(param_1 + 0x10),0x2000803);
  QWidget::setAttribute(*(undefined8 *)(param_1 + 0x10),0x78,1);
  QWidget::setAttribute(*(undefined8 *)(param_1 + 0x10),0x37,1);
  QWidget::setWindowModality(*(undefined8 *)(param_1 + 0x10),1);
  pcVar2 = *(char **)(param_1 + 0x10);
  QVariant::QVariant(&local_48,true);
  QObject::setProperty(pcVar2,(QVariant *)"macNoSubpixelAA");
  QVariant::~QVariant(&local_48);
  pcVar2 = *(char **)(*(long *)(param_1 + 0x18) + 0x60);
  QVariant::QVariant(&local_58,true);
  QObject::setProperty(pcVar2,(QVariant *)"macNoSubpixelAA");
  QVariant::~QVariant(&local_58);
  FontUtils::getH2Font(SUB81(local_68,0));
  QWidget::setFont(*(QFont **)(*(long *)(param_1 + 0x18) + 0x18));
  QWidget::setFont(*(QFont **)(*(long *)(param_1 + 0x18) + 0xd8));
  QWidget::setFont(*(QFont **)(*(long *)(param_1 + 0x18) + 0xe8));
  FontUtils::getH1Font(SUB81(local_78,0));
  QFont::setPointSize((int)local_78);
  QWidget::setFont(*(QFont **)(*(long *)(param_1 + 0x18) + 0xb0));
  QWidget::setFont(*(QFont **)(*(long *)(param_1 + 0x18) + 0x98));
  puVar3 = PTR_s_QWidget__1___border_image__url___102273bf0;
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x18) + 0xa0);
  iVar7 = -1;
  if (PTR_s_QWidget__1___border_image__url___102273bf0 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_QWidget__1___border_image__url___102273bf0);
    iVar7 = (int)sVar4;
  }
  local_88 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar7);
  local_90 = (QArrayData *)QString::fromAscii_helper("m_wgtYes",8);
  QString::arg(&local_80,&local_88,&local_90,0,0x20);
  QWidget::setStyleSheet(pQVar1);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10038bcb3;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10038bcb3:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10038bce9;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10038bce9:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10038bd19;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10038bd19:
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x18) + 0x88);
  local_98 = (QArrayData *)QString::fromAscii_helper("",0);
  QWidget::setStyleSheet(pQVar1);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10038bd7e;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10038bd7e:
  local_a8 = (QArrayData *)PTR_shared_null_1021e1288;
  local_a0 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper
            (*(undefined8 *)(param_1 + 0x10),&local_a8,PTR_staticMetaObject_1021e14a8,&local_a0,1);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10038bdf4;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10038bdf4:
  local_c8 = local_a0;
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 == 0) {
      QListData::detach((int)&local_c8);
      lVar5 = (long)*(int *)(local_c8 + 8);
      if ((local_a0 + (long)*(int *)(local_a0 + 8) * 8 != local_c8 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_c8 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_c8 + 0xc))
         ) {
        _memcpy(local_c8 + lVar5 * 8 + 0x10,local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + 1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
    }
  }
  local_c0 = local_c8 + (long)*(int *)(local_c8 + 8) * 8 + 0x10;
  local_b8 = local_c8 + (long)*(int *)(local_c8 + 0xc) * 8 + 0x10;
  if (*(int *)(local_c8 + 8) != *(int *)(local_c8 + 0xc)) {
    do {
      local_b0 = 1;
      pcVar2 = *(char **)local_c0;
      QVariant::QVariant(&local_d8,true);
      QObject::setProperty(pcVar2,(QVariant *)"macNoSubpixelAA");
      QVariant::~QVariant(&local_d8);
      local_c0 = local_c0 + 8;
    } while (local_c0 != local_b8);
  }
  local_b0 = 1;
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_29 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10038bf27;
    }
    QListData::dispose(local_c8);
  }
LAB_10038bf27:
  FUN_10038c2a0(param_1);
  FUN_10038c390(param_1);
  QObject::installEventFilter(*(QObject **)(*(long *)(param_1 + 0x18) + 0xb0));
  QObject::installEventFilter(*(QObject **)(*(long *)(param_1 + 0x18) + 0x98));
  QObject::installEventFilter(*(QObject **)(param_1 + 0x10));
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10038bf95;
    }
    QListData::dispose(local_a0);
  }
LAB_10038bf95:
  QFont::~QFont(local_78);
  QFont::~QFont(local_68);
  return;
}

