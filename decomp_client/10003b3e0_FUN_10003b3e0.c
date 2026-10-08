
void FUN_10003b3e0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID self;
  long lVar7;
  double dVar8;
  ulong uVar9;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  double dStack_40;
  CAutoreleasePool local_38 [8];
  
  CAutoreleasePool::CAutoreleasePool(local_38);
  lVar3 = MacUtils::getWindowRef(*(QWidget **)(param_1 + 0x18));
  if (lVar3 != 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSMutableArray_10226a840,PTR_s_arrayWithCapacity__102269950
                       ,(long)*(int *)(*param_2 + 0xc) - (long)*(int *)(*param_2 + 8));
    puVar2 = PTR_s_addObject__1022692e8;
    puVar1 = PTR_s_stringWithQString__102268d00;
    lVar7 = *param_2;
    if (*(int *)(lVar7 + 8) != *(int *)(lVar7 + 0xc)) {
      lVar7 = lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8;
      do {
        uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (PTR__OBJC_CLASS___NSString_10226a7c8,puVar1,lVar7);
        (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,puVar2,uVar5);
        lVar7 = lVar7 + 8;
      } while (lVar7 != *param_2 + 0x10 + (long)*(int *)(*param_2 + 0xc) * 8);
    }
    uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSPasteboard_10226a928,PTR_s_pasteboardWithName__102269958,
                       *(undefined8 *)PTR__NSDragPboard_1021e10b0);
    puVar1 = PTR__NSFilenamesPboardType_1021e10c8;
    uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSArray_10226a818,PTR_s_arrayWithObjects__102269960,
                       *(undefined8 *)PTR__NSFilenamesPboardType_1021e10c8,0);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_declareTypes_owner__102269968,uVar6,0);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (uVar5,PTR_s_setPropertyList_forType__102269970,uVar4,*(undefined8 *)puVar1);
    self = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar3,PTR_s_contentView_102268b80);
    if (self == 0) {
      local_48 = 0;
      dStack_40 = 0.0;
      local_58 = 0;
      uStack_50 = 0;
      dVar8 = 0.0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_58,self,PTR_s_frame_102268b50);
      dVar8 = dStack_40 * DAT_100e110f0;
    }
    puVar1 = PTR__OBJC_CLASS___NSEvent_10226a8b0;
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSEvent_10226a8b0,PTR_s_modifierFlags_102269650);
    uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar3,PTR_s_windowNumber_102269660);
    uVar9 = 0;
    lVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (0,dVar8,0,DAT_100e11208,puVar1,
                       PTR_s_mouseEventWithType_location_modi_102269688,1,uVar4,uVar6,0,0,1);
    if (lVar7 != 0) {
      uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar3,PTR_s_contentView_102268b80);
      uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (PTR__OBJC_CLASS___NSImage_10226a7c0,PTR_s_imageNamed__102269978,
                         &cf_NSFolder);
      (*(code *)PTR__objc_msgSend_1021e1c68)
                (0,dVar8,*(undefined8 *)PTR__NSZeroSize_1021e11c0,
                 *(undefined8 *)(PTR__NSZeroSize_1021e11c0 + 8),uVar4,
                 PTR_s_dragImage_at_offset_event_pasteb_102269980,uVar6,lVar7,uVar5,
                 **(undefined8 **)(param_1 + 0x48),uVar9 & 0xffffffff00000000);
    }
  }
  CAutoreleasePool::~CAutoreleasePool(local_38);
  return;
}

