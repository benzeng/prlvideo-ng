
void FUN_10045f650(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  QPalette *pQVar4;
  QString *pQVar5;
  long lVar6;
  CStackedBarElement *this;
  QPalette *pQVar7;
  void *pvVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  QVariant local_c0;
  QMapNodeBase *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QPalette local_98 [16];
  QArrayData *local_88;
  QArrayData *local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined2 local_6c;
  QBrush local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  QBrush local_40 [15];
  undefined1 local_31;
  
  plVar1 = (long *)(param_1 + 0x20);
  local_48 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x48);
  FUN_100359270(plVar1,&local_48);
  plVar2 = (long *)(param_1 + 0x28);
  FUN_100461500(plVar2,*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x58);
  local_50 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x80);
  FUN_100359270(plVar1,&local_50);
  FUN_100461500(plVar2,*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x90);
  local_58 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0xb8);
  FUN_100359270(plVar1,&local_58);
  FUN_100461500(plVar2,*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 200);
  local_60 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0xf0);
  FUN_100359270(plVar1,&local_60);
  FUN_100461500(plVar2,*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x100);
  lVar6 = *(long *)(param_1 + 0x18);
  uVar10 = (ulong)*(uint *)(lVar6 + 8);
  if ((int)*(uint *)(lVar6 + 8) < *(int *)(lVar6 + 0xc)) {
    lVar11 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar6 + 0x10 + ((int)uVar10 + lVar11) * 8);
      local_88 = (QArrayData *)*puVar3;
      if (1 < *(int *)local_88 + 1U) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + 1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
      }
      local_80 = (QArrayData *)puVar3[1];
      if (1 < *(int *)local_80 + 1U) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + 1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
      }
      local_78 = *(undefined4 *)(puVar3 + 2);
      local_6c = *(undefined2 *)((long)puVar3 + 0x1c);
      local_74 = *(undefined8 *)((long)puVar3 + 0x14);
      QBrush::QBrush(local_68,(QBrush *)(puVar3 + 4));
      this = operator_new(0x18);
      CStackedBarElement::CStackedBarElement(this,(QObject *)0x0);
      CStackedBarElement::setBrush((QBrush *)this);
      CStackedBar::addElement
                (*(CStackedBarElement **)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x1c8));
      pQVar4 = *(QPalette **)(*plVar1 + 0x10 + (*(int *)(*plVar1 + 8) + lVar11) * 8);
      pQVar7 = (QPalette *)QWidget::palette();
      QPalette::QPalette(local_98,pQVar7);
      QBrush::QBrush(local_40,&local_78,1);
      QPalette::setBrush(local_98,5,10,local_40);
      QBrush::~QBrush(local_40);
      QWidget::setPalette(pQVar4);
      pQVar5 = *(QString **)(*plVar2 + 0x10 + (*(int *)(*plVar2 + 8) + lVar11) * 8);
      local_a8 = (QArrayData *)QString::fromAscii_helper("<b>%1</b>",9);
      QString::arg(&local_a0,&local_a8,&local_80,0,0x20);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10045f8f0;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_10045f8f0:
      QLabel::setText(pQVar5);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10045f935;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_10045f935:
      QPalette::~QPalette(local_98);
      QBrush::~QBrush(local_68);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10045f97d;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_10045f97d:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10045f9ad;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_10045f9ad:
      lVar11 = lVar11 + 1;
      lVar6 = *(long *)(param_1 + 0x18);
      uVar10 = (ulong)*(int *)(lVar6 + 8);
    } while (lVar11 < (long)((long)*(int *)(lVar6 + 0xc) - uVar10));
  }
  if (DAT_1023109d8 == (void *)0x0) {
    pvVar8 = operator_new(0x18);
    FUN_100785b00(pvVar8);
    DAT_10226c7e0 = 1;
    DAT_1023109d8 = pvVar8;
  }
  pvVar8 = DAT_1023109d8;
  uVar9 = FUN_10044e460(*(undefined8 *)(param_1 + 0x10));
  uVar9 = FUN_100785c90(pvVar8,uVar9,9);
  FUN_1007864c0(&local_c0,uVar9);
  QVariant::toMap();
  QVariant::~QVariant(&local_c0);
  FUN_10045fe30(param_1,&local_b0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      UNLOCK();
      if (*(int *)local_b0 != 0) {
        return;
      }
      local_31 = 0;
    }
    if (*(long *)(local_b0 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_b0,(int)*(undefined8 *)(local_b0 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_b0);
  }
  return;
}

