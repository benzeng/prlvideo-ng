
/* Function Stack Size: 0x10 bytes */

void PDDeviceBarViewContaner::updateInstrinsicSize(ID param_1,SEL param_2)

{
  undefined *UNRECOVERED_JUMPTABLE;
  char cVar1;
  double dVar2;
  undefined8 local_28;
  undefined8 local_20;
  
  cVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_deviceListVisible_1022694e0);
  if (cVar1 == '\0') {
    local_28 = *(undefined8 *)PTR__NSViewNoInstrinsicMetric_1021e1150;
    local_20 = 0.0;
  }
  else {
    local_20 = (double)(*(code *)PTR__objc_msgSend_1021e1c68)
                                 (param_1,PTR_s_availableWidth_1022694e8);
    local_28 = *(undefined8 *)PTR__NSViewNoInstrinsicMetric_1021e1150;
  }
  dVar2 = (double)(*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_instrinsicSize_102269398);
  UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
  if ((dVar2 == local_20) && (!NAN(dVar2) && !NAN(local_20))) {
    return;
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (local_20,local_28,param_1,PTR_s_setInstrinsicSize__1022694f0);
                    /* WARNING: Could not recover jumptable at 0x00010002066e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,PTR_s_invalidateIntrinsicContentSize_1022694f8);
  return;
}

