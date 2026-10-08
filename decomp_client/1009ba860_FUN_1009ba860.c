
int FUN_1009ba860(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 in_RAX;
  undefined4 local_24;
  
  local_24 = (undefined4)((ulong)in_RAX >> 0x20);
  iVar1 = (*DAT_1023111e8)(param_2,&local_24);
  if (iVar1 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,"Error: Unable to get event type. error 0x%X",iVar1)
    ;
  }
  else {
    iVar1 = 0;
    switch(local_24) {
    case 10:
      iVar1 = FUN_1009ba930(param_1,param_2);
      break;
    case 0xb:
      iVar1 = FUN_1009bab20(param_1,param_2);
      break;
    case 0xc:
      iVar1 = FUN_1009bafb0(param_1,param_2);
      break;
    case 0xd:
      iVar1 = FUN_1009bb1a0(param_1,param_2);
      break;
    case 0xe:
      iVar1 = FUN_1009bb480(param_1,param_2);
    }
  }
  return iVar1;
}

