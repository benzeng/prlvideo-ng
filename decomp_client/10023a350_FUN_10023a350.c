
undefined8 * FUN_10023a350(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_shared_null_1021e1288;
  switch(param_3) {
  case 0:
    puVar1 = (undefined *)QString::fromAscii_helper("CheckPrerequisites",0x12);
    break;
  case 1:
    puVar1 = (undefined *)QString::fromAscii_helper("PrepareTransition",0x11);
    break;
  case 2:
    puVar1 = (undefined *)QString::fromAscii_helper("LeaveCurrentMode",0x10);
    break;
  case 3:
    puVar1 = (undefined *)QString::fromAscii_helper("EnterNewMode",0xc);
    break;
  case 4:
    puVar1 = (undefined *)QString::fromAscii_helper("ShowTransition",0xe);
  }
  *param_1 = puVar1;
  return param_1;
}

