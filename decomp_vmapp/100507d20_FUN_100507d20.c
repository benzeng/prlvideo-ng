
void FUN_100507d20(undefined8 *param_1)

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
  uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSImage_100bedb10,PTR_s_alloc_100bed228);
  uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (DAT_100b46188,DAT_100b46188,uVar3,PTR_s_initWithSize__100bed848);
  *puVar2 = uVar3;
  *param_1 = puVar2;
  puVar1 = PTR__objc_msgSend_100ba25e8;
  uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSWorkspace_100bedaf8,PTR_s_sharedWorkspace_100bed200);
  uVar4 = _NSFileTypeForHFSTypeCode(0x494e4954);
  self = (*(code *)puVar1)(uVar3,PTR_s_iconForFileType__100bed850,uVar4);
  puVar1 = PTR_s_toQImageWithSize__100bed858;
  uVar3 = *param_1;
  if (self == 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_48,self,PTR_s_toQImageWithSize__100bed858,DAT_100b46190,
                        DAT_100b46190);
  }
  FUN_100508640(uVar3,&local_48);
  QImage::~QImage((QImage *)&local_48);
  uVar3 = *param_1;
  if (self == 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_48,self,puVar1,DAT_100b46198,DAT_100b46198);
  }
  FUN_100508640(uVar3,&local_48);
  QImage::~QImage((QImage *)&local_48);
  uVar3 = *param_1;
  if (self == 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_48,self,puVar1,DAT_100b46188,DAT_100b46188);
  }
  FUN_100508640(uVar3,&local_48);
  QImage::~QImage((QImage *)&local_48);
  uVar3 = *param_1;
  if (self == 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_48,self,puVar1,DAT_100b461a0,DAT_100b461a0);
  }
  FUN_100508640(uVar3,&local_48);
  QImage::~QImage((QImage *)&local_48);
  return;
}

