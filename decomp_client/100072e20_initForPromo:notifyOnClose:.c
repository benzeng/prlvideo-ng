
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x70 bytes */

ID MacPromoWindow::initForPromo_notifyOnClose_
             (ID param_1,SEL param_2,PromoDialogData param_3,CSlotInfo param_4)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  ID IVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ID self;
  undefined8 *in_RCX;
  QString *in_RDX;
  undefined8 in_R9;
  double dVar12;
  double dVar13;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  QArrayData *local_d8;
  Data_conflict local_d0;
  undefined4 local_c8;
  QArrayData *local_c0;
  QVariant local_b8;
  QVariant local_a8;
  QArrayData *local_98;
  undefined8 local_90;
  undefined8 local_88;
  double local_80;
  double local_78;
  QArrayData *local_70;
  objc_super local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  double local_40;
  undefined1 local_31;
  
  dVar13 = (double)*(int *)&in_RDX[3].field0_0x0;
  dVar12 = (double)*(int *)((long)&in_RDX[3].field0_0x0 + 4);
  local_40 = DAT_100e12a50 + dVar12;
  local_58 = 0;
  uStack_50 = 0;
  local_68.super_class = (class_t *)PTR_MacPromoWindow_10226ac00;
  local_68.receiver = param_1;
  local_48 = dVar13;
  IVar7 = _objc_msgSendSuper2(&local_68,PTR_s_initWithContentRect_styleMask_ba_102268b60,7,2,1,in_R9
                              ,0,0,dVar13,local_40);
  lVar4 = m_closeHandler;
  if (IVar7 == 0) {
    return 0;
  }
  piVar1 = (int *)*in_RCX;
  piVar8 = *(int **)(IVar7 + m_closeHandler);
  if (piVar8 != piVar1) {
    uVar9 = in_RCX[1];
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      local_31 = *piVar1 != 0;
      UNLOCK();
      piVar8 = *(int **)(IVar7 + lVar4);
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(IVar7 + lVar4) != (void *)0x0)) {
        operator_delete(*(void **)(IVar7 + lVar4));
      }
    }
    *(int **)(IVar7 + lVar4) = piVar1;
    *(undefined8 *)(IVar7 + 8 + lVar4) = uVar9;
  }
  *(undefined4 *)(lVar4 + 0x18 + IVar7) = *(undefined4 *)(in_RCX + 3);
  *(undefined8 *)(lVar4 + 0x10 + IVar7) = in_RCX[2];
  ::QVariant::operator=((QVariant *)(lVar4 + 0x20 + IVar7),(QVariant *)(in_RCX + 4));
  *(undefined1 *)(lVar4 + 0x30 + IVar7) = *(undefined1 *)(in_RCX + 6);
  puVar2 = PTR__OBJC_CLASS___NSString_10226a7c8;
  FUN_1001c72e0(&local_70);
  uVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar2,PTR_s_stringWithQString__102268d00,&local_70);
  (*(code *)PTR__objc_msgSend_1021e1c68)(IVar7,PTR_s_setTitle__102268ee8,uVar9);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100072fb8;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100072fb8:
  puVar2 = PTR__objc_msgSend_1021e1c68;
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (DAT_100e12a50,IVar7,PTR_s_setContentBorderThickness_forEdg_102269df8,1);
  uVar9 = (*(code *)puVar2)(PTR__OBJC_CLASS___WebView_10226aa18,PTR_s_alloc_102268b58);
  uVar9 = (*(code *)puVar2)(uVar9,PTR_s_init_102268ca8);
  uVar10 = (*(code *)puVar2)(uVar9,PTR_s_autorelease_102269a10);
  uVar9 = (*(code *)puVar2)(IVar7,PTR_s_contentView_102268b80);
  (*(code *)puVar2)(uVar9,PTR_s_addSubview__102268d70,uVar10);
  local_90 = 0;
  local_88 = 0x4048000000000000;
  local_80 = dVar13;
  local_78 = dVar12;
  (*(code *)puVar2)(uVar10,PTR_s_setFrame__102268fc0);
  uVar9 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSButton_10226a7b8,PTR_s_alloc_102268b58);
  uVar9 = (*(code *)puVar2)(uVar9,PTR_s_init_102268ca8);
  uVar9 = (*(code *)puVar2)(uVar9,PTR_s_autorelease_102269a10);
  lVar4 = m_checkbox;
  *(undefined8 *)(IVar7 + m_checkbox) = uVar9;
  uVar9 = (*(code *)puVar2)(IVar7,PTR_s_contentView_102268b80);
  (*(code *)puVar2)(uVar9,PTR_s_addSubview__102268d70,*(undefined8 *)(IVar7 + lVar4));
  (*(code *)puVar2)(*(undefined8 *)(IVar7 + lVar4),PTR_s_setButtonType__102269260,3);
  puVar3 = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar9 = *(undefined8 *)(IVar7 + lVar4);
  QMetaObject::tr((char *)&local_98,PTR_staticMetaObject_1021e1520,0x1db9671);
  uVar11 = (*(code *)puVar2)(puVar3,PTR_s_stringWithQString__102268d00,&local_98);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar9,PTR_s_setTitle__102268ee8,uVar11);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100073181;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100073181:
  lVar4 = m_checkbox;
  (*(code *)puVar2)(*(undefined8 *)(IVar7 + m_checkbox),PTR_s_sizeToFit_102269090);
  (*(code *)puVar2)(DAT_100e11048,DAT_100e11068,*(undefined8 *)(IVar7 + lVar4),
                    PTR_s_setFrameOrigin__102269e00);
  lVar5 = m_promoType;
  *(undefined4 *)(IVar7 + m_promoType) = *(undefined4 *)&in_RDX[4].field0_0x0;
  QString::operator=((QString *)(IVar7 + m_promoId),in_RDX);
  QSettings::QSettings((QSettings *)&local_b8,(QObject *)0x0);
  FUN_1000736d0(&local_c0,*(undefined4 *)(IVar7 + lVar5));
  local_c8 = 0x80000000;
  local_d0.field7 = 0;
  QSettings::value((QString *)&local_a8,&local_b8);
  bVar6 = ::QVariant::toBool();
  ::QVariant::~QVariant(&local_a8);
  ::QVariant::~QVariant((QVariant *)&local_d0);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100073288;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100073288:
  QSettings::~QSettings((QSettings *)&local_b8);
  (*(code *)puVar2)(*(undefined8 *)(IVar7 + lVar4),PTR_s_setState__102269e08,bVar6 ^ 1);
  (*(code *)puVar2)(*(undefined8 *)(IVar7 + lVar4),PTR_s_setTarget__102268cd8,IVar7);
  (*(code *)puVar2)(*(undefined8 *)(IVar7 + lVar4),PTR_s_setAction__102268ce8,
                    PTR_s_handleDoNotShowAgainAction_102269e10);
  uVar9 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSButton_10226a7b8,PTR_s_alloc_102268b58);
  uVar9 = (*(code *)puVar2)(uVar9,PTR_s_init_102268ca8);
  self = (*(code *)puVar2)(uVar9,PTR_s_autorelease_102269a10);
  uVar9 = (*(code *)puVar2)(IVar7,PTR_s_contentView_102268b80);
  (*(code *)puVar2)(uVar9,PTR_s_addSubview__102268d70,self);
  puVar3 = PTR__OBJC_CLASS___NSString_10226a7c8;
  QMetaObject::tr((char *)&local_d8,PTR_staticMetaObject_1021e1520,0x1db9681);
  uVar9 = (*(code *)puVar2)(puVar3,PTR_s_stringWithQString__102268d00,&local_d8);
  (*(code *)PTR__objc_msgSend_1021e1c68)(self,PTR_s_setTitle__102268ee8,uVar9);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007339f;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10007339f:
  (*(code *)puVar2)(self,PTR_s_setBezelStyle__102268cc0,0xb);
  (*(code *)puVar2)(self,PTR_s_sizeToFit_102269090);
  if (self == 0) {
    local_e8 = 0.0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    (*(code *)PTR__objc_msgSend_1021e1c68)(DAT_100e12a58,0,0,PTR_s_setFrameSize__102269e18);
    local_128 = 0.0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_f8,self,PTR_s_frame_102268b50);
    dVar12 = local_e8;
    _objc_msgSend_stret((undefined *)&local_118,self,PTR_s_frame_102268b50);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (dVar12 + DAT_100e12a58,uStack_100,self,PTR_s_setFrameSize__102269e18);
    _objc_msgSend_stret((undefined *)&local_138,self,PTR_s_frame_102268b50);
  }
  (*(code *)puVar2)((dVar13 - local_128) + _DAT_100e12a60,DAT_100e12a68,self,
                    PTR_s_setFrameOrigin__102269e00);
  (*(code *)puVar2)(self,PTR_s_setTarget__102268cd8,IVar7);
  (*(code *)puVar2)(self,PTR_s_setAction__102268ce8,PTR_s_close_102269920);
  (*(code *)puVar2)(uVar10,PTR_s_setFrameLoadDelegate__102269e20,IVar7);
  puVar3 = PTR__OBJC_CLASS___NSURL_10226a8d0;
  uVar9 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,
                            in_RDX + 1);
  uVar9 = (*(code *)puVar2)(puVar3,PTR_s_URLWithString__1022697c8,uVar9);
  uVar9 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSURLRequest_10226aa20,PTR_s_requestWithURL__102269e28
                            ,uVar9);
  uVar10 = (*(code *)puVar2)(uVar10,PTR_s_mainFrame_102269e30);
  (*(code *)puVar2)(uVar10,PTR_s_loadRequest__102269e38,uVar9);
  return IVar7;
}

