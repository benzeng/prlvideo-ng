
void FUN_100552e40(long param_1)

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
  QArrayData *pQVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  Data *pDVar14;
  long lVar15;
  QPixmap local_528 [32];
  QPixmap local_508 [32];
  QArrayData *local_4e8;
  QPixmap local_4e0 [32];
  QArrayData *local_4c0;
  QPixmap local_4b8 [32];
  QArrayData *local_498;
  QPixmap local_490 [32];
  QPixmap local_470 [32];
  QPixmap local_450 [32];
  QArrayData *local_430;
  QPixmap local_428 [32];
  QArrayData *local_408;
  QPixmap local_400 [32];
  QArrayData *local_3e0;
  QPixmap local_3d8 [32];
  QPixmap local_3b8 [32];
  QPixmap local_398 [32];
  QArrayData *local_378;
  QPixmap local_370 [32];
  QArrayData *local_350;
  QPixmap local_348 [32];
  QArrayData *local_328;
  QPixmap local_320 [32];
  QPixmap local_300 [32];
  QPixmap local_2e0 [32];
  QArrayData *local_2c0;
  QPixmap local_2b8 [32];
  QArrayData *local_298;
  QPixmap local_290 [32];
  QArrayData *local_270;
  QPixmap local_268 [32];
  QPixmap local_248 [32];
  QPixmap local_228 [32];
  QArrayData *local_208;
  QPixmap local_200 [32];
  QArrayData *local_1e0;
  QPixmap local_1d8 [32];
  QArrayData *local_1b8;
  QPixmap local_1b0 [32];
  QPixmap local_190 [32];
  QPixmap local_170 [32];
  QArrayData *local_150;
  QPixmap local_148 [32];
  QArrayData *local_128;
  QPixmap local_120 [32];
  QArrayData *local_100;
  QPixmap local_f8 [32];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  QString local_c0;
  QVariant local_b8;
  QString local_a8;
  QVariant local_a0;
  QArrayData *local_90;
  QArrayData *local_88;
  AnonymousUnion0 local_80;
  QVariant local_78;
  QArrayData *local_68;
  AnonymousUnion0 local_60;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  FUN_100557f10(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
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
      if ((bool)local_31) goto LAB_100552f3f;
    }
    QArrayData::deallocate(pQVar10,2,8);
  }
LAB_100552f3f:
  AVar7 = local_60;
  if (*(int *)local_60.field1 != -1) {
    if (*(int *)local_60.field1 != 0) {
      LOCK();
      *(int *)local_60.field1 = *(int *)local_60.field1 + -1;
      local_31 = *(int *)local_60.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100552fd1;
    }
    iVar8 = *(int *)(local_60.field1 + 0xc);
    if (iVar8 != *(int *)(local_60.field1 + 8)) {
      lVar15 = (long)*(int *)(local_60.field1 + 8) * 8 + (long)iVar8 * -8;
      pDVar14 = (Data *)(local_60.field1 + (long)iVar8 * 8 + 8);
      do {
        pQVar10 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar10 == 0) {
LAB_100552fb0:
          QArrayData::deallocate(pQVar10,2,8);
        }
        else if (*(int *)pQVar10 != -1) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          local_31 = *(int *)pQVar10 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar10 = *(QArrayData **)pDVar14;
            goto LAB_100552fb0;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar15 = lVar15 + 8;
      } while (lVar15 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_100552fd1:
  puVar6 = PTR_s_Profiles_1022744b0;
  puVar5 = PTR_s_ShortcutsStorage_102274490;
  pcVar1 = *(char **)(param_1 + 0x10);
  local_80.field1 = (Data *)PTR_shared_null_1021e15e8;
  iVar8 = -1;
  if (PTR_s_Profiles_1022744b0 != (undefined *)0x0) {
    sVar9 = _strlen(PTR_s_Profiles_1022744b0);
    iVar8 = (int)sVar9;
  }
  pQVar10 = (QArrayData *)QString::fromAscii_helper(puVar6,iVar8);
  local_88 = pQVar10;
  FUN_1000341d0(&local_80,&local_88);
  puVar6 = PTR_s_ProfileAssignments_1022744b8;
  iVar8 = -1;
  if (PTR_s_ProfileAssignments_1022744b8 != (undefined *)0x0) {
    sVar9 = _strlen(PTR_s_ProfileAssignments_1022744b8);
    iVar8 = (int)sVar9;
  }
  pQVar11 = (QArrayData *)QString::fromAscii_helper(puVar6,iVar8);
  local_90 = pQVar11;
  FUN_1000341d0(&local_80,&local_90);
  QVariant::QVariant(&local_78,(QStringList *)&local_80.field0);
  QObject::setProperty(pcVar1,(QVariant *)puVar5);
  QVariant::~QVariant(&local_78);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005530b0;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_1005530b0:
  if (*(int *)pQVar10 != -1) {
    if (*(int *)pQVar10 != 0) {
      LOCK();
      *(int *)pQVar10 = *(int *)pQVar10 + -1;
      local_31 = *(int *)pQVar10 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005530df;
    }
    QArrayData::deallocate(pQVar10,2,8);
  }
LAB_1005530df:
  AVar7 = local_80;
  if (*(int *)local_80.field1 != -1) {
    if (*(int *)local_80.field1 != 0) {
      LOCK();
      *(int *)local_80.field1 = *(int *)local_80.field1 + -1;
      local_31 = *(int *)local_80.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100553171;
    }
    iVar8 = *(int *)(local_80.field1 + 0xc);
    if (iVar8 != *(int *)(local_80.field1 + 8)) {
      lVar15 = (long)*(int *)(local_80.field1 + 8) * 8 + (long)iVar8 * -8;
      pDVar14 = (Data *)(local_80.field1 + (long)iVar8 * 8 + 8);
      do {
        pQVar10 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar10 == 0) {
LAB_100553150:
          QArrayData::deallocate(pQVar10,2,8);
        }
        else if (*(int *)pQVar10 != -1) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          local_31 = *(int *)pQVar10 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar10 = *(QArrayData **)pDVar14;
            goto LAB_100553150;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar15 = lVar15 + 8;
      } while (lVar15 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_100553171:
  pcVar1 = *(char **)(param_1 + 0x10);
  pQVar2 = *(QVariant **)PTR_SetterProp_1021e1558;
  local_a8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("setProfiles",0xb);
  QVariant::QVariant(&local_a0,&local_a8);
  QObject::setProperty(pcVar1,pQVar2);
  QVariant::~QVariant(&local_a0);
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_31 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005531fe;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_1005531fe:
  pcVar1 = *(char **)(param_1 + 0x10);
  pQVar2 = *(QVariant **)PTR_GetterProp_1021e1548;
  local_c0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("getProfiles",0xb);
  QVariant::QVariant(&local_b8,&local_c0);
  QObject::setProperty(pcVar1,pQVar2);
  QVariant::~QVariant(&local_b8);
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_31 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055328b;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_10055328b:
  uVar12 = FUN_100152280();
  lVar15 = FUN_1001548f0(uVar12,param_1 + 0x58);
  if (lVar15 != 0) {
    FUN_100552af0(param_1 + 0x20,lVar15);
  }
  plVar3 = *(long **)(*(long *)(param_1 + 0x18) + 0x58);
  (**(code **)(*plVar3 + 0x1c0))(plVar3,param_1 + 0x20);
  plVar3 = *(long **)(*(long *)(param_1 + 0x18) + 0x58);
  local_d8 = 0xffffffff;
  local_d4 = 0xffffffff;
  local_c8 = 0;
  local_d0 = 0;
  (**(code **)(*plVar3 + 0x208))(plVar3,&local_d8);
  QAbstractItemView::setTextElideMode(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x58),2);
  QTreeView::setUniformRowHeights(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x58),0));
  uVar12 = QTreeView::header();
  QAbstractItemView::setTextElideMode(uVar12,2);
  QHeaderView::setStretchLastSection(SUB81(uVar12,0));
  QHeaderView::setSectionResizeMode(uVar12,0,3);
  QHeaderView::setSectionResizeMode(uVar12,1,1);
  QHeaderView::setSectionResizeMode(uVar12,2,3);
  QHeaderView::setSectionsMovable(SUB81(uVar12,0));
  pQVar4 = *(QPixmap **)(*(long *)(param_1 + 0x18) + 0x70);
  local_100 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_plus_26x22.png",0x2b);
  QPixmap::QPixmap(local_f8,&local_100,0,0);
  local_128 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_plus_pressed_26x22.png",0x33);
  QPixmap::QPixmap(local_120,&local_128,0,0);
  local_150 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_plus_disabled_26x22.png",0x34)
  ;
  QPixmap::QPixmap(local_148,&local_150,0,0);
  QPixmap::QPixmap(local_170);
  QPixmap::QPixmap(local_190);
  CImageButton::setPixmaps(pQVar4,local_f8,local_120,local_148,local_170);
  QPixmap::~QPixmap(local_190);
  QPixmap::~QPixmap(local_170);
  QPixmap::~QPixmap(local_148);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005534c1;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1005534c1:
  QPixmap::~QPixmap(local_120);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100553503;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100553503:
  QPixmap::~QPixmap(local_f8);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100553545;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100553545:
  pQVar4 = *(QPixmap **)(*(long *)(param_1 + 0x18) + 0x78);
  local_1b8 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_minus_25x22.png",0x2c);
  QPixmap::QPixmap(local_1b0,&local_1b8,0,0);
  local_1e0 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_minus_pressed_25x22.png",0x34)
  ;
  QPixmap::QPixmap(local_1d8,&local_1e0,0,0);
  local_208 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_btn_minus_disabled_25x22.png",0x35);
  QPixmap::QPixmap(local_200,&local_208,0,0);
  QPixmap::QPixmap(local_228);
  QPixmap::QPixmap(local_248);
  CImageButton::setPixmaps(pQVar4,local_1b0,local_1d8,local_200,local_228);
  QPixmap::~QPixmap(local_248);
  QPixmap::~QPixmap(local_228);
  QPixmap::~QPixmap(local_200);
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_31 = *(int *)local_208 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100553677;
    }
    QArrayData::deallocate(local_208,2,8);
  }
LAB_100553677:
  QPixmap::~QPixmap(local_1d8);
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_31 = *(int *)local_1e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005536b9;
    }
    QArrayData::deallocate(local_1e0,2,8);
  }
LAB_1005536b9:
  QPixmap::~QPixmap(local_1b0);
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_31 = *(int *)local_1b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005536fb;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_1005536fb:
  pQVar4 = *(QPixmap **)(*(long *)(param_1 + 0x18) + 0x80);
  local_270 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_edit1_27x22.png",0x2c);
  QPixmap::QPixmap(local_268,&local_270,0,0);
  local_298 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_edit_pressed1_27x22.png",0x34)
  ;
  QPixmap::QPixmap(local_290,&local_298,0,0);
  local_2c0 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_btn_edit_disabled1_27x22.png",0x35);
  QPixmap::QPixmap(local_2b8,&local_2c0,0,0);
  QPixmap::QPixmap(local_2e0);
  QPixmap::QPixmap(local_300);
  CImageButton::setPixmaps(pQVar4,local_268,local_290,local_2b8,local_2e0);
  QPixmap::~QPixmap(local_300);
  QPixmap::~QPixmap(local_2e0);
  QPixmap::~QPixmap(local_2b8);
  if (*(int *)local_2c0 != -1) {
    if (*(int *)local_2c0 != 0) {
      LOCK();
      *(int *)local_2c0 = *(int *)local_2c0 + -1;
      local_31 = *(int *)local_2c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100553830;
    }
    QArrayData::deallocate(local_2c0,2,8);
  }
LAB_100553830:
  QPixmap::~QPixmap(local_290);
  if (*(int *)local_298 != -1) {
    if (*(int *)local_298 != 0) {
      LOCK();
      *(int *)local_298 = *(int *)local_298 + -1;
      local_31 = *(int *)local_298 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100553872;
    }
    QArrayData::deallocate(local_298,2,8);
  }
LAB_100553872:
  QPixmap::~QPixmap(local_268);
  if (*(int *)local_270 != -1) {
    if (*(int *)local_270 != 0) {
      LOCK();
      *(int *)local_270 = *(int *)local_270 + -1;
      local_31 = *(int *)local_270 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005538b4;
    }
    QArrayData::deallocate(local_270,2,8);
  }
LAB_1005538b4:
  pQVar4 = *(QPixmap **)(*(long *)(param_1 + 0x18) + 0x88);
  local_328 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png",0x39);
  QPixmap::QPixmap(local_320,&local_328,0,0);
  local_350 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png",0x39);
  QPixmap::QPixmap(local_348,&local_350,0,0);
  local_378 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png",0x39);
  QPixmap::QPixmap(local_370,&local_378,0,0);
  QPixmap::QPixmap(local_398);
  QPixmap::QPixmap(local_3b8);
  CImageButton::setPixmaps(pQVar4,local_320,local_348,local_370,local_398);
  QPixmap::~QPixmap(local_3b8);
  QPixmap::~QPixmap(local_398);
  QPixmap::~QPixmap(local_370);
  if (*(int *)local_378 != -1) {
    if (*(int *)local_378 != 0) {
      LOCK();
      *(int *)local_378 = *(int *)local_378 + -1;
      local_31 = *(int *)local_378 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005539e9;
    }
    QArrayData::deallocate(local_378,2,8);
  }
LAB_1005539e9:
  QPixmap::~QPixmap(local_348);
  if (*(int *)local_350 != -1) {
    if (*(int *)local_350 != 0) {
      LOCK();
      *(int *)local_350 = *(int *)local_350 + -1;
      local_31 = *(int *)local_350 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100553a2b;
    }
    QArrayData::deallocate(local_350,2,8);
  }
LAB_100553a2b:
  QPixmap::~QPixmap(local_320);
  if (*(int *)local_328 != -1) {
    if (*(int *)local_328 != 0) {
      LOCK();
      *(int *)local_328 = *(int *)local_328 + -1;
      local_31 = *(int *)local_328 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100553a6d;
    }
    QArrayData::deallocate(local_328,2,8);
  }
LAB_100553a6d:
  pQVar4 = *(QPixmap **)(*(long *)(param_1 + 0x18) + 0x90);
  local_3e0 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png",0x39);
  QPixmap::QPixmap(local_3d8,&local_3e0,0,0);
  local_408 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png",0x39);
  QPixmap::QPixmap(local_400,&local_408,0,0);
  local_430 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png",0x39);
  QPixmap::QPixmap(local_428,&local_430,0,0);
  QPixmap::QPixmap(local_450);
  QPixmap::QPixmap(local_470);
  CImageButton::setPixmaps(pQVar4,local_3d8,local_400,local_428,local_450);
  QPixmap::~QPixmap(local_470);
  QPixmap::~QPixmap(local_450);
  QPixmap::~QPixmap(local_428);
  if (*(int *)local_430 != -1) {
    if (*(int *)local_430 != 0) {
      LOCK();
      *(int *)local_430 = *(int *)local_430 + -1;
      local_31 = *(int *)local_430 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100553ba2;
    }
    QArrayData::deallocate(local_430,2,8);
  }
LAB_100553ba2:
  QPixmap::~QPixmap(local_400);
  if (*(int *)local_408 != -1) {
    if (*(int *)local_408 != 0) {
      LOCK();
      *(int *)local_408 = *(int *)local_408 + -1;
      local_31 = *(int *)local_408 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100553be4;
    }
    QArrayData::deallocate(local_408,2,8);
  }
LAB_100553be4:
  QPixmap::~QPixmap(local_3d8);
  if (*(int *)local_3e0 != -1) {
    if (*(int *)local_3e0 != 0) {
      LOCK();
      *(int *)local_3e0 = *(int *)local_3e0 + -1;
      local_31 = *(int *)local_3e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100553c26;
    }
    QArrayData::deallocate(local_3e0,2,8);
  }
LAB_100553c26:
  CImageButton::setHorExpanding(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x90),0));
  pQVar4 = *(QPixmap **)(*(long *)(param_1 + 0x18) + 0x98);
  local_498 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_right_26x22.png",0x38);
  QPixmap::QPixmap(local_490,&local_498,0,0);
  local_4c0 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_right_26x22.png",0x38);
  QPixmap::QPixmap(local_4b8,&local_4c0,0,0);
  local_4e8 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_right_26x22.png",0x38);
  QPixmap::QPixmap(local_4e0,&local_4e8,0,0);
  QPixmap::QPixmap(local_508);
  QPixmap::QPixmap(local_528);
  CImageButton::setPixmaps(pQVar4,local_490,local_4b8,local_4e0,local_508);
  QPixmap::~QPixmap(local_528);
  QPixmap::~QPixmap(local_508);
  QPixmap::~QPixmap(local_4e0);
  if (*(int *)local_4e8 != -1) {
    if (*(int *)local_4e8 != 0) {
      LOCK();
      *(int *)local_4e8 = *(int *)local_4e8 + -1;
      local_31 = *(int *)local_4e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100553d70;
    }
    QArrayData::deallocate(local_4e8,2,8);
  }
LAB_100553d70:
  QPixmap::~QPixmap(local_4b8);
  if (*(int *)local_4c0 != -1) {
    if (*(int *)local_4c0 != 0) {
      LOCK();
      *(int *)local_4c0 = *(int *)local_4c0 + -1;
      local_31 = *(int *)local_4c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100553db2;
    }
    QArrayData::deallocate(local_4c0,2,8);
  }
LAB_100553db2:
  QPixmap::~QPixmap(local_490);
  if (*(int *)local_498 != -1) {
    if (*(int *)local_498 != 0) {
      LOCK();
      *(int *)local_498 = *(int *)local_498 + -1;
      local_31 = *(int *)local_498 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100553df4;
    }
    QArrayData::deallocate(local_498,2,8);
  }
LAB_100553df4:
  QWidget::setFocusPolicy(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x70));
  QWidget::setFocusPolicy(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78));
  QWidget::setFocusPolicy(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x80));
  QWidget::setFocusPolicy(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x88));
  QWidget::setFocusPolicy(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x90));
  QWidget::setFocusPolicy(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x98));
  FontUtils::setSmallFont(*(QWidget **)(*(long *)(param_1 + 0x18) + 0x58),false);
  lVar15 = QWidget::layout();
  if (lVar15 != 0) {
    iVar8 = QWidget::layout();
    QLayout::setSpacing(iVar8);
  }
  uVar12 = ItemViewWrapper::wrapQtView(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x58),uVar12,0,0)
  ;
  QWidget::layout();
  uVar13 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12d0);
  QBoxLayout::insertWidget(uVar13,2,uVar12,0,0);
  QWidget::hide();
  FUN_100554d00(param_1);
  return;
}

