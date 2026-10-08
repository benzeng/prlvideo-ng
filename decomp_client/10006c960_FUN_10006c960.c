
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006c960(long param_1,int param_2,char param_3)

{
  code *pcVar1;
  long *plVar2;
  CGRect CVar3;
  CGRect CVar4;
  undefined1 auVar5 [12];
  undefined *puVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ID self;
  long lVar18;
  undefined8 uVar19;
  ID IVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long *plVar24;
  _func_void_Node_ptr *p_Var25;
  int iVar26;
  int iVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  int iVar32;
  int iVar33;
  ulong uVar34;
  uint uVar35;
  int iVar36;
  bool bVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  CGSize CVar41;
  CGPoint CVar42;
  undefined1 auVar43 [16];
  _func_void_Node_ptr **local_5e0;
  _func_void_Node_ptr **local_5c0;
  undefined8 local_540;
  undefined8 local_538;
  int local_520;
  int local_51c;
  int local_518;
  int local_514;
  undefined8 local_510;
  undefined8 local_508;
  QPixmap local_4f0 [32];
  QSize local_4d0;
  QPixmap local_4c8 [32];
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  double dStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  double dStack_470;
  undefined1 local_468 [16];
  QArrayData *local_450;
  Data *local_448;
  Data *local_440;
  Data *local_438;
  uint local_430;
  QBrush local_428 [8];
  QPainterPath local_420 [8];
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  double dStack_400;
  undefined1 local_3f8 [16];
  undefined8 local_3e8;
  uint local_3dc;
  undefined8 local_3d8;
  _func_void_Node_ptr *local_3d0;
  _func_void_Node_ptr *local_3c8;
  uint local_3bc;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  double dStack_3a0;
  undefined1 local_398 [16];
  undefined8 local_388;
  long lStack_380;
  long *local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  QColor local_348 [16];
  QPen local_338 [8];
  QBrush local_330 [8];
  QPainter local_328 [8];
  QColor local_320 [16];
  QSize local_310;
  QPixmap local_308 [32];
  undefined8 local_2e8;
  undefined8 local_2e0;
  double local_2d8;
  double dStack_2d0;
  int local_2c8;
  int local_2c4;
  int local_2c0;
  int local_2bc;
  undefined8 local_2b8;
  undefined8 local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  double dStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  double dStack_230;
  undefined local_228 [32];
  Data *local_208;
  Data *local_200;
  Data *local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double local_1d0;
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [8];
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  undefined1 local_180 [7];
  undefined1 local_179;
  undefined8 local_178;
  long lStack_170;
  long *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  long local_38;
  
  lVar18 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar18;
  dVar38 = (double)MacUtils::getWindowScaleFactor(*(QWidget **)(param_1 + 0x18));
  self = MacUtils::getWindowRef(*(QWidget **)(param_1 + 0x18));
  if (self == 0) goto LAB_10006e16e;
  local_208 = *(Data **)(param_1 + 0x20);
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 == 0) {
      QListData::detach((int)&local_208);
      lVar29 = (long)*(int *)(local_208 + 8);
      lVar18 = *(long *)(param_1 + 0x20);
      if (((Data *)(lVar18 + (long)*(int *)(lVar18 + 8) * 8) != local_208 + lVar29 * 8) &&
         (lVar30 = *(int *)(local_208 + 0xc) - lVar29,
         lVar30 != 0 && lVar29 <= *(int *)(local_208 + 0xc))) {
        _memcpy(local_208 + lVar29 * 8 + 0x10,
                (void *)(lVar18 + 0x10 + (long)*(int *)(lVar18 + 8) * 8),lVar30 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + 1;
      local_179 = *(int *)local_208 != 0;
      UNLOCK();
    }
  }
  local_200 = local_208 + (long)*(int *)(local_208 + 8) * 8 + 0x10;
  local_1f8 = local_208 + (long)*(int *)(local_208 + 0xc) * 8 + 0x10;
  if (*(int *)(local_208 + 8) != *(int *)(local_208 + 0xc)) {
    do {
      local_1f0 = 1;
      lVar18 = QMetaObject::cast((QObject *)&PTR_PTR_1022184b0);
      if (lVar18 != 0) {
        FUN_1004dd2d0(lVar18,1);
      }
      local_200 = local_200 + 8;
    } while (local_200 != local_1f8);
  }
  local_1f0 = 1;
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_179 = *(int *)local_208 != 0;
      UNLOCK();
      if ((bool)local_179) goto LAB_10006cadb;
    }
    QListData::dispose(local_208);
  }
LAB_10006cadb:
  puVar6 = PTR__OBJC_CLASS___NSWindow_10226aa00;
  _objc_msgSend_stret(local_228,self,PTR_s_frame_102268b50);
  uVar19 = (*(code *)PTR__objc_msgSend_1021e1c68)(self,PTR_s_styleMask_102269d38);
  if (puVar6 == (undefined *)0x0) {
    local_238 = 0;
    dStack_230 = 0.0;
    local_248 = 0;
    uStack_240 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_248,(ID)puVar6,
                        PTR_s_contentRectForFrameRect_styleMas_102269d40,uVar19);
  }
  dVar8 = dStack_230;
  IVar20 = (*(code *)PTR__objc_msgSend_1021e1c68)(self,PTR_s_contentView_102268b80);
  if (IVar20 == 0) {
    local_258 = 0;
    dStack_250 = 0.0;
    local_268 = 0;
    uStack_260 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_268,IVar20,PTR_s_frame_102268b50);
  }
  dVar7 = dStack_250;
  pcVar1 = DAT_102311b38;
  iVar10 = (int)dVar38;
  uVar11 = (*DAT_1023119d8)();
  uVar12 = MacUtils::getWindowNumber(*(QWidget **)(param_1 + 0x18));
  iVar13 = (*pcVar1)(uVar11,uVar12,&local_298);
  if (iVar13 == 0) {
    local_2c8 = (int)local_298;
    local_2c4 = (int)local_290;
    local_2c0 = local_2c8 + -1 + (int)local_288;
    local_2bc = local_2c4 + -1 + (int)local_280;
    MacUtils::NSRectFromQRect((QRect *)&local_2b8,SUB81(&local_2c8,0));
    local_270 = local_2b0;
    local_278 = local_2b8;
    local_2d8 = local_2a8;
    dVar38 = dStack_2a0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_2e8,self,PTR_s_frame_102268b50);
    local_270 = local_2e0;
    local_278 = local_2e8;
    dVar38 = dStack_2d0;
  }
  CVar41.field1_0x8 = dVar38;
  CVar41.field0_0x0 = local_2d8;
  uVar19 = MacUtils::QSizeFromNSSize(CVar41);
  dVar40 = (double)iVar10;
  dVar39 = (double)(int)uVar19 * dVar40;
  if (0.0 <= dVar39) {
    iVar14 = (int)(dVar39 + DAT_100e110f0);
  }
  else {
    iVar14 = (int)((dVar39 - (double)(int)(DAT_100e110e0 + dVar39)) + DAT_100e110f0) +
             (int)(DAT_100e110e0 + dVar39);
  }
  dVar39 = (double)(int)((ulong)uVar19 >> 0x20) * dVar40;
  if (0.0 <= dVar39) {
    iVar26 = (int)(dVar39 + DAT_100e110f0);
  }
  else {
    iVar26 = (int)((dVar39 - (double)(int)(DAT_100e110e0 + dVar39)) + DAT_100e110f0) +
             (int)(DAT_100e110e0 + dVar39);
  }
  local_310.field1_0x4 = iVar26;
  local_310.field0_0x0 = iVar14;
  QPixmap::QPixmap(local_308,&local_310);
  QColor::QColor(local_320,0x13);
  QPixmap::fill((QColor *)local_308);
  QPainter::QPainter(local_328,(QPaintDevice *)local_308);
  QPainter::scale(dVar40,dVar40);
  QPainter::setRenderHint(local_328,1,1);
  QBrush::QBrush(local_330,2,1);
  QPainter::setBrush((QBrush *)local_328);
  QBrush::~QBrush(local_330);
  QColor::QColor(local_348,2);
  QPen::QPen(local_338,local_348);
  QPainter::setPen((QPen *)local_328);
  QPen::~QPen(local_338);
  QPainter::setCompositionMode(local_328,3);
  uVar19 = QPixmap::size();
  dVar39 = (double)(int)uVar19 / dVar40;
  if (0.0 <= dVar39) {
    iVar13 = (int)(dVar39 + DAT_100e110f0);
  }
  else {
    iVar13 = (int)((dVar39 - (double)(int)(DAT_100e110e0 + dVar39)) + DAT_100e110f0) +
             (int)(DAT_100e110e0 + dVar39);
  }
  dVar40 = (double)(int)((ulong)uVar19 >> 0x20) / dVar40;
  if (0.0 <= dVar40) {
    iVar27 = (int)(dVar40 + DAT_100e110f0);
  }
  else {
    iVar27 = (int)((dVar40 - (double)(int)(DAT_100e110e0 + dVar40)) + DAT_100e110f0) +
             (int)(DAT_100e110e0 + dVar40);
  }
  local_1d8 = (double)iVar13;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d0 = (double)iVar27;
  QPainter::drawRoundedRect(DAT_100e11130,DAT_100e11130,local_328,&local_1e8,0);
  local_358 = 0;
  uStack_350 = 0;
  local_368 = 0;
  uStack_360 = 0;
  local_378 = (long *)0x0;
  uStack_370 = 0;
  local_388 = 0;
  lStack_380 = 0;
  uVar19 = (*(code *)PTR__objc_msgSend_1021e1c68)(self,PTR_s_toolbar_102269000);
  uVar19 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar19,PTR_s_items_102269008);
  uVar21 = (*(code *)PTR__objc_msgSend_1021e1c68)
                     (uVar19,PTR_s_countByEnumeratingWithState_obje_102269048,&local_388,local_138,
                      0x10);
  if (uVar21 != 0) {
    lVar18 = *local_378;
    do {
      uVar34 = 0;
      do {
        if (*local_378 != lVar18) {
          _objc_enumerationMutation(uVar19);
        }
        lVar29 = *(long *)(lStack_380 + uVar34 * 8);
        lVar30 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar29,PTR_s_view_102269138);
        if (lVar30 != 0) {
          uVar22 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar29,PTR_s_view_102269138);
          uVar23 = _NSClassFromString(&cf_CToolbarSearchField);
          cVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)
                            (uVar22,PTR_s_isKindOfClass__102269108,uVar23);
          if (cVar9 != '\0') {
            if (lVar29 != 0) {
              IVar20 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar29,PTR_s_view_102269138);
              if (IVar20 == 0) {
                local_3a8 = 0;
                dStack_3a0 = 0.0;
                local_3b8 = 0;
                uStack_3b0 = 0;
              }
              else {
                _objc_msgSend_stret((undefined *)&local_3b8,IVar20,PTR_s_frame_102268b50);
              }
              CVar3.field0_0x0.field1_0x8 = (double)uStack_3b0;
              CVar3.field0_0x0.field0_0x0 = (double)local_3b8;
              CVar3.field1_0x10.field0_0x0 = (double)local_3a8;
              CVar3.field1_0x10.field1_0x8 = dStack_3a0;
              auVar43 = MacUtils::QRectFromNSRect(CVar3,false);
              local_398 = auVar43;
              uVar19 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar29,PTR_s_view_102269138);
              CVar42 = (CGPoint)(*(code *)PTR__objc_msgSend_1021e1c68)
                                          (0,0,uVar19,PTR_s_convertPoint_toView__102269500,0);
              uVar19 = MacUtils::QPointFromNSPoint(CVar42,false);
              local_398._0_4_ = (int)uVar19 + -1;
              local_398._4_4_ =
                   (undefined4)((dVar38 - (double)(int)((ulong)uVar19 >> 0x20)) + DAT_100e110e0);
              iVar13 = local_398._4_4_ - auVar43._4_4_;
              local_398._12_4_ = iVar13 + 1 + auVar43._12_4_;
              local_398._8_4_ = (local_398._0_4_ - auVar43._0_4_) + 2 + auVar43._8_4_;
              iVar13 = (iVar13 + 2 + auVar43._12_4_) - local_398._4_4_;
              FUN_10006e390(local_328,local_398,0,
                            (int)(((uint)(iVar13 >> 0x1f) >> 0x1e) + iVar13) >> 2,iVar10);
            }
            goto LAB_10006d25e;
          }
        }
        uVar34 = uVar34 + 1;
      } while (uVar34 < uVar21);
      uVar21 = (*(code *)PTR__objc_msgSend_1021e1c68)
                         (uVar19,PTR_s_countByEnumeratingWithState_obje_102269048,&local_388,
                          local_138,0x10);
    } while (uVar21 != 0);
  }
LAB_10006d25e:
  iVar13 = FUN_100524aa0(*(undefined8 *)(param_1 + 0x28));
  if ((-1 < param_2) && (param_2 < iVar13)) {
    plVar24 = (long *)FUN_1003a3910(*(undefined8 *)(param_1 + 0x18));
    lVar18 = FUN_100524a60(*(undefined8 *)(param_1 + 0x28),param_2);
    uVar15 = FUN_1003b0e30(*(undefined4 *)(lVar18 + 0x10));
    local_3c8 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
    local_3d0 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
    local_3bc = uVar15;
    if (param_3 == '\0') {
      local_3d8 = *(undefined8 *)(lVar18 + 0x10);
      FUN_10006f1b0(&local_3c8,&local_3d8,local_1c8);
      FUN_10006f370(&local_3d0,&local_3bc,local_1c0);
    }
    local_5c0 = &local_3c8;
    local_5e0 = &local_3d0;
    iVar13 = 0;
    while( true ) {
      iVar27 = FUN_100524aa0(*(undefined8 *)(param_1 + 0x28));
      if (iVar27 <= iVar13) break;
      lVar29 = FUN_100524a60(*(undefined8 *)(param_1 + 0x28),iVar13);
      uVar16 = FUN_1003b0e30(*(undefined4 *)(lVar29 + 0x10));
      local_3dc = uVar16;
      if (iVar13 == param_2) {
        uVar17 = *(uint *)(lVar29 + 0x10);
LAB_10006d454:
        uVar35 = *(uint *)(lVar29 + 0x14);
        if (*(uint *)(local_3c8 + 0x20) != 0) {
          uVar28 = ((*(uint *)(local_3c8 + 0x24) ^ uVar17) << 0x10 |
                   (*(uint *)(local_3c8 + 0x24) ^ uVar17) >> 0x10) ^ uVar35;
          for (p_Var25 = *(_func_void_Node_ptr **)
                          (*(long *)(local_3c8 + 8) +
                          ((ulong)uVar28 % (ulong)*(uint *)(local_3c8 + 0x20)) * 8);
              p_Var25 != local_3c8; p_Var25 = *(_func_void_Node_ptr **)p_Var25) {
            if (((*(uint *)(p_Var25 + 8) == uVar28) && (uVar17 == *(uint *)(p_Var25 + 0xc))) &&
               (uVar35 == *(uint *)(p_Var25 + 0x10))) {
              if (p_Var25 != local_3c8) goto LAB_10006d3b0;
              break;
            }
          }
        }
        local_3e8 = CONCAT44(uVar35,uVar17);
        FUN_10006f1b0(local_5c0,&local_3e8,local_1b8);
        lVar30 = QMetaObject::cast((QObject *)&PTR_PTR_1022184b0);
        if (((plVar24 != (long *)0x0) && (lVar30 != 0)) &&
           (uVar17 = (**(code **)(*plVar24 + 0x1a8))(), uVar16 == uVar17)) {
          local_3f8 = FUN_1004dd170(lVar30,*(undefined4 *)(lVar29 + 0x10),
                                    *(undefined4 *)(lVar29 + 0x14));
          iVar27 = local_3f8._0_4_;
          iVar36 = local_3f8._12_4_;
          iVar32 = local_3f8._4_4_;
          if ((local_3f8._8_4_ == iVar27 + -1) && (iVar36 == iVar32 + -1)) break;
          IVar20 = (*(code *)PTR__objc_msgSend_1021e1c68)(self,PTR_s_contentView_102268b80);
          auVar5 = local_3f8._0_12_;
          if (IVar20 == 0) {
            local_408 = 0;
            dStack_400 = 0.0;
            local_418 = 0;
            uStack_410 = 0;
          }
          else {
            _objc_msgSend_stret((undefined *)&local_418,IVar20,PTR_s_frame_102268b50);
            auVar5 = local_3f8._0_12_;
          }
          iVar33 = (int)(((double)iVar32 + dVar38) - dStack_400);
          iVar36 = (iVar33 - iVar32) + iVar36;
          local_3f8._8_4_ = auVar5._8_4_;
          local_3f8._8_8_ = CONCAT44(iVar36,local_3f8._8_4_);
          local_3f8._0_4_ = auVar5._0_4_;
          local_3f8._0_8_ = CONCAT44(iVar33,local_3f8._0_4_);
          bVar37 = iVar13 != param_2;
          QPainterPath::QPainterPath(local_420);
          uVar35 = bVar37 | 2;
          iVar32 = (iVar36 + iVar33) / 2;
          local_1b0 = (double)(int)(iVar27 - uVar35);
          local_1a8 = (double)(iVar32 + 1);
          QPainterPath::moveTo((QPointF *)local_420);
          uVar17 = (uint)(iVar13 == param_2);
          dVar39 = (double)(int)((((uint)bVar37 * 2 + -8) - uVar35) + iVar27);
          local_198 = (double)(int)((1 - (uVar17 + 3)) + iVar32);
          local_1a0 = dVar39;
          QPainterPath::lineTo((QPointF *)local_420);
          local_188 = (double)(int)(uVar17 + 4 + iVar32);
          local_190 = dVar39;
          QPainterPath::lineTo((QPointF *)local_420);
          QBrush::QBrush(local_428,(iVar13 != param_2) * '\x02' + '\x03',1);
          QPainter::fillPath((QPainterPath *)local_328,(QBrush *)local_420);
          QBrush::~QBrush(local_428);
          FUN_10006e390(local_328,local_3f8,(iVar13 != param_2) * '\x02',((iVar36 + 1) - iVar33) / 2
                        ,iVar10);
          QPainterPath::~QPainterPath(local_420);
        }
        if ((iVar13 == param_2) || (uVar15 != uVar16)) {
          if (*(uint *)(local_3d0 + 0x20) != 0) {
            for (p_Var25 = *(_func_void_Node_ptr **)
                            (*(long *)(local_3d0 + 8) +
                            ((ulong)(*(uint *)(local_3d0 + 0x24) ^ uVar16) %
                            (ulong)*(uint *)(local_3d0 + 0x20)) * 8); p_Var25 != local_3d0;
                p_Var25 = *(_func_void_Node_ptr **)p_Var25) {
              if ((*(uint *)(p_Var25 + 8) == (*(uint *)(local_3d0 + 0x24) ^ uVar16)) &&
                 (uVar16 == *(uint *)(p_Var25 + 0xc))) {
                if (p_Var25 != local_3d0) goto LAB_10006d3b0;
                break;
              }
            }
          }
          FUN_10006f370(local_5e0,&local_3dc,local_180);
          local_448 = *(Data **)(param_1 + 0x20);
          if (*(int *)local_448 != -1) {
            if (*(int *)local_448 == 0) {
              QListData::detach((int)&local_448);
              lVar30 = (long)*(int *)(local_448 + 8);
              lVar29 = *(long *)(param_1 + 0x20);
              if (((Data *)(lVar29 + (long)*(int *)(lVar29 + 8) * 8) != local_448 + lVar30 * 8) &&
                 (lVar31 = *(int *)(local_448 + 0xc) - lVar30,
                 lVar31 != 0 && lVar30 <= *(int *)(local_448 + 0xc))) {
                _memcpy(local_448 + lVar30 * 8 + 0x10,
                        (void *)(lVar29 + 0x10 + (long)*(int *)(lVar29 + 8) * 8),lVar31 * 8);
              }
            }
            else {
              LOCK();
              *(int *)local_448 = *(int *)local_448 + 1;
              local_179 = *(int *)local_448 != 0;
              UNLOCK();
            }
          }
          local_440 = local_448 + (long)*(int *)(local_448 + 8) * 8 + 0x10;
          local_438 = local_448 + (long)*(int *)(local_448 + 0xc) * 8 + 0x10;
          local_430 = 1;
          if (*(int *)(local_448 + 8) != *(int *)(local_448 + 0xc)) {
            do {
              if (local_430 != 0) {
                plVar2 = *(long **)local_440;
                uVar17 = (**(code **)(*plVar2 + 0x1a8))(plVar2);
                if (uVar16 == uVar17) {
                  uVar19 = (*(code *)PTR__objc_msgSend_1021e1c68)(self,PTR_s_toolbar_102269000);
                  puVar6 = PTR__OBJC_CLASS___NSString_10226a7c8;
                  (**(code **)(*plVar2 + 0x1b0))(&local_450,plVar2);
                  uVar22 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                     (puVar6,PTR_s_stringWithQString__102268d00,&local_450);
                  local_148 = 0;
                  uStack_140 = 0;
                  local_158 = 0;
                  uStack_150 = 0;
                  local_168 = (long *)0x0;
                  uStack_160 = 0;
                  local_178 = 0;
                  lStack_170 = 0;
                  uVar19 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar19,PTR_s_items_102269008);
                  uVar21 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                     (uVar19,PTR_s_countByEnumeratingWithState_obje_102269048,
                                      &local_178,local_b8,0x10);
                  lVar29 = 0;
                  if (uVar21 != 0) {
                    lVar30 = *local_168;
                    do {
                      uVar34 = 0;
                      do {
                        if (*local_168 != lVar30) {
                          _objc_enumerationMutation(uVar19);
                        }
                        lVar29 = *(long *)(lStack_170 + uVar34 * 8);
                        uVar23 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                           (lVar29,PTR_s_label_102269d70);
                        cVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                          (uVar23,PTR_s_isEqualToString__102268f68,uVar22);
                        if (cVar9 != '\0') goto LAB_10006dab0;
                        uVar34 = uVar34 + 1;
                      } while (uVar34 < uVar21);
                      uVar21 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                         (uVar19,PTR_s_countByEnumeratingWithState_obje_102269048,
                                          &local_178,local_b8,0x10);
                      lVar29 = 0;
                    } while (uVar21 != 0);
                  }
LAB_10006dab0:
                  if (*(int *)local_450 != -1) {
                    if (*(int *)local_450 != 0) {
                      LOCK();
                      *(int *)local_450 = *(int *)local_450 + -1;
                      local_179 = *(int *)local_450 != 0;
                      UNLOCK();
                      if ((bool)local_179) goto LAB_10006daec;
                    }
                    QArrayData::deallocate(local_450,2,8);
                  }
LAB_10006daec:
                  if (lVar29 != 0) {
                    IVar20 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                       (lVar29,PTR_s__itemViewer_102269d48);
                    if (IVar20 == 0) {
                      local_478 = 0;
                      dStack_470 = 0.0;
                      local_488 = 0;
                      uStack_480 = 0;
                    }
                    else {
                      _objc_msgSend_stret((undefined *)&local_488,IVar20,PTR_s_frame_102268b50);
                    }
                    CVar4.field0_0x0.field1_0x8 = (double)uStack_480;
                    CVar4.field0_0x0.field0_0x0 = (double)local_488;
                    CVar4.field1_0x10.field0_0x0 = (double)local_478;
                    CVar4.field1_0x10.field1_0x8 = dStack_470;
                    auVar43 = MacUtils::QRectFromNSRect(CVar4,false);
                    local_468 = auVar43;
                    IVar20 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                       (self,PTR_s_contentView_102268b80);
                    if (IVar20 == 0) {
                      local_498 = 0;
                      dStack_490 = 0.0;
                      local_4a8 = 0;
                      uStack_4a0 = 0;
                    }
                    else {
                      _objc_msgSend_stret((undefined *)&local_4a8,IVar20,PTR_s_frame_102268b50);
                    }
                    iVar32 = (auVar43._8_4_ + auVar43._0_4_) / 2;
                    iVar27 = ((auVar43._12_4_ - auVar43._4_4_) +
                             (int)((dVar38 - dStack_490) - (double)(int)(dVar8 - dVar7)) * 2) / 2;
                    local_468._4_4_ = iVar27 + _UNK_100e128e4;
                    local_468._0_4_ = iVar32 + _DAT_100e128e0;
                    local_468._12_4_ = iVar27 + _UNK_100e128ec;
                    local_468._8_4_ = iVar32 + _UNK_100e128e8;
                    FUN_10006e390(local_328,local_468,uVar16 != uVar15,0x19,iVar10);
                  }
                }
                else {
                  local_430 = 0;
                }
              }
              local_440 = local_440 + 8;
              uVar17 = local_430 ^ 1;
              bVar37 = local_430 != 1;
              local_430 = uVar17;
            } while ((bVar37) && (local_440 != local_438));
          }
          if (*(int *)local_448 != -1) {
            if (*(int *)local_448 != 0) {
              LOCK();
              *(int *)local_448 = *(int *)local_448 + -1;
              local_179 = *(int *)local_448 != 0;
              UNLOCK();
              if ((bool)local_179) goto LAB_10006d3b0;
            }
            QListData::dispose(local_448);
          }
        }
      }
      else {
        uVar17 = *(uint *)(lVar29 + 0x10);
        if ((*(uint *)(lVar18 + 0x10) != *(uint *)(lVar29 + 0x10)) ||
           (uVar17 = *(uint *)(lVar18 + 0x10), *(int *)(lVar18 + 0x14) != *(int *)(lVar29 + 0x14)))
        goto LAB_10006d454;
      }
LAB_10006d3b0:
      iVar13 = iVar13 + 1;
    }
    if (*(int *)(local_3d0 + 0x10) != -1) {
      if (*(int *)(local_3d0 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_3d0 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_179 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_179) goto LAB_10006dd30;
      }
      QHashData::free_helper(local_3d0);
    }
LAB_10006dd30:
    if (*(int *)(local_3c8 + 0x10) != -1) {
      if (*(int *)(local_3c8 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_3c8 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_179 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_179) goto LAB_10006dd64;
      }
      QHashData::free_helper(local_3c8);
    }
  }
LAB_10006dd64:
  QPainter::end();
  if (iVar10 == 2) {
    uVar19 = QPixmap::size();
    dVar38 = (double)(int)uVar19 * DAT_100e110f0;
    if (0.0 <= dVar38) {
      iVar14 = (int)(dVar38 + DAT_100e110f0);
    }
    else {
      iVar14 = (int)((dVar38 - (double)(int)(DAT_100e110e0 + dVar38)) + DAT_100e110f0) +
               (int)(DAT_100e110e0 + dVar38);
    }
    dVar38 = (double)(int)((ulong)uVar19 >> 0x20) * DAT_100e110f0;
    if (0.0 <= dVar38) {
      iVar26 = (int)(dVar38 + DAT_100e110f0);
    }
    else {
      iVar26 = (int)((dVar38 - (double)(int)(DAT_100e110e0 + dVar38)) + DAT_100e110f0) +
               (int)(DAT_100e110e0 + dVar38);
    }
    local_4d0.field1_0x4 = iVar26;
    local_4d0.field0_0x0 = iVar14;
    QPixmap::QPixmap(local_4c8,&local_4d0);
    QPixmap::setHiDpiPixmap(local_4c8);
    QPixmap::operator=(local_308,local_4c8);
    QPixmap::~QPixmap(local_4c8);
  }
  puVar6 = PTR__OBJC_CLASS___NSImage_10226a7c0;
  QPixmap::QPixmap(local_4f0,local_308);
  uVar22 = (*(code *)PTR__objc_msgSend_1021e1c68)
                     (puVar6,PTR_s_imageWithQPixmap__1022691f8,local_4f0);
  QPixmap::~QPixmap(local_4f0);
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  uVar22 = (*(code *)PTR__objc_msgSend_1021e1c68)
                     (PTR__OBJC_CLASS___NSColor_10226a890,PTR_s_colorWithPatternImage__102269d50,
                      uVar22);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar19,PTR_s_setBackgroundColor__102268be8,uVar22);
  pcVar1 = DAT_102311b38;
  uVar11 = (*DAT_1023119d8)();
  uVar12 = MacUtils::getWindowNumber(*(QWidget **)(param_1 + 0x18));
  iVar10 = (*pcVar1)(uVar11,uVar12,&local_298);
  if (iVar10 == 0) {
    local_520 = (int)local_298;
    local_51c = (int)local_290;
    local_518 = local_520 + -1 + (int)local_288;
    local_514 = local_51c + -1 + (int)local_280;
    MacUtils::NSRectFromQRect((QRect *)&local_510,SUB81(&local_520,0));
    local_270 = local_508;
    local_278 = local_510;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_540,self,PTR_s_frame_102268b50);
    local_270 = local_538;
    local_278 = local_540;
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_setFrame_display__102268c00,1);
  lVar18 = (*(code *)PTR__objc_msgSend_1021e1c68)
                     (*(undefined8 *)(param_1 + 0x30),PTR_s_parentWindow_102269368);
  if (lVar18 == 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (0,*(undefined8 *)(param_1 + 0x30),PTR_s_setAlphaValue__102268b78);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (self,PTR_s_addChildWindow_ordered__102268bd0,*(undefined8 *)(param_1 + 0x30),1);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (PTR__OBJC_CLASS___NSAnimationContext_10226a898,PTR_s_beginGrouping_102269d58);
    uVar19 = (*(code *)PTR__objc_msgSend_1021e1c68)
                       (PTR__OBJC_CLASS___NSAnimationContext_10226a898,
                        PTR_s_currentContext_102269d60);
    (*(code *)PTR__objc_msgSend_1021e1c68)(DAT_100e128c8,uVar19,PTR_s_setDuration__102269520);
    uVar19 = (*(code *)PTR__objc_msgSend_1021e1c68)
                       (*(undefined8 *)(param_1 + 0x30),PTR_s_animator_102269528);
    (*(code *)PTR__objc_msgSend_1021e1c68)(DAT_100e128d0,uVar19,PTR_s_setAlphaValue__102268b78);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (PTR__OBJC_CLASS___NSAnimationContext_10226a898,PTR_s_endGrouping_102269d68);
  }
  QPainter::~QPainter(local_328);
  QPixmap::~QPixmap(local_308);
  lVar18 = *(long *)PTR____stack_chk_guard_1021e1840;
LAB_10006e16e:
  if (lVar18 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

