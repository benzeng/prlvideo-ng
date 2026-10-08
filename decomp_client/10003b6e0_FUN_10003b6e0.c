
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003b6e0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ID self;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  double dStack_40;
  CAutoreleasePool local_30 [8];
  
  CAutoreleasePool::CAutoreleasePool(local_30);
  lVar2 = MacUtils::getWindowRef(*(QWidget **)(param_1 + 0x18));
  if (lVar2 != 0) {
    self = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar2,PTR_s_contentView_102268b80);
    if (self == 0) {
      local_48 = 0;
      dStack_40 = 0.0;
      local_58 = 0;
      uStack_50 = 0;
      dVar6 = 0.0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_58,self,PTR_s_frame_102268b50);
      dVar6 = dStack_40 * DAT_100e110f0;
    }
    puVar1 = PTR__OBJC_CLASS___NSEvent_10226a8b0;
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSEvent_10226a8b0,PTR_s_modifierFlags_102269650);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar2,PTR_s_windowNumber_102269660);
    lVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (0,dVar6,0,DAT_100e11208,puVar1,
                       PTR_s_mouseEventWithType_location_modi_102269688,1,uVar3,uVar4,0,0,1);
    if (lVar5 != 0) {
      uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar2,PTR_s_contentView_102268b80);
      puVar1 = PTR__OBJC_CLASS___NSArray_10226a818;
      uVar4 = _NSFileTypeForHFSTypeCode(0x666c6472);
      uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(puVar1,PTR_s_arrayWithObject__102269940,uVar4);
      (*(code *)PTR__objc_msgSend_1021e1c68)
                (uVar3,PTR_s_dragPromisedFilesOfTypes_fromRec_102269948,uVar4,
                 **(undefined8 **)(param_1 + 0x48),0,lVar5,0,dVar6,_DAT_100e11210,_UNK_100e11218);
    }
  }
  CAutoreleasePool::~CAutoreleasePool(local_30);
  return;
}

