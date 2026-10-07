
/* Function Stack Size: 0x10 bytes */

void ShiftDetector::detach(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  uVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSNotificationCenter_100bedb78,PTR_s_defaultCenter_100bed538)
  ;
  (*(code *)puVar1)(uVar2,PTR_s_removeObserver_name_object__100beda48,param_1,
                    *(undefined8 *)PTR__NSSystemClockDidChangeNotification_100ba2078,0);
  return;
}

