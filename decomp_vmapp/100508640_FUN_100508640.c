
bool FUN_100508640(undefined8 *param_1,QImage *param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  bool bVar12;
  undefined4 local_1e4;
  undefined8 local_1e0;
  long local_1d8;
  long local_1d0;
  long local_1c8;
  undefined8 local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  QImage local_1a0 [32];
  QPainter local_180 [8];
  QImage local_178 [32];
  QImage local_158 [32];
  QImage local_138 [32];
  undefined8 local_118;
  long lStack_110;
  long *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  int local_d0;
  int local_cc;
  double local_c8;
  double local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar10;
  cVar2 = QImage::isNull();
  if (cVar2 != '\0') {
    bVar12 = false;
    goto LAB_100508c70;
  }
  iVar3 = QImage::width();
  if (iVar3 == 0x10) {
    iVar4 = QImage::height();
    iVar3 = 0;
    if (iVar4 != 0x10) goto LAB_10050869c;
  }
  else {
LAB_10050869c:
    QImage::width();
    iVar3 = QImage::width();
    if (iVar3 == 0x20) {
      iVar4 = QImage::height();
      iVar3 = 0;
      if (iVar4 == 0x20) goto LAB_1005087f5;
    }
    iVar3 = QImage::width();
    iVar4 = 0x10;
    if (0x20 < iVar3) {
      iVar4 = 0x20;
    }
    iVar3 = QImage::width();
    if (iVar3 == 0x30) {
      iVar5 = QImage::height();
      iVar3 = 0;
      if (iVar5 == 0x30) goto LAB_1005087f5;
    }
    iVar3 = QImage::width();
    if (0x30 < iVar3) {
      iVar4 = 0x30;
    }
    iVar3 = QImage::width();
    if (iVar3 == 0x80) {
      iVar5 = QImage::height();
      iVar3 = 0;
      if (iVar5 == 0x80) goto LAB_1005087f5;
    }
    iVar3 = QImage::width();
    if (0x80 < iVar3) {
      iVar4 = 0x80;
    }
    iVar3 = QImage::width();
    if (iVar3 == 0x100) {
      iVar5 = QImage::height();
      iVar3 = 0;
      if (iVar5 == 0x100) goto LAB_1005087f5;
    }
    iVar3 = QImage::width();
    if (0x100 < iVar3) {
      iVar4 = 0x100;
    }
    iVar3 = QImage::width();
    if (iVar3 == 0x200) {
      iVar5 = QImage::height();
      iVar3 = 0;
      if (iVar5 == 0x200) goto LAB_1005087f5;
    }
    iVar3 = QImage::width();
    if (0x200 < iVar3) {
      iVar4 = 0x200;
    }
    iVar3 = QImage::width();
    if (iVar3 == 0x400) {
      iVar5 = QImage::height();
      iVar3 = 0;
      if (iVar5 == 0x400) goto LAB_1005087f5;
    }
    iVar5 = QImage::width();
    iVar3 = iVar4;
    if (0x400 < iVar5) {
      iVar3 = 0x400;
    }
  }
LAB_1005087f5:
  puVar1 = PTR__objc_msgSend_100ba25e8;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = (long *)0x0;
  uStack_100 = 0;
  local_118 = 0;
  lStack_110 = 0;
  uVar6 = (*(code *)PTR__objc_msgSend_100ba25e8)(*param_1,PTR_s_representations_100bed878);
  uVar7 = (*(code *)puVar1)(uVar6,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_118,
                            local_b8,0x10);
  if (uVar7 != 0) {
    lVar10 = *local_108;
    do {
      uVar11 = 0;
      do {
        if (*local_108 != lVar10) {
          _objc_enumerationMutation(uVar6);
        }
        lVar8 = (*(code *)PTR__objc_msgSend_100ba25e8)
                          (*(undefined8 *)(lStack_110 + uVar11 * 8),PTR_s_pixelsWide_100bed880);
        iVar4 = iVar3;
        if (iVar3 == 0) {
          iVar4 = QImage::width();
        }
        if (lVar8 == iVar4) {
          bVar12 = false;
          goto LAB_100508c66;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar7);
      uVar7 = (*(code *)PTR__objc_msgSend_100ba25e8)
                        (uVar6,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_118,local_b8,
                         0x10);
    } while (uVar7 != 0);
  }
  QImage::QImage(local_138,param_2);
  if (iVar3 != 0) {
    QImage::QImage(local_158,iVar3,iVar3,6);
    QImage::operator=(local_138,local_158);
    QImage::~QImage(local_158);
    local_d0 = iVar3;
    local_cc = iVar3;
    QImage::scaled(local_178,param_2,&local_d0,1,1);
    QImage::fill((uint)local_138);
    QPainter::QPainter(local_180);
    QPainter::begin((QPaintDevice *)local_180);
    QPainter::setCompositionMode(local_180,3);
    iVar4 = QImage::width();
    iVar5 = QImage::height();
    local_c8 = (double)((iVar3 - iVar4) / 2);
    local_c0 = (double)((iVar3 - iVar5) / 2);
    QPainter::drawImage((QPointF *)local_180,(QImage *)&local_c8);
    QPainter::end();
    QPainter::~QPainter(local_180);
    QImage::~QImage(local_178);
  }
  iVar3 = QImage::format();
  if (iVar3 != 6) {
    QImage::convertToFormat(local_1a0,local_138,6,0);
    QImage::operator=(local_138,local_1a0);
    QImage::~QImage(local_1a0);
  }
  uVar9 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSBitmapImageRep_100bedc08,PTR_s_alloc_100bed228);
  iVar3 = QImage::width();
  iVar4 = QImage::height();
  uVar6 = *(undefined8 *)PTR__NSDeviceRGBColorSpace_100ba2070;
  iVar5 = QImage::bytesPerLine();
  lVar10 = (*(code *)PTR__objc_msgSend_100ba25e8)
                     (uVar9,PTR_s_initWithBitmapDataPlanes_pixelsW_100bed888,0,(long)iVar3,
                      (long)iVar4,8,4,1,0,uVar6,(long)iVar5,0x20);
  bVar12 = lVar10 != 0;
  if (bVar12) {
    local_1c0 = QImage::constBits();
    iVar3 = QImage::height();
    local_1b8 = (long)iVar3;
    iVar3 = QImage::width();
    local_1b0 = (long)iVar3;
    iVar3 = QImage::bytesPerLine();
    local_1a8 = (long)iVar3;
    local_1e0 = (*(code *)PTR__objc_msgSend_100ba25e8)(lVar10,PTR_s_bitmapData_100bed890);
    iVar3 = QImage::height();
    local_1d8 = (long)iVar3;
    iVar3 = QImage::width();
    local_1d0 = (long)iVar3;
    iVar3 = QImage::bytesPerLine();
    local_1c8 = (long)iVar3;
    local_1e4 = 0x3000102;
    _vImagePermuteChannels_ARGB8888(&local_1c0,&local_1e0,&local_1e4,0);
    (*(code *)PTR__objc_msgSend_100ba25e8)(*param_1,PTR_s_addRepresentation__100bed898,lVar10);
    (*(code *)PTR__objc_msgSend_100ba25e8)(lVar10,PTR_s_release_100bed2a0);
  }
  QImage::~QImage(local_138);
LAB_100508c66:
  lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_100508c70:
  if (lVar10 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar12;
}

