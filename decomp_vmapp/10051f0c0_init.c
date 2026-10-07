
/* Function Stack Size: 0x10 bytes */

ID ShiftDetector::init(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 local_30;
  objc_super local_28;
  
  local_28.super_class = (class_t *)PTR_ShiftDetector_100bedc98;
  local_28.receiver = param_1;
  IVar3 = _objc_msgSendSuper2(&local_28,PTR_s_init_100bed248);
  *(undefined8 *)(IVar3 + _accumulatedShiftMS) = 0;
  lVar2 = _lastTicks;
  uVar4 = FUN_1007eaf60();
  *(undefined8 *)(IVar3 + lVar2) = uVar4;
  lVar2 = _lastTime;
  FUN_1007eb1f0(&local_30);
  *(undefined8 *)(IVar3 + lVar2) = local_30;
  puVar1 = PTR__objc_msgSend_100ba25e8;
  uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSNotificationCenter_100bedb78,PTR_s_defaultCenter_100bed538)
  ;
  (*(code *)puVar1)(uVar4,PTR_s_addObserver_selector_name_object_100bed710,IVar3,
                    PTR_s_handleSysTimeChanged__100beda40,
                    *(undefined8 *)PTR__NSSystemClockDidChangeNotification_100ba2078,0);
  return IVar3;
}

