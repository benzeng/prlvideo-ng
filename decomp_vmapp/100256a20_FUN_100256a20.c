
undefined8 * FUN_100256a20(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(ID *)(param_2 + 0x18) == 0) {
    uVar1 = QString::fromAscii_helper("Test Video Source",0x11);
    *param_1 = uVar1;
  }
  else {
    _objc_msgSend_stret((undefined *)param_1,*(ID *)(param_2 + 0x18),PTR_s_GetName_100bed6b8);
  }
  return param_1;
}

