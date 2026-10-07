
undefined8 * FUN_100256a70(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(ID *)(param_2 + 0x18) == 0) {
    uVar1 = QString::fromAscii_helper("SN-TEST",7);
    *param_1 = uVar1;
  }
  else {
    _objc_msgSend_stret((undefined *)param_1,*(ID *)(param_2 + 0x18),PTR_s_GetSerial_100bed6c0);
  }
  return param_1;
}

