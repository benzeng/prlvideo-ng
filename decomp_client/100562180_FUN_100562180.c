
void FUN_100562180(long param_1)

{
  char *pcVar1;
  QVariant *pQVar2;
  long *plVar3;
  QPixmap *pQVar4;
  undefined *puVar5;
  undefined *puVar6;
  AnonymousUnion0 AVar7;
  int iVar8;
  size_t sVar9;
  QArrayData *pQVar10;
  undefined8 uVar11;
  Data *pDVar12;
  long lVar13;
  QPixmap local_520 [32];
  QPixmap local_500 [32];
  QArrayData *local_4e0;
  QPixmap local_4d8 [32];
  QArrayData *local_4b8;
  QPixmap local_4b0 [32];
  QArrayData *local_490;
  QPixmap local_488 [32];
  QPixmap local_468 [32];
  QPixmap local_448 [32];
  QArrayData *local_428;
  QPixmap local_420 [32];
  QArrayData *local_400;
  QPixmap local_3f8 [32];
  QArrayData *local_3d8;
  QPixmap local_3d0 [32];
  QPixmap local_3b0 [32];
  QPixmap local_390 [32];
  QArrayData *local_370;
  QPixmap local_368 [32];
  QArrayData *local_348;
  QPixmap local_340 [32];
  QArrayData *local_320;
  QPixmap local_318 [32];
  QPixmap local_2f8 [32];
  QPixmap local_2d8 [32];
  QArrayData *local_2b8;
  QPixmap local_2b0 [32];
  QArrayData *local_290;
  QPixmap local_288 [32];
  QArrayData *local_268;
  QPixmap local_260 [32];
  QPixmap local_240 [32];
  QPixmap local_220 [32];
  QArrayData *local_200;
  QPixmap local_1f8 [32];
  QArrayData *local_1d8;
  QPixmap local_1d0 [32];
  QArrayData *local_1b0;
  QPixmap local_1a8 [32];
  QPixmap local_188 [32];
  QPixmap local_168 [32];
  QArrayData *local_148;
  QPixmap local_140 [32];
  QArrayData *local_120;
  QPixmap local_118 [32];
  QArrayData *local_f8;
  QPixmap local_f0 [32];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  QString local_b8;
  QVariant local_b0;
  QString local_a0;
  QVariant local_98;
  QArrayData *local_88;
  AnonymousUnion0 local_80;
  QVariant local_78;
  QArrayData *local_68;
  AnonymousUnion0 local_60;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  FUN_100566780(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
  pcVar1 = *(char **)(param_1 + 0x10);
  pQVar2 = *(QVariant **)PTR_PreprocessValueProp_1021e1570;
  QVariant::QVariant(&local_48,true);
  QObject::setProperty(pcVar1,pQVar2);
  QVariant::~QVariant(&local_48);
  puVar5 = PTR_s_ShortcutsStorage_102274490;
  pcVar1 = *(char **)(param_1 + 0x10);
  pQVar2 = *(QVariant **)PTR_StoragesProp_1021e1560;
  local_60.field1 = (Data *)PTR_shared_null_1021e15e8;
  iVar8 = -1;
  if (PTR_s_ShortcutsStorage_102274490 != (undefined *)0x0) {
    sVar9 = _strlen(PTR_s_ShortcutsStorage_102274490);
    iVar8 = (int)sVar9;
  }
  pQVar10 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar8);
  local_68 = pQVar10;
  FUN_1000341d0(&local_60,&local_68);
  QVariant::QVariant(&local_58,(QStringList *)&local_60.field0);
  QObject::setProperty(pcVar1,pQVar2);
  QVariant::~QVariant(&local_58);
  if (*(int *)pQVar10 != -1) {
    if (*(int *)pQVar10 != 0) {
      LOCK();
      *(int *)pQVar10 = *(int *)pQVar10 + -1;
      local_31 = *(int *)pQVar10 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10056227f;
    }
    QArrayData::deallocate(pQVar10,2,8);
  }
LAB_10056227f:
  AVar7 = local_60;
  if (*(int *)local_60.field1 != -1) {
    if (*(int *)local_60.field1 != 0) {
      LOCK();
      *(int *)local_60.field1 = *(int *)local_60.field1 + -1;
      local_31 = *(int *)local_60.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100562311;
    }
    iVar8 = *(int *)(local_60.field1 + 0xc);
    if (iVar8 != *(int *)(local_60.field1 + 8)) {
      lVar13 = (long)*(int *)(local_60.field1 + 8) * 8 + (long)iVar8 * -8;
      pDVar12 = (Data *)(local_60.field1 + (long)iVar8 * 8 + 8);
      do {
        pQVar10 = *(QArrayData **)pDVar12;
        if (*(int *)pQVar10 == 0) {
LAB_1005622f0:
          QArrayData::deallocate(pQVar10,2,8);
        }
        else if (*(int *)pQVar10 != -1) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          local_31 = *(int *)pQVar10 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar10 = *(QArrayData **)pDVar12;
            goto LAB_1005622f0;
          }
        }
        pDVar12 = pDVar12 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_100562311:
  puVar6 = PTR_s_AppShortcuts_1022744a8;
  puVar5 = PTR_s_ShortcutsStorage_102274490;
  pcVar1 = *(char **)(param_1 + 0x10);
  local_80.field1 = (Data *)PTR_shared_null_1021e15e8;
  iVar8 = -1;
  if (PTR_s_AppShortcuts_1022744a8 != (undefined *)0x0) {
    sVar9 = _strlen(PTR_s_AppShortcuts_1022744a8);
    iVar8 = (int)sVar9;
  }
  pQVar10 = (QArrayData *)QString::fromAscii_helper(puVar6,iVar8);
  local_88 = pQVar10;
  FUN_1000341d0(&local_80,&local_88);
  QVariant::QVariant(&local_78,(QStringList *)&local_80.field0);
  QObject::setProperty(pcVar1,(QVariant *)puVar5);
  QVariant::~QVariant(&local_78);
  if (*(int *)pQVar10 != -1) {
    if (*(int *)pQVar10 != 0) {
      LOCK();
      *(int *)pQVar10 = *(int *)pQVar10 + -1;
      local_31 = *(int *)pQVar10 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005623af;
    }
    QArrayData::deallocate(pQVar10,2,8);
  }
LAB_1005623af:
  AVar7 = local_80;
  if (*(int *)local_80.field1 != -1) {
    if (*(int *)local_80.field1 != 0) {
      LOCK();
      *(int *)local_80.field1 = *(int *)local_80.field1 + -1;
      local_31 = *(int *)local_80.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100562441;
    }
    iVar8 = *(int *)(local_80.field1 + 0xc);
    if (iVar8 != *(int *)(local_80.field1 + 8)) {
      lVar13 = (long)*(int *)(local_80.field1 + 8) * 8 + (long)iVar8 * -8;
      pDVar12 = (Data *)(local_80.field1 + (long)iVar8 * 8 + 8);
      do {
        pQVar10 = *(QArrayData **)pDVar12;
        if (*(int *)pQVar10 == 0) {
LAB_100562420:
          QArrayData::deallocate(pQVar10,2,8);
        }
        else if (*(int *)pQVar10 != -1) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          local_31 = *(int *)pQVar10 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar10 = *(QArrayData **)pDVar12;
            goto LAB_100562420;
          }
        }
        pDVar12 = pDVar12 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_100562441:
  pcVar1 = *(char **)(param_1 + 0x10);
  pQVar2 = *(QVariant **)PTR_SetterProp_1021e1558;
  local_a0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("setAppShortcuts",0xf);
  QVariant::QVariant(&local_98,&local_a0);
  QObject::setProperty(pcVar1,pQVar2);
  QVariant::~QVariant(&local_98);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005624ce;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_1005624ce:
  pcVar1 = *(char **)(param_1 + 0x10);
  pQVar2 = *(QVariant **)PTR_GetterProp_1021e1548;
  local_b8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("getAppShortcuts",0xf);
  QVariant::QVariant(&local_b0,&local_b8);
  QObject::setProperty(pcVar1,pQVar2);
  QVariant::~QVariant(&local_b0);
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_31 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10056255b;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_10056255b:
  plVar3 = *(long **)(*(long *)(param_1 + 0x18) + 0x18);
  (**(code **)(*plVar3 + 0x1c0))(plVar3,param_1 + 0x20);
  plVar3 = *(long **)(*(long *)(param_1 + 0x18) + 0x18);
  local_d0 = 0xffffffff;
  local_cc = 0xffffffff;
  local_c0 = 0;
  local_c8 = 0;
  (**(code **)(*plVar3 + 0x208))(plVar3,&local_d0);
  QAbstractItemView::setTextElideMode(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),2);
  QTreeView::setUniformRowHeights(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),0));
  uVar11 = QTreeView::header();
  QAbstractItemView::setTextElideMode(uVar11,2);
  QHeaderView::setStretchLastSection(SUB81(uVar11,0));
  QHeaderView::setSectionResizeMode(uVar11,0,3);
  QHeaderView::setSectionResizeMode(uVar11,1,1);
  QHeaderView::setSectionResizeMode(uVar11,2,3);
  QTreeView::setHeaderHidden(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),0));
  pQVar4 = *(QPixmap **)(*(long *)(param_1 + 0x18) + 0x38);
  local_f8 = (QArrayData *)
             QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_plus_26x22.png",0x2b);
  QPixmap::QPixmap(local_f0,&local_f8,0,0);
  local_120 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_plus_pressed_26x22.png",0x33);
  QPixmap::QPixmap(local_118,&local_120,0,0);
  local_148 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_plus_disabled_26x22.png",0x34)
  ;
  QPixmap::QPixmap(local_140,&local_148,0,0);
  QPixmap::QPixmap(local_168);
  QPixmap::QPixmap(local_188);
  CImageButton::setPixmaps(pQVar4,local_f0,local_118,local_140,local_168);
  QPixmap::~QPixmap(local_188);
  QPixmap::~QPixmap(local_168);
  QPixmap::~QPixmap(local_140);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100562777;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_100562777:
  QPixmap::~QPixmap(local_118);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005627b9;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1005627b9:
  QPixmap::~QPixmap(local_f0);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005627fb;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1005627fb:
  pQVar4 = *(QPixmap **)(*(long *)(param_1 + 0x18) + 0x40);
  local_1b0 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_minus_25x22.png",0x2c);
  QPixmap::QPixmap(local_1a8,&local_1b0,0,0);
  local_1d8 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_minus_pressed_25x22.png",0x34)
  ;
  QPixmap::QPixmap(local_1d0,&local_1d8,0,0);
  local_200 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_btn_minus_disabled_25x22.png",0x35);
  QPixmap::QPixmap(local_1f8,&local_200,0,0);
  QPixmap::QPixmap(local_220);
  QPixmap::QPixmap(local_240);
  CImageButton::setPixmaps(pQVar4,local_1a8,local_1d0,local_1f8,local_220);
  QPixmap::~QPixmap(local_240);
  QPixmap::~QPixmap(local_220);
  QPixmap::~QPixmap(local_1f8);
  if (*(int *)local_200 != -1) {
    if (*(int *)local_200 != 0) {
      LOCK();
      *(int *)local_200 = *(int *)local_200 + -1;
      local_31 = *(int *)local_200 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10056292d;
    }
    QArrayData::deallocate(local_200,2,8);
  }
LAB_10056292d:
  QPixmap::~QPixmap(local_1d0);
  if (*(int *)local_1d8 != -1) {
    if (*(int *)local_1d8 != 0) {
      LOCK();
      *(int *)local_1d8 = *(int *)local_1d8 + -1;
      local_31 = *(int *)local_1d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10056296f;
    }
    QArrayData::deallocate(local_1d8,2,8);
  }
LAB_10056296f:
  QPixmap::~QPixmap(local_1a8);
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      local_31 = *(int *)local_1b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005629b1;
    }
    QArrayData::deallocate(local_1b0,2,8);
  }
LAB_1005629b1:
  pQVar4 = *(QPixmap **)(*(long *)(param_1 + 0x18) + 0x48);
  local_268 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_edit1_27x22.png",0x2c);
  QPixmap::QPixmap(local_260,&local_268,0,0);
  local_290 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_edit_pressed1_27x22.png",0x34)
  ;
  QPixmap::QPixmap(local_288,&local_290,0,0);
  local_2b8 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_btn_edit_disabled1_27x22.png",0x35);
  QPixmap::QPixmap(local_2b0,&local_2b8,0,0);
  QPixmap::QPixmap(local_2d8);
  QPixmap::QPixmap(local_2f8);
  CImageButton::setPixmaps(pQVar4,local_260,local_288,local_2b0,local_2d8);
  QPixmap::~QPixmap(local_2f8);
  QPixmap::~QPixmap(local_2d8);
  QPixmap::~QPixmap(local_2b0);
  if (*(int *)local_2b8 != -1) {
    if (*(int *)local_2b8 != 0) {
      LOCK();
      *(int *)local_2b8 = *(int *)local_2b8 + -1;
      local_31 = *(int *)local_2b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100562ae3;
    }
    QArrayData::deallocate(local_2b8,2,8);
  }
LAB_100562ae3:
  QPixmap::~QPixmap(local_288);
  if (*(int *)local_290 != -1) {
    if (*(int *)local_290 != 0) {
      LOCK();
      *(int *)local_290 = *(int *)local_290 + -1;
      local_31 = *(int *)local_290 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100562b25;
    }
    QArrayData::deallocate(local_290,2,8);
  }
LAB_100562b25:
  QPixmap::~QPixmap(local_260);
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_31 = *(int *)local_268 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100562b67;
    }
    QArrayData::deallocate(local_268,2,8);
  }
LAB_100562b67:
  pQVar4 = *(QPixmap **)(*(long *)(param_1 + 0x18) + 0x50);
  local_320 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png",0x39);
  QPixmap::QPixmap(local_318,&local_320,0,0);
  local_348 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png",0x39);
  QPixmap::QPixmap(local_340,&local_348,0,0);
  local_370 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png",0x39);
  QPixmap::QPixmap(local_368,&local_370,0,0);
  QPixmap::QPixmap(local_390);
  QPixmap::QPixmap(local_3b0);
  CImageButton::setPixmaps(pQVar4,local_318,local_340,local_368,local_390);
  QPixmap::~QPixmap(local_3b0);
  QPixmap::~QPixmap(local_390);
  QPixmap::~QPixmap(local_368);
  if (*(int *)local_370 != -1) {
    if (*(int *)local_370 != 0) {
      LOCK();
      *(int *)local_370 = *(int *)local_370 + -1;
      local_31 = *(int *)local_370 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100562c99;
    }
    QArrayData::deallocate(local_370,2,8);
  }
LAB_100562c99:
  QPixmap::~QPixmap(local_340);
  if (*(int *)local_348 != -1) {
    if (*(int *)local_348 != 0) {
      LOCK();
      *(int *)local_348 = *(int *)local_348 + -1;
      local_31 = *(int *)local_348 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100562cdb;
    }
    QArrayData::deallocate(local_348,2,8);
  }
LAB_100562cdb:
  QPixmap::~QPixmap(local_318);
  if (*(int *)local_320 != -1) {
    if (*(int *)local_320 != 0) {
      LOCK();
      *(int *)local_320 = *(int *)local_320 + -1;
      local_31 = *(int *)local_320 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100562d1d;
    }
    QArrayData::deallocate(local_320,2,8);
  }
LAB_100562d1d:
  pQVar4 = *(QPixmap **)(*(long *)(param_1 + 0x18) + 0x58);
  local_3d8 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png",0x39);
  QPixmap::QPixmap(local_3d0,&local_3d8,0,0);
  local_400 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png",0x39);
  QPixmap::QPixmap(local_3f8,&local_400,0,0);
  local_428 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png",0x39);
  QPixmap::QPixmap(local_420,&local_428,0,0);
  QPixmap::QPixmap(local_448);
  QPixmap::QPixmap(local_468);
  CImageButton::setPixmaps(pQVar4,local_3d0,local_3f8,local_420,local_448);
  QPixmap::~QPixmap(local_468);
  QPixmap::~QPixmap(local_448);
  QPixmap::~QPixmap(local_420);
  if (*(int *)local_428 != -1) {
    if (*(int *)local_428 != 0) {
      LOCK();
      *(int *)local_428 = *(int *)local_428 + -1;
      local_31 = *(int *)local_428 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100562e4f;
    }
    QArrayData::deallocate(local_428,2,8);
  }
LAB_100562e4f:
  QPixmap::~QPixmap(local_3f8);
  if (*(int *)local_400 != -1) {
    if (*(int *)local_400 != 0) {
      LOCK();
      *(int *)local_400 = *(int *)local_400 + -1;
      local_31 = *(int *)local_400 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100562e91;
    }
    QArrayData::deallocate(local_400,2,8);
  }
LAB_100562e91:
  QPixmap::~QPixmap(local_3d0);
  if (*(int *)local_3d8 != -1) {
    if (*(int *)local_3d8 != 0) {
      LOCK();
      *(int *)local_3d8 = *(int *)local_3d8 + -1;
      local_31 = *(int *)local_3d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100562ed3;
    }
    QArrayData::deallocate(local_3d8,2,8);
  }
LAB_100562ed3:
  CImageButton::setHorExpanding(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x58),0));
  pQVar4 = *(QPixmap **)(*(long *)(param_1 + 0x18) + 0x60);
  local_490 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_right_26x22.png",0x38);
  QPixmap::QPixmap(local_488,&local_490,0,0);
  local_4b8 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_right_26x22.png",0x38);
  QPixmap::QPixmap(local_4b0,&local_4b8,0,0);
  local_4e0 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_right_26x22.png",0x38);
  QPixmap::QPixmap(local_4d8,&local_4e0,0,0);
  QPixmap::QPixmap(local_500);
  QPixmap::QPixmap(local_520);
  CImageButton::setPixmaps(pQVar4,local_488,local_4b0,local_4d8,local_500);
  QPixmap::~QPixmap(local_520);
  QPixmap::~QPixmap(local_500);
  QPixmap::~QPixmap(local_4d8);
  if (*(int *)local_4e0 != -1) {
    if (*(int *)local_4e0 != 0) {
      LOCK();
      *(int *)local_4e0 = *(int *)local_4e0 + -1;
      local_31 = *(int *)local_4e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100563017;
    }
    QArrayData::deallocate(local_4e0,2,8);
  }
LAB_100563017:
  QPixmap::~QPixmap(local_4b0);
  if (*(int *)local_4b8 != -1) {
    if (*(int *)local_4b8 != 0) {
      LOCK();
      *(int *)local_4b8 = *(int *)local_4b8 + -1;
      local_31 = *(int *)local_4b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100563059;
    }
    QArrayData::deallocate(local_4b8,2,8);
  }
LAB_100563059:
  QPixmap::~QPixmap(local_488);
  if (*(int *)local_490 != -1) {
    if (*(int *)local_490 != 0) {
      LOCK();
      *(int *)local_490 = *(int *)local_490 + -1;
      local_31 = *(int *)local_490 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10056309b;
    }
    QArrayData::deallocate(local_490,2,8);
  }
LAB_10056309b:
  QWidget::setFocusPolicy(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38),0);
  QWidget::setFocusPolicy(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40),0);
  QWidget::setFocusPolicy(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x48),0);
  QWidget::setFocusPolicy(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50),0);
  QWidget::setFocusPolicy(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x58),0);
  QWidget::setFocusPolicy(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x60),0);
  lVar13 = QWidget::layout();
  if (lVar13 != 0) {
    iVar8 = QWidget::layout();
    QLayout::setSpacing(iVar8);
  }
  uVar11 = ItemViewWrapper::wrapQtView(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),uVar11,0,0)
  ;
  QBoxLayout::insertWidget(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),0,uVar11,0,0);
  QWidget::hide();
  QWidget::hide();
  FUN_100563d50(param_1);
  return;
}

