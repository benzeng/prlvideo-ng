
QString * FUN_100d3f2e0(QString *param_1,undefined8 param_2,char param_3,char param_4)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = PTR__objc_msgSend_1021e1c68;
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
  uVar5 = (*(code *)puVar3)(uVar5,PTR_s_init_102268ca8);
  uVar6 = (*(code *)puVar3)(PTR__OBJC_CLASS___NSDateFormatter_10226aaf8,PTR_s_alloc_102268b58);
  uVar6 = (*(code *)puVar3)(uVar6,PTR_s_init_102268ca8);
  uVar6 = (*(code *)puVar3)(uVar6,PTR_s_autorelease_102269a10);
  if (param_3 != '\0') {
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setDateStyle__10226a580,param_2);
  }
  if (param_4 != '\0') {
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setTimeStyle__10226a588,param_2);
  }
  uVar6 = (*(code *)puVar3)(uVar6,PTR_s_dateFormat_10226a590);
  uVar4 = (*(code *)puVar3)(uVar6,PTR_s_length_102269050);
  QString::QString(param_1,uVar4,0);
  pQVar1 = param_1->field0_0x0;
  lVar2 = *(long *)(pQVar1 + 0x10);
  uVar7 = (*(code *)puVar3)(uVar6,PTR_s_length_102269050);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar6,PTR_s_getCharacters_range__10226a778,pQVar1 + lVar2,0,uVar7);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_release_1022699b8);
  return param_1;
}

