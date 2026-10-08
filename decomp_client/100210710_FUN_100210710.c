
undefined8 * FUN_100210710(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  char *pcVar2;
  
  switch(param_3) {
  case 1:
    puVar1 = (undefined *)QString::fromAscii_helper("ValidateConfig",0xe);
    break;
  default:
    puVar1 = PTR_shared_null_1021e1288;
    break;
  case 3:
    puVar1 = (undefined *)QString::fromAscii_helper("CommitAccessRights",0x12);
    break;
  case 4:
    puVar1 = (undefined *)QString::fromAscii_helper("BeginEditSession",0x10);
    break;
  case 5:
    pcVar2 = "CommitConfig";
    goto LAB_100210782;
  case 6:
    pcVar2 = "UpdateConfig";
LAB_100210782:
    puVar1 = (undefined *)QString::fromAscii_helper(pcVar2,0xc);
  }
  *param_1 = puVar1;
  return param_1;
}

