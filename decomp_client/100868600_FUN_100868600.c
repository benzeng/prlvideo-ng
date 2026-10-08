
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100868600(char *param_1,undefined8 *param_2,QPixmap *param_3)

{
  QArrayData *pQVar1;
  long ****pppplVar2;
  long *****ppppplVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *****ppppplVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  int iVar24;
  int iVar25;
  void *pvVar26;
  double dVar27;
  int local_2f4;
  QArrayData *local_2e0;
  QPixmap local_2d8 [32];
  QPainter local_2b8 [8];
  QColor local_2b0 [16];
  QPixmap local_2a0 [32];
  CGImage local_280 [32];
  QPixmap local_260 [32];
  int local_240;
  int iStack_23c;
  int local_238;
  int iStack_234;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  long ****local_210;
  long ****local_208;
  long local_200;
  void *local_1f8;
  void *pvStack_1f0;
  undefined8 local_1e8;
  void *local_1d8;
  void *pvStack_1d0;
  void *local_1c8;
  uint local_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  undefined1 local_149;
  int local_148;
  int local_144;
  undefined1 *local_140;
  undefined1 local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  iVar7 = _CGGetActiveDisplayList(0,0,&local_1bc);
  if (iVar7 == 0) {
    uVar17 = (ulong)local_1bc;
    local_1d8 = (void *)0x0;
    pvStack_1d0 = (void *)0x0;
    local_1c8 = (void *)0x0;
    if (uVar17 == 0) {
      pvVar11 = (void *)0x0;
    }
    else {
      pvVar11 = operator_new(uVar17 * 4);
      pvVar26 = (void *)((long)pvVar11 + uVar17 * 4);
      local_1d8 = pvVar11;
      local_1c8 = pvVar26;
      ___bzero(pvVar11,uVar17 * 4);
      pvStack_1d0 = pvVar26;
    }
    pvVar26 = pvStack_1d0;
    iVar7 = _CGGetActiveDisplayList
                      ((ulong)((long)pvStack_1d0 - (long)pvVar11) >> 2,pvVar11,&local_1bc);
    if (iVar7 != 0) {
      local_1bc = 0;
      FUN_100df99c0("","Screen",0,"failed to get active display list from the system: %d");
      pvVar11 = local_1d8;
      pvVar26 = pvStack_1d0;
    }
    uVar17 = (ulong)local_1bc;
    uVar18 = (long)pvVar26 - (long)pvVar11 >> 2;
    if (uVar18 < uVar17) {
      FUN_100869520(&local_1d8);
    }
    else if ((uVar17 < uVar18) &&
            (pvVar11 = (void *)((long)pvVar11 + uVar17 * 4), pvVar26 != pvVar11)) {
      pvStack_1d0 = (void *)((~((long)pvVar26 + (-4 - (long)pvVar11)) & 0xfffffffffffffffcU) +
                            (long)pvVar26);
    }
    FUN_100869670(&local_1f8,&local_1d8);
    if (local_1d8 != (void *)0x0) {
      if (pvStack_1d0 != local_1d8) {
        pvStack_1d0 = (void *)((~((long)pvStack_1d0 + (-4 - (long)local_1d8)) & 0xfffffffffffffffcU)
                              + (long)pvStack_1d0);
      }
      operator_delete(local_1d8);
    }
  }
  else {
    local_1bc = 0;
    FUN_100df99c0("","Screen",0,"failed to get count of active display list from the system: %d",
                  iVar7);
    local_1f8 = (void *)0x0;
    pvStack_1f0 = (void *)0x0;
    local_1e8 = 0;
  }
  uVar17 = (ulong)((long)pvStack_1f0 - (long)local_1f8) >> 2;
  if ((int)uVar17 == 0) {
    QPixmap::QPixmap(local_2d8);
  }
  else {
    local_200 = 0;
    uVar18 = 1;
    iVar25 = 0;
    local_2f4 = 0;
    iVar24 = 0;
    iVar7 = 0;
    local_210 = (long ****)&local_210;
    local_208 = (long ****)&local_210;
    while( true ) {
      iVar8 = _CGDisplayIOServicePort(*(undefined4 *)((long)local_1f8 + uVar18 * 4 + -4));
      if (iVar8 != 0) {
        _CGDisplayBounds(&local_230,*(undefined4 *)((long)local_1f8 + uVar18 * 4 + -4));
        if (2 < DAT_10230ffd0) {
          FUN_100df99c0(SUB84(local_230,0),local_228,local_220,local_218,"","Screen",3,
                        "CGDisplayBounds: rect: (x,y) (%f, %f), (w,h)=(%f, %f)");
        }
        iVar8 = (int)local_230;
        if (iVar8 < iVar7) {
          iVar7 = iVar8;
        }
        iVar19 = (int)local_228;
        if (iVar19 < iVar24) {
          iVar24 = iVar19;
        }
        iVar16 = (int)local_220;
        iVar9 = iVar16 + iVar8;
        if (local_2f4 < iVar9) {
          local_2f4 = iVar9;
        }
        iVar9 = (int)local_218;
        iVar10 = iVar9 + iVar19;
        if (iVar25 < iVar10) {
          iVar25 = iVar10;
        }
        if (_DAT_100e110c8 <= local_220) {
          iVar10 = (int)(local_220 + DAT_100e110f0);
        }
        else {
          iVar10 = (int)((local_220 - (double)(int)(local_220 + DAT_100e110e0)) + DAT_100e110f0) +
                   (int)(local_220 + DAT_100e110e0);
        }
        dVar27 = local_218 + DAT_100e11050;
        if (_DAT_100e110c8 <= dVar27) {
          iVar22 = (int)(dVar27 + DAT_100e110f0);
        }
        else {
          iVar22 = (int)((dVar27 - (double)(int)(dVar27 + DAT_100e110e0)) + DAT_100e110f0) +
                   (int)(dVar27 + DAT_100e110e0);
        }
        iVar22 = iVar22 * iVar10 * 4;
        local_144 = iVar22;
        if (iVar22 < 0x101) {
          local_140 = local_138;
          iVar22 = 0x100;
        }
        else {
          local_140 = _malloc((long)iVar22);
          if (local_140 == (undefined1 *)0x0) {
            qBadAlloc();
            iVar22 = local_144;
          }
        }
        puVar4 = local_140;
        local_148 = iVar22;
        if (*(int *)((long)local_1f8 + uVar18 * 4 + -4) != 0) {
          lVar12 = _CGDisplayCreateImage();
          if (lVar12 == 0) {
            FUN_100df99c0("","Screen",0,"%s: CGDisplayCreateImage() return NULL",
                          "mac_grabDisplayRect");
          }
          else {
            lVar13 = _CGColorSpaceCreateDeviceRGB();
            if (lVar13 == 0) {
              FUN_100df99c0("","Screen",0,"%s: CGColorSpaceCreateDeviceRGB() return NULL",
                            "mac_grabDisplayRect");
            }
            else {
              dVar27 = local_220 * DAT_100e11070 * _DAT_101c98ff8;
              uVar23 = (long)dVar27;
              if (DAT_100e1e240 <= dVar27) {
                uVar23 = (long)(dVar27 - DAT_100e1e240) ^ 0x8000000000000000;
              }
              uVar21 = (long)local_220;
              if (DAT_100e1e240 <= local_220) {
                uVar21 = (long)(local_220 - DAT_100e1e240) ^ 0x8000000000000000;
              }
              uVar20 = (long)local_218;
              if (DAT_100e1e240 <= local_218) {
                uVar20 = (long)(local_218 - DAT_100e1e240) ^ 0x8000000000000000;
              }
              lVar14 = _CGBitmapContextCreate(puVar4,uVar21,uVar20,8,uVar23,lVar13,2);
              if (lVar14 == 0) {
                FUN_100df99c0("","Screen",0,"%s: CGBitmapContextCreate() return NULL",
                              "mac_grabDisplayRect");
              }
              else {
                local_1b8 = 0;
                uStack_1b0 = 0;
                local_1a0 = local_218;
                local_1a8 = local_220;
                _CGContextDrawImage(lVar14,lVar12);
                _CFRelease(lVar14);
              }
              _CFRelease(lVar13);
            }
            _CFRelease(lVar12);
          }
        }
        lVar12 = _CGColorSpaceCreateDeviceRGB();
        if (lVar12 == 0) {
          FUN_100df99c0("","Screen",0,"%s: CGColorSpaceCreateDeviceRGB() return NULL",
                        "mac_grabAllDisplays");
        }
        else {
          uVar23 = (long)local_220;
          if (DAT_100e1e240 <= local_220) {
            uVar23 = (long)(local_220 - DAT_100e1e240) ^ 0x8000000000000000;
          }
          uVar21 = (long)local_218;
          if (DAT_100e1e240 <= local_218) {
            uVar21 = (long)(local_218 - DAT_100e1e240) ^ 0x8000000000000000;
          }
          lVar13 = _CGBitmapContextCreate(local_140,uVar23,uVar21,8,(long)(iVar10 * 4),lVar12,6);
          if (lVar13 == 0) {
            FUN_100df99c0("","Screen",0,"%s: CGBitmapContextCreate() return NULL",
                          "mac_grabAllDisplays");
          }
          else {
            lVar14 = _CGBitmapContextCreateImage(lVar13);
            if (lVar14 == 0) {
              FUN_100df99c0("","Screen",0,"%s: CGBitmapContextCreateImage() return NULL",
                            "mac_grabAllDisplays");
            }
            else {
              QPixmap::QPixmap(local_260);
              local_240 = 0;
              iStack_23c = 0;
              local_238 = 0xffffffff;
              iStack_234 = 0xffffffff;
              QtMac::fromCGImageRef(local_280);
              QPixmap::operator=(local_260,(QPixmap *)local_280);
              QPixmap::~QPixmap((QPixmap *)local_280);
              local_238 = iVar8 + -1 + iVar16;
              iStack_234 = iVar19 + -1 + iVar9;
              local_240 = iVar8;
              iStack_23c = iVar19;
              ppppplVar15 = operator_new(0x40);
              QPixmap::QPixmap((QPixmap *)(ppppplVar15 + 2),local_260);
              ppppplVar15[7] = (long ****)CONCAT44(iStack_234,local_238);
              ppppplVar15[6] = (long ****)CONCAT44(iStack_23c,local_240);
              ppppplVar15[1] = (long ****)&local_210;
              *ppppplVar15 = local_210;
              local_210[1] = (long ***)ppppplVar15;
              local_200 = local_200 + 1;
              local_210 = (long ****)ppppplVar15;
              QPixmap::~QPixmap(local_260);
              _CFRelease(lVar14);
            }
            _CFRelease(lVar13);
          }
          _CFRelease(lVar12);
        }
        if (local_140 != local_138) {
          _free(local_140);
        }
      }
      if ((uVar17 & 0xffffffff) <= uVar18) break;
      uVar18 = uVar18 + 1;
    }
    if (local_200 == 0) {
      QPixmap::QPixmap(local_2d8);
    }
    else {
      if (iVar7 < 0) {
        iVar8 = -local_2f4;
        if (0 < local_2f4) {
          iVar8 = local_2f4;
        }
        if (local_2f4 < 0) {
          local_2f4 = -(iVar8 + iVar7);
        }
        else {
          local_2f4 = iVar8 - iVar7;
        }
      }
      else {
        local_2f4 = local_2f4 - iVar7;
      }
      if (iVar24 < 0) {
        iVar8 = -iVar25;
        if (0 < iVar25) {
          iVar8 = iVar25;
        }
        if (iVar25 < 0) {
          iVar25 = -(iVar8 + iVar24);
        }
        else {
          iVar25 = iVar8 - iVar24;
        }
      }
      else {
        iVar25 = iVar25 - iVar24;
      }
      QPixmap::QPixmap(local_2a0,local_2f4,iVar25);
      QColor::QColor(local_2b0,0x13);
      QPixmap::fill((QColor *)local_2a0);
      if ((long *****)local_208 != &local_210) {
        ppppplVar15 = (long *****)local_208;
        do {
          QPainter::QPainter(local_2b8,(QPaintDevice *)local_2a0);
          iVar25 = *(int *)((long)ppppplVar15 + 0x34) - iVar24;
          local_170 = (double)(*(int *)(ppppplVar15 + 6) - iVar7);
          local_168 = (double)iVar25;
          local_160 = (double)(((1 - iVar7) - (*(int *)(ppppplVar15 + 6) - iVar7)) +
                              *(int *)(ppppplVar15 + 7));
          local_158 = (double)(((1 - iVar24) - iVar25) + *(int *)((long)ppppplVar15 + 0x3c));
          local_188 = 0;
          uStack_180 = 0;
          local_198 = 0;
          uStack_190 = 0;
          QPainter::drawPixmap
                    ((QRectF *)local_2b8,(QPixmap *)&local_170,(QRectF *)(ppppplVar15 + 2));
          QPainter::~QPainter(local_2b8);
          ppppplVar15 = (long *****)ppppplVar15[1];
        } while (ppppplVar15 != &local_210);
      }
      QPixmap::QPixmap(local_2d8,local_2a0);
      QPixmap::~QPixmap(local_2a0);
    }
    if (local_200 != 0) {
      pppplVar2 = (long ****)*local_208;
      pppplVar2[1] = local_210[1];
      *local_210[1] = (long **)pppplVar2;
      local_200 = 0;
      ppppplVar15 = (long *****)local_208;
      while (ppppplVar15 != &local_210) {
        ppppplVar3 = (long *****)ppppplVar15[1];
        QPixmap::~QPixmap((QPixmap *)(ppppplVar15 + 2));
        operator_delete(ppppplVar15);
        ppppplVar15 = ppppplVar3;
      }
    }
  }
  if (local_1f8 != (void *)0x0) {
    if (pvStack_1f0 != local_1f8) {
      pvStack_1f0 = (void *)((~((long)pvStack_1f0 + (-4 - (long)local_1f8)) & 0xfffffffffffffffcU) +
                            (long)pvStack_1f0);
    }
    operator_delete(local_1f8);
  }
  QPixmap::operator=(param_3,local_2d8);
  QPixmap::~QPixmap(local_2d8);
  cVar5 = QPixmap::isNull();
  if (cVar5 != '\0') {
    uVar6 = 0;
    goto LAB_100869024;
  }
  pQVar1 = (QArrayData *)*param_2;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_149 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  uVar6 = QPixmap::save((QString *)param_3,param_1,
                        (int)local_2e0 + (int)*(undefined8 *)(local_2e0 + 0x10));
  if (*(int *)local_2e0 != -1) {
    if (*(int *)local_2e0 != 0) {
      LOCK();
      *(int *)local_2e0 = *(int *)local_2e0 + -1;
      local_149 = *(int *)local_2e0 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_100868fe8;
    }
    QArrayData::deallocate(local_2e0,1,8);
  }
LAB_100868fe8:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_149 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_100869024;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100869024:
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_1021e1840 >> 8),uVar6);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

