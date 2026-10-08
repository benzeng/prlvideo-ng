
/* Function Stack Size: 0x10 bytes */

ID CRestorationSharedData::sharedInstance(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (DAT_102311e30 == 0) {
    uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_alloc_102268b58);
    DAT_102311e30 = (*(code *)puVar1)(uVar2,PTR_s_init_102268ca8);
    (*(code *)puVar1)(DAT_102311e30,PTR_s_setManager__102269e88,0);
  }
  return DAT_102311e30;
}

