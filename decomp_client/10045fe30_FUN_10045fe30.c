
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10045fe30(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  QString *pQVar2;
  undefined8 uVar3;
  long lVar4;
  QString *pQVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  QArrayData *local_b8;
  QArrayData *local_b0;
  QString local_a8;
  QVariant local_a0;
  QArrayData *local_90;
  QArrayData *local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined2 local_74;
  QBrush local_70 [8];
  QString local_68;
  QString local_60;
  QArrayData *local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_1007868d0(&local_58,5);
  FUN_1001eeaf0(&local_50,param_2,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10045fea1;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10045fea1:
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if ((local_50.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0) {
    uVar3 = QVariant::toULongLong((bool *)&local_50);
    FUN_100def650(&local_68,uVar3,1);
    QString::operator=(&local_60,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10045ff0e;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
  }
LAB_10045ff0e:
  QLabel::setText(*(QString **)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x198));
  lVar4 = *(long *)(param_1 + 0x18);
  uVar6 = (ulong)*(uint *)(lVar4 + 8);
  if ((int)*(uint *)(lVar4 + 8) < *(int *)(lVar4 + 0xc)) {
    lVar7 = 0;
    do {
      puVar1 = *(undefined8 **)(lVar4 + 0x10 + ((int)uVar6 + lVar7) * 8);
      local_90 = (QArrayData *)*puVar1;
      if (1 < *(int *)local_90 + 1U) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + 1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
      }
      local_88 = (QArrayData *)puVar1[1];
      if (1 < *(int *)local_88 + 1U) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + 1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
      }
      local_80 = *(undefined4 *)(puVar1 + 2);
      local_74 = *(undefined2 *)((long)puVar1 + 0x1c);
      local_7c = *(undefined8 *)((long)puVar1 + 0x14);
      QBrush::QBrush(local_70,(QBrush *)(puVar1 + 4));
      FUN_1001eeaf0(&local_a0,param_2,
                    *(undefined8 *)
                     (*(long *)(param_1 + 0x18) + 0x10 +
                     (*(int *)(*(long *)(param_1 + 0x18) + 8) + lVar7) * 8));
      QVariant::operator=(&local_50,&local_a0);
      QVariant::~QVariant(&local_a0);
      uVar3 = QVariant::toULongLong((bool *)&local_50);
      CStackedBar::element
                ((int)*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x1c8));
      auVar8._8_4_ = (int)((ulong)uVar3 >> 0x20);
      auVar8._0_8_ = uVar3;
      auVar8._12_4_ = _UNK_100e11114;
      CStackedBarElement::setValue
                (((double)CONCAT44(_DAT_100e11110,(int)uVar3) - _DAT_100e11120) +
                 (auVar8._8_8_ - _UNK_100e11128));
      pQVar2 = *(QString **)
                (*(long *)(param_1 + 0x28) + 0x10 +
                (*(int *)(*(long *)(param_1 + 0x28) + 8) + lVar7) * 8);
      local_b0 = (QArrayData *)QString::fromAscii_helper("<b>%1</b>",9);
      QString::arg(&local_a8,&local_b0,&local_88,0,0x20);
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004600aa;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_1004600aa:
      if ((local_50.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0) {
        QString::fromUtf8_helper((char *)&local_40,0x1ddad42);
        pQVar5 = (QString *)QString::append(&local_a8);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10046010f;
          }
          QArrayData::deallocate(local_40,2,8);
        }
LAB_10046010f:
        FUN_100def650(&local_b8,uVar3,1);
        QString::append(pQVar5);
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100460168;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
      }
LAB_100460168:
      QLabel::setText(pQVar2);
      if (*(int *)local_a8.field0_0x0 != -1) {
        if (*(int *)local_a8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
          local_31 = *(int *)local_a8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004601b1;
        }
        QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
      }
LAB_1004601b1:
      QBrush::~QBrush(local_70);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004601e9;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1004601e9:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100460226;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100460226:
      lVar7 = lVar7 + 1;
      lVar4 = *(long *)(param_1 + 0x18);
      uVar6 = (ulong)*(int *)(lVar4 + 8);
    } while (lVar7 < (long)((long)*(int *)(lVar4 + 0xc) - uVar6));
  }
  QWidget::update();
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100460285;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100460285:
  QVariant::~QVariant(&local_50);
  return;
}

