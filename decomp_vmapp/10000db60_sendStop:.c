
/* Function Stack Size: 0x18 bytes */

void MacAppDelegate::sendStop_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + needStop) = 1;
  puVar2 = PTR__objc_msgSend_100ba25e8;
  puVar1 = PTR__NSApp_100ba2068;
  (*(code *)PTR__objc_msgSend_100ba25e8)
            (*(undefined8 *)PTR__NSApp_100ba2068,PTR_s_stop__100bed250,0);
  uVar3 = (*(code *)puVar2)(0,0,0,PTR__OBJC_CLASS___NSEvent_100bedb18,
                            PTR_s_otherEventWithType_location_modi_100bed258,0xf,0,0,0,0,0,0);
  (*(code *)puVar2)(*(undefined8 *)puVar1,PTR_s_postEvent_atStart__100bed260,uVar3,1);
  return;
}

