
/* Function Stack Size: 0x18 bytes */

void CMacCocoaApplication::sendEvent_(ID param_1,SEL param_2,ID param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  void *pvVar11;
  QWidget *pQVar12;
  ID self;
  uint uVar13;
  long lVar14;
  undefined8 in_R9;
  byte bVar15;
  byte bVar16;
  bool bVar17;
  undefined8 in_XMM1_Qa;
  objc_super local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  ID local_178;
  QVariant local_170;
  short local_15a;
  QVariant local_158;
  QString local_148;
  QString local_140;
  Data *local_138;
  Data *local_130;
  Data *local_128;
  uint local_120;
  QArrayData *local_118;
  Data *local_110;
  Data *local_108;
  Data *local_100;
  Data *local_f8;
  Data *local_f0;
  uint local_e8;
  QString local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ID *local_48;
  char *local_40;
  undefined1 local_31;
  
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_3,PTR_s_type_102269648);
  if (*(long *)PTR_self_1021e1388 == 0) goto LAB_100065980;
  lVar6 = QApplication::focusWidget();
  local_e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (lVar6 == 0) {
    lVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_keyWindow_102269b48);
    if (lVar8 != 0) {
      uVar7 = FUN_100152280();
      FUN_100154b10(&local_108,uVar7);
      local_100 = local_108;
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 == 0) {
          QListData::detach((int)&local_100);
          lVar9 = (long)*(int *)(local_100 + 8);
          if ((local_108 + (long)*(int *)(local_108 + 8) * 8 != local_100 + lVar9 * 8) &&
             (lVar14 = *(int *)(local_100 + 0xc) - lVar9,
             lVar14 != 0 && lVar9 <= *(int *)(local_100 + 0xc))) {
            _memcpy(local_100 + lVar9 * 8 + 0x10,
                    local_108 + (long)*(int *)(local_108 + 8) * 8 + 0x10,lVar14 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + 1;
          local_31 = *(int *)local_108 != 0;
          UNLOCK();
        }
      }
      local_f8 = local_100 + (long)*(int *)(local_100 + 8) * 8 + 0x10;
      local_f0 = local_100 + (long)*(int *)(local_100 + 0xc) * 8 + 0x10;
      local_e8 = 1;
      if (*(int *)local_108 == -1) {
LAB_100064fe4:
        if (local_f8 != local_f0) {
          do {
            if (local_e8 == 0) {
LAB_10006525f:
              local_f8 = local_f8 + 8;
              local_e8 = 1;
            }
            else {
              uVar7 = *(undefined8 *)local_f8;
              FUN_100188480(&local_118,uVar7);
              FUN_100358be0(&local_110,&local_118);
              if (*(int *)local_118 != -1) {
                if (*(int *)local_118 != 0) {
                  LOCK();
                  *(int *)local_118 = *(int *)local_118 + -1;
                  local_31 = *(int *)local_118 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10006505d;
                }
                QArrayData::deallocate(local_118,2,8);
              }
LAB_10006505d:
              local_138 = local_110;
              if (*(int *)local_110 != -1) {
                if (*(int *)local_110 == 0) {
                  QListData::detach((int)&local_138);
                  lVar9 = (long)*(int *)(local_138 + 8);
                  if ((local_110 + (long)*(int *)(local_110 + 8) * 8 != local_138 + lVar9 * 8) &&
                     (lVar14 = *(int *)(local_138 + 0xc) - lVar9,
                     lVar14 != 0 && lVar9 <= *(int *)(local_138 + 0xc))) {
                    _memcpy(local_138 + lVar9 * 8 + 0x10,
                            local_110 + (long)*(int *)(local_110 + 8) * 8 + 0x10,lVar14 * 8);
                  }
                }
                else {
                  LOCK();
                  *(int *)local_110 = *(int *)local_110 + 1;
                  local_31 = *(int *)local_110 != 0;
                  UNLOCK();
                }
              }
              local_130 = local_138 + (long)*(int *)(local_138 + 8) * 8 + 0x10;
              local_128 = local_138 + (long)*(int *)(local_138 + 0xc) * 8 + 0x10;
              local_120 = 1;
              if (*(int *)(local_138 + 8) != *(int *)(local_138 + 0xc)) {
                do {
                  if (local_120 != 0) {
                    lVar9 = MacUtils::getWindowRef(*(QWidget **)local_130);
                    if (lVar9 == lVar8) {
                      FUN_100188480(&local_140,uVar7);
                      QString::operator=(&local_e0,&local_140);
                      if (*(int *)local_140.field0_0x0 != -1) {
                        if (*(int *)local_140.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
                          local_31 = *(int *)local_140.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_100065190;
                        }
                        QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
                      }
                    }
                    else {
                      local_120 = 0;
                    }
                  }
LAB_100065190:
                  local_130 = local_130 + 8;
                  uVar13 = local_120 ^ 1;
                  bVar17 = local_120 != 1;
                  local_120 = uVar13;
                } while ((bVar17) && (local_130 != local_128));
              }
              if (*(int *)local_138 != -1) {
                if (*(int *)local_138 != 0) {
                  LOCK();
                  *(int *)local_138 = *(int *)local_138 + -1;
                  local_31 = *(int *)local_138 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000651f1;
                }
                QListData::dispose(local_138);
              }
LAB_1000651f1:
              iVar3 = *(int *)(local_e0.field0_0x0 + 4);
              if (*(int *)local_110 != -1) {
                if (*(int *)local_110 != 0) {
                  LOCK();
                  *(int *)local_110 = *(int *)local_110 + -1;
                  local_31 = *(int *)local_110 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100065227;
                }
                QListData::dispose(local_110);
              }
LAB_100065227:
              if (iVar3 == 0) goto LAB_10006525f;
              local_f8 = local_f8 + 8;
              uVar13 = local_e8 ^ 1;
              bVar17 = local_e8 == 1;
              local_e8 = uVar13;
              if (bVar17) break;
            }
          } while (local_f8 != local_f0);
        }
      }
      else {
        if (*(int *)local_108 == 0) {
LAB_100064fce:
          QListData::dispose(local_108);
        }
        else {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_31 = *(int *)local_108 != 0;
          UNLOCK();
          if (!(bool)local_31) goto LAB_100064fce;
        }
        if (local_e8 != 0) goto LAB_100064fe4;
      }
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_31 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000652bc;
        }
        QListData::dispose(local_100);
      }
    }
  }
  else {
    QObject::property((char *)&local_158);
    ::QVariant::toString();
    QString::operator=(&local_e0,&local_148);
    if (*(int *)local_148.field0_0x0 != -1) {
      if (*(int *)local_148.field0_0x0 != 0) {
        LOCK();
        *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
        local_31 = *(int *)local_148.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100064ea8;
      }
      QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
    }
LAB_100064ea8:
    ::QVariant::~QVariant(&local_158);
  }
LAB_1000652bc:
  uVar7 = FUN_100152280();
  lVar8 = FUN_1001548f0(uVar7,&local_e0);
  if (uVar5 - 0x12 < 0xe) {
    bVar15 = (byte)(0x3807 >> ((byte)(uVar5 - 0x12) & 0x1f)) & 1;
  }
  else {
    bVar15 = 0;
  }
  bVar16 = 0;
  if ((lVar8 != 0) && (bVar15 == 0)) {
    lVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_3,PTR_s_eventRef_102269b50);
    bVar16 = 0;
    if (lVar9 != 0) {
      uVar7 = FUN_10018c280(lVar8);
      iVar3 = FUN_100319ae0(uVar7);
      if (iVar3 == 3) {
        uVar7 = FUN_10018c280(lVar8);
        uVar7 = FUN_100319c50(uVar7);
        uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_3,PTR_s_eventRef_102269b50);
        bVar1 = FUN_100332a90(uVar7,uVar10);
      }
      else {
        uVar7 = FUN_10018c280(lVar8);
        uVar7 = FUN_100319d40(uVar7);
        uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_3,PTR_s_eventRef_102269b50);
        bVar1 = FUN_10035c130(uVar7,uVar10);
        if ((bVar1 == 0) && (cVar2 = FUN_10005a430(param_3,&local_15a), cVar2 != '\0')) {
          uVar7 = FUN_10018c280(lVar8);
          uVar7 = FUN_100319cd0(uVar7);
          uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_3,PTR_s_CGEvent_102269a30);
          bVar1 = FUN_100347000(uVar7,uVar10,(int)local_15a);
        }
        if (uVar5 == 0x22) {
          uVar7 = FUN_10018c280(lVar8);
          uVar7 = FUN_100319cd0(uVar7);
          uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_3,PTR_s_CGEvent_102269a30);
          FUN_100347510(uVar7,uVar10);
          bVar16 = bVar1;
          goto LAB_1000654bd;
        }
      }
      bVar16 = bVar1;
      if ((uVar5 == 0xc) && (bVar1 != 0)) {
        if (DAT_102310998 == (void *)0x0) {
          pvVar11 = operator_new(0x18);
          FUN_1006faf60(pvVar11);
          DAT_102274400 = 1;
          DAT_102310998 = pvVar11;
        }
        pvVar11 = DAT_102310998;
        uVar4 = FUN_10018f860(lVar8);
        cVar2 = FUN_1006fb710(pvVar11,uVar4);
        bVar16 = 0;
        if (cVar2 != '\0') {
          bVar16 = bVar1;
        }
      }
    }
  }
LAB_1000654bd:
  if ((lVar6 != 0 & bVar15) == 1) {
    QObject::property((char *)&local_170);
    cVar2 = ::QVariant::toBool();
    ::QVariant::~QVariant(&local_170);
    if (cVar2 != '\0') {
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_48 = &local_178;
      local_40 = "void*";
      local_178 = param_3;
      QMetaObject::invokeMethod
                (lVar6,"proceedGestureEvent",1,0,0,in_R9,local_48,"void*",0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0);
    }
  }
  bVar17 = false;
  if (((uVar5 < 0x1a) && (bVar17 = false, (0x200000aUL >> (uVar5 & 0x3f) & 1) != 0)) &&
     (lVar6 = QApplication::activePopupWidget(), bVar17 = false, lVar6 != 0)) {
    pQVar12 = (QWidget *)QApplication::activePopupWidget();
    self = MacUtils::getWindowRef(pQVar12);
    uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSEvent_10226a8b0,PTR_s_mouseLocation_102269808);
    if (self == 0) {
      local_188 = 0;
      uStack_180 = 0;
      local_198 = 0;
      uStack_190 = 0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_198,self,PTR_s_frame_102268b50);
    }
    cVar2 = _NSPointInRect(uVar7,in_XMM1_Qa);
    if (cVar2 == '\0') {
      QApplication::activePopupWidget();
      bVar17 = true;
      QWidget::close();
    }
  }
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_31 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006579b;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
LAB_10006579b:
  if (bVar17) {
    return;
  }
  if ((bVar16 & 1) != 0) {
    return;
  }
LAB_100065980:
  local_1a8.super_class = (class_t *)PTR_CMacCocoaApplication_10226abd8;
  local_1a8.receiver = param_1;
  _objc_msgSendSuper2(&local_1a8,PTR_s_sendEvent__102269b60,param_3);
  return;
}

