
QFont * FUN_10037ad30(undefined8 param_1,double param_2,QFont *param_3,QPoint *param_4,int param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  QRect *pQVar7;
  double dVar8;
  int local_1b8 [3];
  int local_1ac;
  short local_1a8;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  QString local_190;
  QFont local_188 [16];
  QString local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined1 local_151;
  int local_110;
  char local_fc [196];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  if ((((*(long *)(param_4 + 0x30) == 0) || (*(int *)(*(long *)(param_4 + 0x30) + 4) == 0)) ||
      (*(long *)(param_4 + 0x38) == 0)) || (lVar4 = FUN_100323e00(), lVar4 == 0)) {
    *(undefined4 *)(param_3 + 8) = 0x80000000;
    *(undefined8 *)param_3 = 0;
    goto LAB_10037ae46;
  }
  uVar5 = 0;
  if ((*(long *)(param_4 + 0x30) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_4 + 0x30) + 4) != 0))
  {
    uVar5 = 0;
    if (*(long *)(param_4 + 0x38) != 0) {
      uVar5 = FUN_100323e00(*(long *)(param_4 + 0x38));
    }
  }
  lVar4 = FUN_100319cd0(uVar5);
  FUN_100347110(lVar4);
  if (local_110 == 3) {
    if (param_5 < 0x20) {
      if (param_5 == 2) {
        FUN_100347130(lVar4);
        dVar8 = (double)WidgetUtils::cursorPos();
        if (0.0 <= dVar8) {
          iVar3 = (int)(dVar8 + DAT_100e110f0);
        }
        else {
          iVar3 = (int)((dVar8 - (double)(int)(DAT_100e110e0 + dVar8)) + DAT_100e110f0) +
                  (int)(DAT_100e110e0 + dVar8);
        }
        if (0.0 <= param_2) {
          iVar6 = (int)(param_2 + DAT_100e110f0);
        }
        else {
          iVar6 = (int)((param_2 - (double)(int)(DAT_100e110e0 + param_2)) + DAT_100e110f0) +
                  (int)(DAT_100e110e0 + param_2);
        }
        local_170 = CONCAT44(iVar6,iVar3);
        uVar5 = QWidget::mapFromGlobal(param_4);
        local_168 = (undefined4)uVar5;
        local_164 = (undefined4)((ulong)uVar5 >> 0x20);
        pQVar7 = (QRect *)&local_168;
        local_160 = local_168;
        local_15c = local_164;
LAB_10037b151:
        QVariant::QVariant((QVariant *)param_3,pQVar7);
        goto LAB_10037ae46;
      }
      if (param_5 != 4) goto LAB_10037b0ad;
      local_190.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Palatino-Roman",0xe);
      QFont::QFont(local_188,&local_190,2,-1,false);
      QFont::operator_cast_to_QVariant(param_3);
      QFont::~QFont(local_188);
      if (*(int *)local_190.field0_0x0 == -1) goto LAB_10037ae46;
      local_178.field0_0x0 = local_190.field0_0x0;
      if (*(int *)local_190.field0_0x0 != 0) {
        LOCK();
        *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
        iVar3 = *(int *)local_190.field0_0x0;
        UNLOCK();
        goto joined_r0x00010037afdd;
      }
    }
    else {
      if (param_5 != 0x20) {
        if (param_5 == 0x80) {
          QVariant::QVariant((QVariant *)param_3,0);
          goto LAB_10037ae46;
        }
        goto LAB_10037b0ad;
      }
      _strlen(local_fc);
      QString::fromUtf8_helper((char *)&local_178,(int)local_fc);
      QVariant::QVariant((QVariant *)param_3,&local_178);
      if (*(int *)local_178.field0_0x0 == -1) goto LAB_10037ae46;
      if (*(int *)local_178.field0_0x0 != 0) {
        LOCK();
        *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
        iVar3 = *(int *)local_178.field0_0x0;
        UNLOCK();
joined_r0x00010037afdd:
        local_151 = iVar3 != 0;
        if ((bool)local_151) goto LAB_10037ae46;
      }
    }
    QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
  }
  else {
    if (*(char *)(lVar4 + 0x31) != '\0') {
      uVar5 = 0;
      if ((*(long *)(param_4 + 0x30) != 0) &&
         (uVar5 = 0, *(int *)(*(long *)(param_4 + 0x30) + 4) != 0)) {
        uVar5 = 0;
        if (*(long *)(param_4 + 0x38) != 0) {
          uVar5 = FUN_100323e00(*(long *)(param_4 + 0x38));
        }
      }
      uVar5 = FUN_100319390(uVar5);
      iVar3 = FUN_10018a9d0(uVar5);
      if ((param_5 == 2) && (iVar3 == 0x30000004)) {
        lVar2 = *(long *)(param_4 + 0x28);
        local_1a0 = ((*(int *)(lVar2 + 0x1c) + 1) - *(int *)(lVar2 + 0x14)) / 2;
        local_19c = ((*(int *)(lVar2 + 0x20) + 1) - *(int *)(lVar2 + 0x18)) / 2;
        local_198 = local_1a0;
        local_194 = local_19c;
        FUN_100347150(local_1b8,lVar4);
        if (local_1a8 == 0x203) {
          uVar5 = QWidget::mapToGlobal(param_4);
          local_1a0 = local_1b8[0] - (int)uVar5;
          local_19c = local_1ac - (int)((ulong)uVar5 >> 0x20);
          local_198 = local_1a0;
          local_194 = local_19c;
        }
        pQVar7 = (QRect *)&local_1a0;
        goto LAB_10037b151;
      }
    }
LAB_10037b0ad:
    QWidget::inputMethodQuery(param_3,param_4,param_5);
  }
LAB_10037ae46:
  if (lVar1 == local_38) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

