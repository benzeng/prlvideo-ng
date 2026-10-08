
void FUN_100034910(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  puVar3 = PTR__objc_msgSend_1021e1c68;
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSUserDefaults_10226a908,PTR_s_alloc_102268b58);
  uVar1 = (*(code *)puVar3)(uVar1,PTR_s_initWithSuiteName__1022698d0,
                            &cf_4C6364ACXT_com_parallels_Desktop);
  uVar2 = (*(code *)puVar3)(PTR__OBJC_CLASS___NSRunningApplication_10226a910,
                            PTR_s_currentApplication_1022698d8);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_processIdentifier_1022698e0);
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithInt__1022698b8,uVar4);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar1,PTR_s_setObject_forKey__102269208,uVar2,&cf_PDWriterPid);
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_synchronize_1022698e8);
  (*(code *)PTR__objc_release_1021e1c70)(uVar1);
  return;
}

