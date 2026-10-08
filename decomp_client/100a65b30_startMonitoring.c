
/* Function Stack Size: 0x10 bytes */

void LocationDelegate::startMonitoring(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  cVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___CLLocationManager_10226aaa0,
                     PTR_s_locationServicesEnabled_10226a378);
  if (cVar2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100a65be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + m_callback) + 8))();
    return;
  }
  dVar4 = (double)_CFAbsoluteTimeGetCurrent();
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (*(long *)(param_1 + m_manager) == 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___CLLocationManager_10226aaa0,PTR_s_new_102269070);
    *(undefined8 *)(param_1 + m_manager) = uVar3;
    (*(code *)puVar1)(uVar3,PTR_s_setDelegate__102268f50,param_1);
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (*(undefined8 *)(param_1 + m_manager),PTR_s_startUpdatingLocation_10226a380);
  if (DAT_10230ffd0 < 3) {
    return;
  }
  dVar5 = (double)_CFAbsoluteTimeGetCurrent();
  FUN_100df99c0(dVar5 - dVar4,"LOCTOOL_M","LocationClient",3,"Start monitoring took %f sec");
  return;
}

