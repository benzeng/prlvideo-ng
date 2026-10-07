
undefined1 FUN_1004a1230(byte *param_1,int param_2,int param_3,int param_4,undefined8 *param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  QImage local_a0 [32];
  QImage local_80 [39];
  undefined1 local_59;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  double local_40;
  
  uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSString_100bedb00,PTR_s_alloc_100bed228);
  puVar1 = PTR__objc_msgSend_100ba25e8;
  if ((*param_1 & 1) == 0) {
    param_1 = param_1 + 1;
  }
  else {
    param_1 = *(byte **)(param_1 + 0x10);
  }
  uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar3,PTR_s_initWithUTF8String__100bed730,param_1);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSWorkspace_100bedaf8,PTR_s_sharedWorkspace_100bed200)
  ;
  lVar5 = (*(code *)puVar1)(uVar4,PTR_s_iconForFile__100bed738,uVar3);
  (*(code *)puVar1)(uVar3,PTR_s_release_100bed2a0);
  if (lVar5 == 0) {
    uVar8 = 0;
  }
  else {
    dVar9 = (double)param_2;
    dVar10 = (double)param_3;
    local_58 = 0;
    uStack_50 = 0;
    uVar3 = 0;
    uVar11 = 0;
    uVar8 = 0;
    local_48 = dVar9;
    local_40 = dVar10;
    lVar5 = (*(code *)PTR__objc_msgSend_100ba25e8)
                      (lVar5,PTR_s_bestRepresentationForRect_contex_100bed740,0,0);
    if (lVar5 != 0) {
      uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)
                        (lVar5,PTR_s_CGImageForProposedRect_context_h_100bed748,&local_58,0,0);
      lVar5 = (long)param_2 * 4;
      local_59 = 0;
      FUN_1004a1550(param_5,lVar5 * param_3,&local_59);
      lVar6 = _CGColorSpaceCreateDeviceRGB();
      lVar5 = _CGBitmapContextCreate
                        (*param_5,(long)param_2,(long)param_3,8,lVar5,lVar6,CONCAT44(uVar11,0x2002),
                         uVar3,dVar9,dVar10);
      _CGContextSetBlendMode(lVar5,0x11);
      uVar3 = uStack_50;
      dVar9 = local_48;
      dVar10 = local_40;
      _CGContextDrawImage(lVar5,uVar4);
      if (param_4 != 5) {
        QImage::QImage(local_80,*param_5,param_2,param_3,5,0,0,uVar3,dVar9,dVar10);
        QImage::convertToFormat(local_a0,local_80,param_4,0);
        QImage::operator=(local_80,local_a0);
        QImage::~QImage(local_a0);
        uVar3 = QImage::bits();
        lVar7 = QImage::bits();
        iVar2 = QImage::byteCount();
        FUN_1004a2ee0(param_5,uVar3,lVar7 + iVar2);
        QImage::~QImage(local_80);
      }
      if (lVar5 != 0) {
        _CGContextRelease(lVar5);
      }
      uVar8 = 1;
      if (lVar6 != 0) {
        _CGColorSpaceRelease(lVar6);
      }
    }
  }
  return uVar8;
}

