
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x24 bytes */

ID CVmConsoleWindowToolbarController::toolbar_itemForItemIdentifier_willBeInsertedIntoToolbar_
             (ID param_1,SEL param_2,ID param_3,ID param_4,char param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  undefined *puVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ID IVar11;
  undefined8 uVar12;
  long *plVar13;
  void *pvVar14;
  ID self;
  long lVar15;
  long lVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  QArrayData *local_338;
  QArrayData *local_330;
  QPixmap local_328 [32];
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  QArrayData *local_2c8;
  QPixmap local_2c0 [32];
  QArrayData *local_2a0;
  QPixmap local_298 [32];
  QArrayData *local_278;
  QVariant local_270;
  QArrayData *local_260;
  QVariant local_258;
  QVariant local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  Data *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QPixmap local_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  puVar4 = PTR__objc_retain_1021e1c78;
  uVar8 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  uVar9 = (*(code *)puVar4)(param_4);
  cVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar9,PTR_s_isEqualToString__102268f68,&cf_TitleMessage);
  if (cVar5 != '\0') {
    uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                       ((int)DAT_100e11048,PTR__OBJC_CLASS___NSFont_10226a7d8,
                        PTR_s_titleBarFontOfSize__102268d58);
    IVar11 = _objc_retainAutoreleasedReturnValue(uVar10);
    uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                       (param_1,PTR_s_textToolbatItemWithIdentifier_na_102268f70,uVar9,uVar9,&cf___,
                        IVar11,0,0xfffffffffffffc18);
    goto LAB_100015d40;
  }
  cVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar9,PTR_s_isEqualToString__102268f68,&cf_LeftCustomSpace);
  if (cVar5 != '\0') {
    uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                       (PTR__OBJC_CLASS___NSView_10226a810,PTR_s_alloc_102268b58);
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0x3ff0000000000000;
    local_40 = 0x4034000000000000;
    uVar19 = 0x4034000000000000;
    uVar18 = 0x3ff0000000000000;
    IVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar10,PTR_s_initWithFrame__102268f78);
    uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                       (param_1,PTR_s_toolbatItemWithIdentifier_name_v_102268f80,uVar9,uVar9,IVar11,
                        0,0,2000,uVar18,uVar19);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    if (IVar11 == 0) {
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      uVar17 = 0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_78,IVar11,PTR_s_frame_102268b50);
      uVar17 = (undefined4)local_68;
    }
    uVar18 = uStack_60;
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar10,PTR_s_setMaxSize__102268f88);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar17,uVar18,uVar10,PTR_s_setMinSize__102268f90);
    goto LAB_100015f6c;
  }
  cVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar9,PTR_s_isEqualToString__102268f68,&cf_CustomSpace);
  if (cVar5 == '\0') {
    cVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (uVar9,PTR_s_isEqualToString__102268f68,&cf_ProgressIndicator);
    if (cVar5 != '\0') {
      uVar19 = (*(code *)PTR__objc_msgSend_1021e1c68)
                         (PTR__OBJC_CLASS___NSProgressIndicator_10226a828,PTR_s_alloc_102268b58);
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = _DAT_100e110b0;
      uStack_a4 = _UNK_100e110b4;
      uStack_a0 = _UNK_100e110b8;
      uStack_9c = _UNK_100e110bc;
      uVar18 = CONCAT44(_UNK_100e110bc,_UNK_100e110b8);
      uVar10 = CONCAT44(_UNK_100e110b4,_DAT_100e110b0);
      IVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar19,PTR_s_initWithFrame__102268f78);
      (*(code *)PTR__objc_msgSend_1021e1c68)(IVar11,PTR_s_setStyle__102268f98,1);
      (*(code *)PTR__objc_msgSend_1021e1c68)(IVar11,PTR_s_setIndeterminate__102268fa0,1);
      (*(code *)PTR__objc_msgSend_1021e1c68)(IVar11,PTR_s_startAnimation__102268fa8,0);
      uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                         (param_1,PTR_s_toolbatItemWithIdentifier_name_v_102268f80,uVar9,uVar9,
                          IVar11,0,0,2000,uVar10,uVar18);
      goto LAB_100015d40;
    }
    cVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar9,PTR_s_isEqualToString__102268f68,&cf_Title)
    ;
    if (cVar5 != '\0') {
      uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
      uVar18 = _objc_retainAutoreleasedReturnValue(uVar10);
      uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar18,PTR_s_title_102268f30);
      uVar19 = _objc_retainAutoreleasedReturnValue(uVar10);
      uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                         ((int)DAT_100e11068,PTR__OBJC_CLASS___NSFont_10226a7d8,
                          PTR_s_titleBarFontOfSize__102268d58);
      uVar12 = _objc_retainAutoreleasedReturnValue(uVar10);
      uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                         (param_1,PTR_s_textToolbatItemWithIdentifier_na_102268f70,uVar9,uVar9,
                          uVar19,uVar12,2,1000);
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      puVar4 = PTR__objc_release_1021e1c70;
      (*(code *)PTR__objc_release_1021e1c70)(uVar12);
      (*(code *)puVar4)(uVar19);
      (*(code *)puVar4)(uVar18);
      goto LAB_100015f72;
    }
    cVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (uVar9,PTR_s_isEqualToString__102268f68,&cf_ConfigureVM);
    puVar4 = PTR__OBJC_CLASS___NSImage_10226a7c0;
    if (cVar5 != '\0') {
      local_e0 = (QArrayData *)
                 QString::fromAscii_helper
                           (":/pixmaps/MacButtons/Templates/action_template.png",0x32);
      QPixmap::QPixmap(local_d8,&local_e0,0,0);
      uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                         (puVar4,PTR_s_imageTemplateWithQPixmap__102268cc8,local_d8);
      uVar18 = _objc_retainAutoreleasedReturnValue(uVar10);
      puVar4 = PTR__OBJC_CLASS___NSString_10226a7c8;
      QMetaObject::tr((char *)&local_e8,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Configure____10226dfc8);
      uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                         (puVar4,PTR_s_stringWithQString__102268d00,&local_e8);
      puVar4 = PTR_s_configureVmButtonClicked_102268fb0;
      uVar19 = _objc_retainAutoreleasedReturnValue(uVar10);
      uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                         (param_1,PTR_s_buttonToolbatItemWithIdentifier__102268fb8,uVar9,uVar9,
                          uVar18,puVar4,uVar19,2000);
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      (*(code *)PTR__objc_release_1021e1c70)(uVar19);
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000162d9;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
LAB_1000162d9:
      (*(code *)PTR__objc_release_1021e1c70)(uVar18);
      QPixmap::~QPixmap(local_d8);
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100015f72;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
      goto LAB_100015f72;
    }
    cVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (uVar9,PTR_s_isEqualToString__102268f68,&cf_Keyboard);
    if (cVar5 == '\0') {
      cVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (uVar9,PTR_s_isEqualToString__102268f68,&cf_SharedFolders);
      if (cVar5 == '\0') {
        cVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (uVar9,PTR_s_isEqualToString__102268f68,&cf_Develop);
        if (cVar5 == '\0') {
          cVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                            (uVar9,PTR_s_isEqualToString__102268f68,&cf_Tools);
          if (cVar5 == '\0') {
            cVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                              (DAT_102311d80,PTR_s_containsObject__102268fc8,uVar9);
            lVar1 = _vm;
            if (cVar5 == '\0') {
              cVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                (uVar9,PTR_s_isEqualToString__102268f68,&cf_Show_HideDevices);
              lVar1 = _vm;
              if (cVar5 != '\0') {
                if (*(long *)(param_1 + _vm) == 0) {
                  uVar6 = false;
                }
                else if (*(int *)(*(long *)(param_1 + _vm) + 4) == 0) {
                  uVar6 = false;
                }
                else if (*(long *)(_vm + 8 + param_1) == 0) {
                  uVar6 = false;
                }
                else {
                  lVar15 = FUN_10018d490();
                  if (lVar15 == 0) {
                    uVar6 = false;
                  }
                  else {
                    lVar15 = *(long *)(param_1 + lVar1);
                    uVar10 = 0;
                    if ((lVar15 != 0) && (uVar10 = 0, *(int *)(lVar15 + 4) != 0)) {
                      uVar10 = *(undefined8 *)(lVar1 + 8 + param_1);
                    }
                    uVar10 = FUN_10018d490(uVar10);
                    uVar10 = FUN_10016f500(uVar10);
                    uVar6 = FUN_10061b4d0(uVar10);
                  }
                }
                QSettings::QSettings((QSettings *)&local_258,(QObject *)0x0);
                local_260 = (QArrayData *)
                            QString::fromAscii_helper
                                      ("Main Window/Status Bar Devices Visibility",0x29);
                ::QVariant::QVariant(&local_270,(bool)uVar6);
                QSettings::value((QString *)&local_248,&local_258);
                cVar5 = ::QVariant::toBool();
                ::QVariant::~QVariant(&local_248);
                ::QVariant::~QVariant(&local_270);
                if (*(int *)local_260 != -1) {
                  if (*(int *)local_260 != 0) {
                    LOCK();
                    *(int *)local_260 = *(int *)local_260 + -1;
                    local_31 = *(int *)local_260 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100017353;
                  }
                  QArrayData::deallocate(local_260,2,8);
                }
LAB_100017353:
                QSettings::~QSettings((QSettings *)&local_258);
                puVar4 = PTR__OBJC_CLASS___NSString_10226a7c8;
                if (cVar5 == '\0') {
                  QMetaObject::tr((char *)&local_278,PTR_staticMetaObject_1021e1520,
                                  (int)PTR_s_Show_devices_10226ffb0);
                }
                else {
                  QMetaObject::tr((char *)&local_278,PTR_staticMetaObject_1021e1520,
                                  (int)PTR_s_Hide_devices_10226ffb8);
                }
                uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                   (puVar4,PTR_s_stringWithQString__102268d00,&local_278);
                uVar18 = _objc_retainAutoreleasedReturnValue(uVar10);
                if (*(int *)local_278 != -1) {
                  if (*(int *)local_278 != 0) {
                    LOCK();
                    *(int *)local_278 = *(int *)local_278 + -1;
                    local_31 = *(int *)local_278 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100017423;
                  }
                  QArrayData::deallocate(local_278,2,8);
                }
LAB_100017423:
                puVar4 = PTR__OBJC_CLASS___NSImage_10226a7c0;
                if (cVar5 == '\0') {
                  local_2c8 = (QArrayData *)
                              QString::fromAscii_helper
                                        (":/pixmaps/MacButtons/Templates/title_arrow_closed_template.png"
                                         ,0x3e);
                  QPixmap::QPixmap(local_2c0,&local_2c8,0,0);
                  uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                     (puVar4,PTR_s_imageTemplateWithQPixmap__102268cc8,local_2c0);
                  uVar19 = _objc_retainAutoreleasedReturnValue(uVar10);
                  QPixmap::~QPixmap(local_2c0);
                  if (*(int *)local_2c8 != -1) {
                    if (*(int *)local_2c8 != 0) {
                      LOCK();
                      *(int *)local_2c8 = *(int *)local_2c8 + -1;
                      local_31 = *(int *)local_2c8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10001756f;
                    }
                    QArrayData::deallocate(local_2c8,2,8);
                  }
                }
                else {
                  local_2a0 = (QArrayData *)
                              QString::fromAscii_helper
                                        (":/pixmaps/MacButtons/Templates/title_arrow_template.png",
                                         0x37);
                  QPixmap::QPixmap(local_298,&local_2a0,0,0);
                  uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                     (puVar4,PTR_s_imageTemplateWithQPixmap__102268cc8,local_298);
                  uVar19 = _objc_retainAutoreleasedReturnValue(uVar10);
                  QPixmap::~QPixmap(local_298);
                  if (*(int *)local_2a0 != -1) {
                    if (*(int *)local_2a0 != 0) {
                      LOCK();
                      *(int *)local_2a0 = *(int *)local_2a0 + -1;
                      local_31 = *(int *)local_2a0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10001756f;
                    }
                    QArrayData::deallocate(local_2a0,2,8);
                  }
                }
LAB_10001756f:
                uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                   (param_1,PTR_s_buttonToolbatItemWithIdentifier__102268fb8,uVar9,
                                    uVar9,uVar19,PTR_s_toggleShowHideDevices_102268fe0,uVar18,2000);
                uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
                (*(code *)PTR__objc_msgSend_1021e1c68)(uVar10,PTR_s_setTag__102268fe8,cVar5);
                puVar4 = PTR__objc_release_1021e1c70;
                (*(code *)PTR__objc_release_1021e1c70)(uVar19);
                (*(code *)puVar4)(uVar18);
                goto LAB_100015f72;
              }
              cVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                (uVar9,PTR_s_isEqualToString__102268f68,&cf_Feedback);
              if (cVar5 != '\0') {
                if (DAT_102310820 == (void *)0x0) {
                  pvVar14 = operator_new(0x18);
                  FUN_10002bc90(pvVar14);
                  DAT_10226c0b0 = 1;
                  DAT_102310820 = pvVar14;
                }
                cVar5 = FUN_10002bdd0(DAT_102310820);
                puVar4 = PTR__OBJC_CLASS___NSImage_10226a7c0;
                if (cVar5 == '\0') {
                  local_330 = (QArrayData *)
                              QString::fromAscii_helper
                                        (":/pixmaps/MacButtons/Templates/feedback_template.png",0x34
                                        );
                  QPixmap::QPixmap(local_328,&local_330,0,0);
                  uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                     (puVar4,PTR_s_imageTemplateWithQPixmap__102268cc8,local_328);
                  uVar18 = _objc_retainAutoreleasedReturnValue(uVar10);
                  uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                     (param_1,PTR_s_buttonToolbatItemWithIdentifier__102268fb8,uVar9
                                      ,uVar9,uVar18,PTR_s_feedbackButtonClicked_102268ff0,
                                      &cf_Feedback,2000);
                  uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
                  (*(code *)PTR__objc_release_1021e1c70)(uVar18);
                  QPixmap::~QPixmap(local_328);
                  if (*(int *)local_330 != -1) {
                    if (*(int *)local_330 != 0) {
                      LOCK();
                      *(int *)local_330 = *(int *)local_330 + -1;
                      local_31 = *(int *)local_330 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100015f72;
                    }
                    QArrayData::deallocate(local_330,2,8);
                  }
                  goto LAB_100015f72;
                }
                uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                   (PTR__OBJC_CLASS___PDFeedbackButton_10226a830,
                                    PTR_s_alloc_102268b58);
                local_2e8 = 0;
                uStack_2e0 = 0;
                local_2d8 = 0x4032000000000000;
                local_2d0 = 0x403c000000000000;
                uVar19 = 0x403c000000000000;
                uVar18 = 0x4032000000000000;
                IVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                   (uVar10,PTR_s_initWithFrame__102268f78);
                uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                   (param_1,PTR_s_toolbatItemWithIdentifier_name_v_102268f80,uVar9,
                                    uVar9,IVar11,0,0,2000,uVar18,uVar19);
                uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
                if (DAT_102310820 == (void *)0x0) {
                  pvVar14 = operator_new(0x18);
                  FUN_10002bc90(pvVar14);
                  DAT_10226c0b0 = 1;
                  DAT_102310820 = pvVar14;
                }
                FUN_10002bde0(DAT_102310820,IVar11,1);
                (*(code *)PTR__objc_msgSend_1021e1c68)
                          (IVar11,PTR_s_setTranslatesAutoresizingMaskInt_102268cf8,1);
                if (IVar11 == 0) {
                  local_2f8 = 0;
                  uStack_2f0 = 0;
                  local_308 = 0;
                  uStack_300 = 0;
                }
                else {
                  _objc_msgSend_stret((undefined *)&local_308,IVar11,PTR_s_frame_102268b50);
                }
                uVar18 = uStack_2f0;
                uVar17 = (undefined4)local_2f8;
                (*(code *)PTR__objc_msgSend_1021e1c68)
                          (uVar17,uStack_2f0,uVar10,PTR_s_setMaxSize__102268f88);
                (*(code *)PTR__objc_msgSend_1021e1c68)
                          (uVar17,uVar18,uVar10,PTR_s_setMinSize__102268f90);
                goto LAB_100015f6c;
              }
              cVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                (uVar9,PTR_s_isEqualToString__102268f68,&cf_BuyProduct);
              uVar10 = 0;
              if (cVar5 == '\0') goto LAB_100015f72;
              uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                 (PTR__OBJC_CLASS___NSButton_10226a7b8,PTR_s_alloc_102268b58);
              IVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar10,PTR_s_init_102268ca8);
              (*(code *)PTR__objc_msgSend_1021e1c68)(IVar11,PTR_s_setBezelStyle__102268cc0,1);
              (*(code *)PTR__objc_msgSend_1021e1c68)
                        (IVar11,PTR_s_setRefusesFirstResponder__102268cf0,1);
              (*(code *)PTR__objc_msgSend_1021e1c68)
                        (IVar11,PTR_s_setKeyEquivalent__102268e20,&cf_creturn_s_);
              puVar4 = PTR__OBJC_CLASS___NSString_10226a7c8;
              QMetaObject::tr((char *)&local_338,PTR_staticMetaObject_1021e1520,
                              (int)PTR_s_Buy_102270ae0);
              uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                 (puVar4,PTR_s_stringWithQString__102268d00,&local_338);
              uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
              (*(code *)PTR__objc_msgSend_1021e1c68)(IVar11,PTR_s_setTitle__102268ee8,uVar10);
              (*(code *)PTR__objc_release_1021e1c70)(uVar10);
              if (*(int *)local_338 != -1) {
                if (*(int *)local_338 != 0) {
                  LOCK();
                  *(int *)local_338 = *(int *)local_338 + -1;
                  local_31 = *(int *)local_338 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100016ed6;
                }
                QArrayData::deallocate(local_338,2,8);
              }
LAB_100016ed6:
              uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                 (param_1,PTR_s_toolbatItemWithIdentifier_name_v_102268f80,uVar9,
                                  uVar9,IVar11,PTR_s_buyButtonClicked_102268ff8,&cf___,1999);
              uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
              uVar18 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                 (IVar11,PTR_s_attributedTitle_102268ef0);
              uVar18 = _objc_retainAutoreleasedReturnValue(uVar18);
              dVar2 = (double)(*(code *)PTR__objc_msgSend_1021e1c68)(uVar18,PTR_s_size_102268ef8);
              dVar2 = dVar2 + DAT_100e11070;
              (*(code *)PTR__objc_release_1021e1c70)(uVar18);
              dVar3 = DAT_100e11078;
              if (DAT_100e11078 <= dVar2) {
                dVar3 = dVar2;
              }
              (*(code *)PTR__objc_msgSend_1021e1c68)
                        (SUB84(dVar3,0),DAT_100e11080,uVar10,PTR_s_setMaxSize__102268f88);
              (*(code *)PTR__objc_msgSend_1021e1c68)
                        (SUB84(dVar3,0),DAT_100e11080,uVar10,PTR_s_setMinSize__102268f90);
            }
            else {
              uVar10 = 0;
              if (((*(long *)(param_1 + _vm) == 0) ||
                  (uVar10 = 0, *(int *)(*(long *)(param_1 + _vm) + 4) == 0)) ||
                 (uVar10 = 0, *(long *)(_vm + 8 + param_1) == 0)) goto LAB_100015f72;
              uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                 (uVar9,PTR_s_stringByReplacingOccurrencesOfSt_102268fd0,&cf_Device,
                                  &cf___);
              IVar11 = _objc_retainAutoreleasedReturnValue(uVar10);
              lVar15 = *(long *)(param_1 + lVar1);
              uVar10 = 0;
              if ((lVar15 != 0) && (uVar10 = 0, *(int *)(lVar15 + 4) != 0)) {
                uVar10 = *(undefined8 *)(lVar1 + 8 + param_1);
              }
              uVar10 = FUN_10018f4e0(uVar10);
              plVar13 = (long *)FUN_1007c65a0(uVar10);
              local_1f0 = (Data *)*plVar13;
              if (*(int *)local_1f0 != -1) {
                if (*(int *)local_1f0 == 0) {
                  QListData::detach((int)&local_1f0);
                  lVar15 = (long)*(int *)(local_1f0 + 8);
                  lVar1 = *plVar13;
                  if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_1f0 + lVar15 * 8) &&
                     (lVar16 = *(int *)(local_1f0 + 0xc) - lVar15,
                     lVar16 != 0 && lVar15 <= *(int *)(local_1f0 + 0xc))) {
                    _memcpy(local_1f0 + lVar15 * 8 + 0x10,
                            (void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),lVar16 * 8);
                  }
                }
                else {
                  LOCK();
                  *(int *)local_1f0 = *(int *)local_1f0 + 1;
                  local_31 = *(int *)local_1f0 != 0;
                  UNLOCK();
                }
              }
              uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                 (PTR_PDDeviceBarButtonItem_10226a7f0,PTR_s_alloc_102268b58);
              iVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(IVar11,PTR_s_integerValue_102268fd8);
              self = (*(code *)PTR__objc_msgSend_1021e1c68)
                               (uVar10,PTR_s_initWithActionSet__102268ec0,
                                *(undefined8 *)
                                 (local_1f0 +
                                 ((long)iVar7 + (long)*(int *)(local_1f0 + 8)) * 8 + 0x10));
              local_218 = 0;
              uStack_210 = 0;
              local_208 = 0x4032000000000000;
              local_200 = 0x4042000000000000;
              uVar18 = 0x4042000000000000;
              uVar10 = 0x4032000000000000;
              (*(code *)PTR__objc_msgSend_1021e1c68)(self,PTR_s_setFrame__102268fc0);
              uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                 (param_1,PTR_s_toolbatItemWithIdentifier_name_v_102268f80,uVar9,
                                  uVar9,self,0,0,0xfffffffffffffc18,uVar10,uVar18);
              uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
              if (self == 0) {
                local_228 = 0;
                uStack_220 = 0;
                local_238 = 0;
                uStack_230 = 0;
              }
              else {
                _objc_msgSend_stret((undefined *)&local_238,self,PTR_s_frame_102268b50);
              }
              uVar18 = uStack_220;
              uVar17 = (undefined4)local_228;
              (*(code *)PTR__objc_msgSend_1021e1c68)
                        (uVar17,uStack_220,uVar10,PTR_s_setMaxSize__102268f88);
              (*(code *)PTR__objc_msgSend_1021e1c68)
                        (uVar17,uVar18,uVar10,PTR_s_setMinSize__102268f90);
              (*(code *)PTR__objc_release_1021e1c70)(self);
              if (*(int *)local_1f0 != -1) {
                if (*(int *)local_1f0 != 0) {
                  LOCK();
                  *(int *)local_1f0 = *(int *)local_1f0 + -1;
                  local_31 = *(int *)local_1f0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100015f6c;
                }
                QListData::dispose(local_1f0);
              }
            }
          }
          else {
            uVar18 = (*(code *)PTR__objc_msgSend_1021e1c68)
                               (PTR_PDToolsBarButtonItem_10226a808,PTR_s_alloc_102268b58);
            uVar10 = 0;
            if ((*(long *)(param_1 + _vm) != 0) &&
               (uVar10 = 0, *(int *)(*(long *)(param_1 + _vm) + 4) != 0)) {
              uVar10 = *(undefined8 *)(_vm + 8 + param_1);
            }
            IVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)
                               (uVar18,PTR_s_initWithVm__102268e40,uVar10);
            local_1c8 = 0;
            uStack_1c0 = 0;
            local_1b8 = 0x4032000000000000;
            local_1b0 = 0x4034000000000000;
            uVar18 = 0x4034000000000000;
            uVar10 = 0x4032000000000000;
            (*(code *)PTR__objc_msgSend_1021e1c68)(IVar11,PTR_s_setFrame__102268fc0);
            uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                               (param_1,PTR_s_toolbatItemWithIdentifier_name_v_102268f80,uVar9,uVar9
                                ,IVar11,0,0,0xfffffffffffffc18,uVar10,uVar18);
            uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
            if (IVar11 == 0) {
              local_1d8 = 0;
              uStack_1d0 = 0;
              local_1e8 = 0;
              uStack_1e0 = 0;
              uVar17 = 0;
            }
            else {
              _objc_msgSend_stret((undefined *)&local_1e8,IVar11,PTR_s_frame_102268b50);
              uVar17 = (undefined4)local_1d8;
            }
            uVar18 = uStack_1d0;
            (*(code *)PTR__objc_msgSend_1021e1c68)(uVar10,PTR_s_setMaxSize__102268f88);
            (*(code *)PTR__objc_msgSend_1021e1c68)(uVar17,uVar18,uVar10,PTR_s_setMinSize__102268f90)
            ;
          }
        }
        else {
          uVar18 = (*(code *)PTR__objc_msgSend_1021e1c68)
                             (PTR_PDDevelopBarButtonItem_10226a800,PTR_s_alloc_102268b58);
          uVar10 = 0;
          if ((*(long *)(param_1 + _vm) != 0) &&
             (uVar10 = 0, *(int *)(*(long *)(param_1 + _vm) + 4) != 0)) {
            uVar10 = *(undefined8 *)(_vm + 8 + param_1);
          }
          IVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar18,PTR_s_initWithVm__102268e40,uVar10)
          ;
          local_188 = 0;
          uStack_180 = 0;
          local_178 = 0x4032000000000000;
          local_170 = 0x4042000000000000;
          uVar18 = 0x4042000000000000;
          uVar10 = 0x4032000000000000;
          (*(code *)PTR__objc_msgSend_1021e1c68)(IVar11,PTR_s_setFrame__102268fc0);
          uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                             (param_1,PTR_s_toolbatItemWithIdentifier_name_v_102268f80,uVar9,uVar9,
                              IVar11,0,0,0xfffffffffffffc18,uVar10,uVar18);
          uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
          if (IVar11 == 0) {
            local_198 = 0;
            uStack_190 = 0;
            local_1a8 = 0;
            uStack_1a0 = 0;
            uVar17 = 0;
          }
          else {
            _objc_msgSend_stret((undefined *)&local_1a8,IVar11,PTR_s_frame_102268b50);
            uVar17 = (undefined4)local_198;
          }
          uVar18 = uStack_190;
          (*(code *)PTR__objc_msgSend_1021e1c68)(uVar10,PTR_s_setMaxSize__102268f88);
          (*(code *)PTR__objc_msgSend_1021e1c68)(uVar17,uVar18,uVar10,PTR_s_setMinSize__102268f90);
        }
      }
      else {
        uVar18 = (*(code *)PTR__objc_msgSend_1021e1c68)
                           (PTR_PDSharedFoldersBarButtonItem_10226a7f8,PTR_s_alloc_102268b58);
        uVar10 = 0;
        if ((*(long *)(param_1 + _vm) != 0) &&
           (uVar10 = 0, *(int *)(*(long *)(param_1 + _vm) + 4) != 0)) {
          uVar10 = *(undefined8 *)(_vm + 8 + param_1);
        }
        IVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar18,PTR_s_initWithVm__102268e40,uVar10);
        local_148 = 0;
        uStack_140 = 0;
        local_138 = 0x4032000000000000;
        local_130 = 0x4042000000000000;
        uVar18 = 0x4042000000000000;
        uVar10 = 0x4032000000000000;
        (*(code *)PTR__objc_msgSend_1021e1c68)(IVar11,PTR_s_setFrame__102268fc0);
        uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                           (param_1,PTR_s_toolbatItemWithIdentifier_name_v_102268f80,uVar9,uVar9,
                            IVar11,0,0,0xfffffffffffffc18,uVar10,uVar18);
        uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
        if (IVar11 == 0) {
          local_158 = 0;
          uStack_150 = 0;
          local_168 = 0;
          uStack_160 = 0;
          uVar17 = 0;
        }
        else {
          _objc_msgSend_stret((undefined *)&local_168,IVar11,PTR_s_frame_102268b50);
          uVar17 = (undefined4)local_158;
        }
        uVar18 = uStack_150;
        (*(code *)PTR__objc_msgSend_1021e1c68)(uVar10,PTR_s_setMaxSize__102268f88);
        (*(code *)PTR__objc_msgSend_1021e1c68)(uVar17,uVar18,uVar10,PTR_s_setMinSize__102268f90);
      }
    }
    else {
      uVar18 = (*(code *)PTR__objc_msgSend_1021e1c68)
                         (PTR_PDKeyboardBarButtonItem_10226a7e8,PTR_s_alloc_102268b58);
      uVar10 = 0;
      if ((*(long *)(param_1 + _vm) != 0) &&
         (uVar10 = 0, *(int *)(*(long *)(param_1 + _vm) + 4) != 0)) {
        uVar10 = *(undefined8 *)(_vm + 8 + param_1);
      }
      IVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar18,PTR_s_initWithVm__102268e40,uVar10);
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0x4032000000000000;
      local_f0 = 0x4042000000000000;
      uVar18 = 0x4042000000000000;
      uVar10 = 0x4032000000000000;
      (*(code *)PTR__objc_msgSend_1021e1c68)(IVar11,PTR_s_setFrame__102268fc0);
      uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                         (param_1,PTR_s_toolbatItemWithIdentifier_name_v_102268f80,uVar9,uVar9,
                          IVar11,0,0,0xfffffffffffffc18,uVar10,uVar18);
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      if (IVar11 == 0) {
        local_118 = 0;
        uStack_110 = 0;
        local_128 = 0;
        uStack_120 = 0;
        uVar17 = 0;
      }
      else {
        _objc_msgSend_stret((undefined *)&local_128,IVar11,PTR_s_frame_102268b50);
        uVar17 = (undefined4)local_118;
      }
      uVar18 = uStack_110;
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar10,PTR_s_setMaxSize__102268f88);
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar17,uVar18,uVar10,PTR_s_setMinSize__102268f90);
    }
  }
  else {
    uVar19 = (*(code *)PTR__objc_msgSend_1021e1c68)
                       (PTR__OBJC_CLASS___NSView_10226a810,PTR_s_alloc_102268b58);
    local_98 = 0;
    uStack_90 = 0;
    local_88 = _DAT_100e110b0;
    uStack_84 = _UNK_100e110b4;
    uStack_80 = _UNK_100e110b8;
    uStack_7c = _UNK_100e110bc;
    uVar18 = CONCAT44(_UNK_100e110bc,_UNK_100e110b8);
    uVar10 = CONCAT44(_UNK_100e110b4,_DAT_100e110b0);
    IVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar19,PTR_s_initWithFrame__102268f78);
    uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                       (param_1,PTR_s_toolbatItemWithIdentifier_name_v_102268f80,uVar9,uVar9,IVar11,
                        0,0,2000,uVar10,uVar18);
LAB_100015d40:
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
  }
LAB_100015f6c:
  (*(code *)PTR__objc_release_1021e1c70)(IVar11);
LAB_100015f72:
  puVar4 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar9);
  (*(code *)puVar4)(uVar8);
  IVar11 = _objc_autoreleaseReturnValue(uVar10);
  return IVar11;
}

