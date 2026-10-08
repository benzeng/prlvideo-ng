
void FUN_100ab7220(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID self;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  puVar2 = operator_new(8);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSImage_10226a7c0,PTR_s_alloc_102268b58);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (DAT_100e19980,DAT_100e19980,uVar3,PTR_s_initWithSize__10226a3b8);
  *puVar2 = uVar3;
  *param_1 = puVar2;
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSWorkspace_10226a8c8,PTR_s_sharedWorkspace_1022697b8);
  uVar4 = _NSFileTypeForHFSTypeCode(0x494e4954);
  self = (*(code *)puVar1)(uVar3,PTR_s_iconForFileType__10226a3c0,uVar4);
  puVar1 = PTR_s_toQImageWithSize__10226a3c8;
  uVar3 = *param_1;
  if (self == 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_48,self,PTR_s_toQImageWithSize__10226a3c8,DAT_100e11058,
                        DAT_100e11058);
  }
  FUN_100ab7b40(uVar3,&local_48);
  QImage::~QImage((QImage *)&local_48);
  uVar3 = *param_1;
  if (self == 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_48,self,puVar1,DAT_100e11070,DAT_100e11070);
  }
  FUN_100ab7b40(uVar3,&local_48);
  QImage::~QImage((QImage *)&local_48);
  uVar3 = *param_1;
  if (self == 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_48,self,puVar1,DAT_100e19980,DAT_100e19980);
  }
  FUN_100ab7b40(uVar3,&local_48);
  QImage::~QImage((QImage *)&local_48);
  uVar3 = *param_1;
  if (self == 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_48,self,puVar1,DAT_101cd7018,DAT_101cd7018);
  }
  FUN_100ab7b40(uVar3,&local_48);
  QImage::~QImage((QImage *)&local_48);
  return;
}

