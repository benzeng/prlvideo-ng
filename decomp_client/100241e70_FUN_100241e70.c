
undefined8 * FUN_100241e70(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  char *pcVar2;
  
  puVar1 = PTR_shared_null_1021e1288;
  switch(param_3) {
  case 0:
    puVar1 = (undefined *)QString::fromAscii_helper("TS_Prepare",10);
    break;
  case 1:
    pcVar2 = "TS_ShowProgressScreen";
    goto LAB_100241ef8;
  case 2:
    puVar1 = (undefined *)QString::fromAscii_helper("TS_DisableSound",0xf);
    break;
  case 3:
    puVar1 = (undefined *)QString::fromAscii_helper("TS_Upgrading",0xc);
    break;
  case 4:
    puVar1 = (undefined *)QString::fromAscii_helper("TS_EnableSound",0xe);
    break;
  case 5:
    pcVar2 = "TS_HideProgressScreen";
LAB_100241ef8:
    puVar1 = (undefined *)QString::fromAscii_helper(pcVar2,0x15);
    break;
  case 6:
    puVar1 = (undefined *)QString::fromAscii_helper("TS_Finish",9);
    break;
  case 7:
    puVar1 = (undefined *)QString::fromAscii_helper("TS_WaitForUpgrading",0x13);
  }
  *param_1 = puVar1;
  return param_1;
}

