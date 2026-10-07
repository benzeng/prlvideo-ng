
undefined1 FUN_1004ab3f0(int *param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ID self;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  long lVar15;
  undefined1 local_120 [32];
  long local_100;
  long local_f8;
  long local_f0;
  void *local_e8;
  void *local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  double local_40;
  
  cVar2 = FUN_1004ab040(SUB84((double)*param_1,0),(double)param_1[1],local_120);
  if (cVar2 == '\0') {
    uVar14 = 0;
  }
  else {
    iVar3 = FUN_1004ab180(local_120,1);
    pcVar1 = DAT_1011ccd98;
    if (iVar3 == 0) {
      uVar14 = 0;
    }
    else {
      local_b0 = *(undefined8 *)(PTR__CGRectNull_100ba2058 + 0x18);
      local_b8 = *(undefined8 *)(PTR__CGRectNull_100ba2058 + 0x10);
      local_c8 = *(undefined8 *)PTR__CGRectNull_100ba2058;
      local_c0 = *(undefined8 *)(PTR__CGRectNull_100ba2058 + 8);
      uVar4 = (*DAT_1011ccc38)();
      iVar5 = (*pcVar1)(uVar4,iVar3,&local_c8);
      if (iVar5 == 0) {
        uVar7 = local_c8;
        lVar6 = _CGWindowListCreateImage(8,iVar3,0);
        uVar4 = (undefined4)((ulong)uVar7 >> 0x20);
        if (lVar6 == 0) {
          if (DAT_1011b55f8 < 1) {
            uVar14 = 0;
          }
          else {
            uVar14 = 0;
            FUN_1008e3970("CHRSRV_DESKTOP_IMAGE","ChrToolSrv",1,"Unable to get desktop window image"
                         );
          }
        }
        else {
          _CFRetain(lVar6);
          _CFRetain(lVar6);
          local_100 = lVar6;
          _CFRetain(lVar6);
          local_f8 = 0;
          local_f0 = *param_2;
          local_d8 = 0;
          local_e0 = (void *)0x0;
          local_e8 = (void *)0x0;
          lVar15 = (local_f0 << 0x20) >> 0x1e;
          if (*(int *)((long)param_2 + 4) * lVar15 != 0) {
            FUN_1003324b0(&local_e8);
          }
          uVar7 = _CGColorSpaceCreateDeviceRGB();
          lVar15 = _CGBitmapContextCreate
                             (local_e8,(long)(int)*param_2,(long)*(int *)((long)param_2 + 4),8,
                              lVar15,uVar7,CONCAT44(uVar4,0x2006));
          if (local_f8 != 0) {
            _CFRelease();
          }
          local_f8 = lVar15;
          _CGColorSpaceRelease(uVar7);
          _CFRelease(lVar6);
          local_d0 = 0;
          uVar7 = (*(code *)PTR__objc_msgSend_100ba25e8)
                            (PTR__OBJC_CLASS___NSAutoreleasePool_100bedb20,PTR_s_alloc_100bed228);
          uVar8 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar7,PTR_s_init_100bed248);
          uVar9 = (*(code *)PTR__objc_msgSend_100ba25e8)
                            (PTR__OBJC_CLASS___CIContext_100bedbc8,
                             PTR_s_contextWithCGContext_options__100bed780,local_f8,0);
          self = (*(code *)PTR__objc_msgSend_100ba25e8)
                           (PTR__OBJC_CLASS___CIImage_100bedbd0,PTR_s_imageWithCGImage__100bed788,
                            local_100);
          local_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_100ba2050 + 0x28);
          local_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_100ba2050 + 0x20);
          local_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_100ba2050 + 0x18);
          local_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_100ba2050 + 0x10);
          local_88 = *(undefined8 *)PTR__CGAffineTransformIdentity_100ba2050;
          local_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_100ba2050 + 8);
          uVar10 = (*(code *)PTR__objc_msgSend_100ba25e8)
                             (PTR__OBJC_CLASS___CIFilter_100bedbd8,PTR_s_filterWithName__100bed790,
                              &cf_CIAffineClamp);
          uVar7 = *(undefined8 *)PTR__kCIInputImageKey_100ba2448;
          (*(code *)PTR__objc_msgSend_100ba25e8)(uVar10,PTR_s_setValue_forKey__100bed798,self);
          uVar11 = (*(code *)PTR__objc_msgSend_100ba25e8)
                             (PTR__OBJC_CLASS___NSValue_100bedbe0,
                              PTR_s_valueWithBytes_objCType__100bed7a0,&local_88,
                              "{CGAffineTransform=dddddd}");
          (*(code *)PTR__objc_msgSend_100ba25e8)
                    (uVar10,PTR_s_setValue_forKey__100bed798,uVar11,&cf_inputTransform);
          uVar11 = *(undefined8 *)PTR__kCIOutputImageKey_100ba2450;
          uVar10 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar10,PTR_s_valueForKey__100bed7a8);
          uVar12 = (*(code *)PTR__objc_msgSend_100ba25e8)
                             (PTR__OBJC_CLASS___CIFilter_100bedbd8,PTR_s_filterWithName__100bed790,
                              &cf_CIConstantColorGenerator);
          uVar13 = (*(code *)PTR__objc_msgSend_100ba25e8)
                             ((int)DAT_100b44b40,DAT_100b44b40,PTR__OBJC_CLASS___CIColor_100bedbe8,
                              PTR_s_colorWithRed_green_blue__100bed7b0);
          (*(code *)PTR__objc_msgSend_100ba25e8)
                    (uVar12,PTR_s_setValue_forKey__100bed798,uVar13,&cf_inputColor);
          uVar12 = (*(code *)PTR__objc_msgSend_100ba25e8)
                             (uVar12,PTR_s_valueForKey__100bed7a8,&cf_outputImage);
          uVar13 = (*(code *)PTR__objc_msgSend_100ba25e8)
                             (PTR__OBJC_CLASS___CIFilter_100bedbd8,PTR_s_filterWithName__100bed790,
                              &cf_CIMultiplyCompositing);
          (*(code *)PTR__objc_msgSend_100ba25e8)(uVar13,PTR_s_setDefaults_100bed7b8);
          (*(code *)PTR__objc_msgSend_100ba25e8)
                    (uVar13,PTR_s_setValue_forKey__100bed798,uVar10,
                     *(undefined8 *)PTR__kCIInputBackgroundImageKey_100ba2440);
          (*(code *)PTR__objc_msgSend_100ba25e8)
                    (uVar13,PTR_s_setValue_forKey__100bed798,uVar12,uVar7);
          uVar10 = (*(code *)PTR__objc_msgSend_100ba25e8)
                             (uVar13,PTR_s_valueForKey__100bed7a8,uVar11);
          uVar12 = (*(code *)PTR__objc_msgSend_100ba25e8)
                             (PTR__OBJC_CLASS___CIFilter_100bedbd8,PTR_s_filterWithName__100bed790,
                              &cf_CIGaussianBlur);
          (*(code *)PTR__objc_msgSend_100ba25e8)
                    (uVar12,PTR_s_setValue_forKey__100bed798,uVar10,uVar7);
          uVar10 = (*(code *)PTR__objc_msgSend_100ba25e8)
                             (DAT_100b44b48,PTR__OBJC_CLASS___NSNumber_100bedba0,
                              PTR_s_numberWithFloat__100bed7c0);
          (*(code *)PTR__objc_msgSend_100ba25e8)
                    (uVar12,PTR_s_setValue_forKey__100bed798,uVar10,&cf_inputRadius);
          uVar10 = (*(code *)PTR__objc_msgSend_100ba25e8)
                             (uVar12,PTR_s_valueForKey__100bed7a8,uVar11);
          uVar12 = (*(code *)PTR__objc_msgSend_100ba25e8)
                             (PTR__OBJC_CLASS___CIFilter_100bedbd8,PTR_s_filterWithName__100bed790,
                              &cf_CIColorControls);
          (*(code *)PTR__objc_msgSend_100ba25e8)(uVar12,PTR_s_setDefaults_100bed7b8);
          (*(code *)PTR__objc_msgSend_100ba25e8)
                    (uVar12,PTR_s_setValue_forKey__100bed798,uVar10,uVar7);
          uVar7 = (*(code *)PTR__objc_msgSend_100ba25e8)
                            (DAT_100b44b4c,PTR__OBJC_CLASS___NSNumber_100bedba0,
                             PTR_s_numberWithFloat__100bed7c0);
          (*(code *)PTR__objc_msgSend_100ba25e8)
                    (uVar12,PTR_s_setValue_forKey__100bed798,uVar7,&cf_inputSaturation);
          uVar7 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar12,PTR_s_valueForKey__100bed7a8,uVar11)
          ;
          if (self == 0) {
            local_98 = 0;
            uStack_90 = 0;
            local_a8 = 0;
            uStack_a0 = 0;
          }
          else {
            _objc_msgSend_stret((undefined *)&local_a8,self,PTR_s_extent_100bed7c8);
          }
          lVar15 = (*(code *)PTR__objc_msgSend_100ba25e8)
                             (uVar9,PTR_s_createCGImage_fromRect__100bed7d0,uVar7);
          if (local_d0 != 0) {
            _CFRelease();
          }
          local_d0 = lVar15;
          (*(code *)PTR__objc_msgSend_100ba25e8)(uVar8,PTR_s_drain_100bed2a8);
          _CFRelease(lVar6);
          lVar15 = local_d0;
          if (local_d0 != 0) {
            _CFRetain(local_d0);
          }
          local_48 = (double)(int)local_f0;
          local_40 = (double)(int)((ulong)local_f0 >> 0x20);
          local_58 = 0;
          uStack_50 = 0;
          _CGContextDrawImage(local_f8,lVar15);
          FUN_1002a5a50(param_3,0,local_e8,(int)local_e0 - (int)local_e8);
          if (lVar15 != 0) {
            _CFRelease(lVar15);
          }
          if (local_d0 != 0) {
            _CFRelease();
          }
          if (local_e8 != (void *)0x0) {
            if (local_e0 != local_e8) {
              local_e0 = local_e8;
            }
            operator_delete(local_e8);
          }
          if (local_f8 != 0) {
            _CFRelease();
          }
          if (local_100 != 0) {
            _CFRelease();
          }
          _CFRelease(lVar6);
          uVar14 = 1;
        }
      }
      else if (DAT_1011b55f8 < 1) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        FUN_1008e3970("CHRSRV_DESKTOP_IMAGE","ChrToolSrv",1,"Unable to get desktop window bounds");
      }
    }
  }
  return uVar14;
}

