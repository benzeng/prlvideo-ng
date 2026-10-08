
int FUN_1009ba930(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long local_48;
  long local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  local_40 = 0;
  iVar2 = (*DAT_1023111f8)(param_2,0,&local_40);
  if (iVar2 < 0) {
    bVar1 = false;
    FUN_100df99c0("","TransporterWizardModel",0,"Error: Unable to get event param. error 0x%X",iVar2
                 );
  }
  else {
    iVar2 = (*DAT_102311218)(local_40,&local_34);
    if (iVar2 < 0) {
      bVar1 = false;
      FUN_100df99c0("","TransporterWizardModel",0,
                    "Error: Unable to get event param value. error 0x%X",iVar2);
    }
    else {
      bVar1 = true;
    }
  }
  if (local_40 != 0) {
    (*DAT_102310a50)();
  }
  local_40 = 0;
  if (bVar1) {
    local_48 = 0;
    iVar3 = (*DAT_1023111f8)(param_2,1,&local_48);
    if (iVar3 < 0) {
      bVar1 = false;
      FUN_100df99c0("","TransporterWizardModel",0,"Error: Unable to get event param. error 0x%X",
                    iVar3);
      iVar2 = iVar3;
    }
    else {
      iVar3 = (*DAT_102311210)(local_48,&local_38);
      bVar1 = true;
      if (iVar3 < 0) {
        bVar1 = false;
        FUN_100df99c0("","TransporterWizardModel",0,
                      "Error: Unable to get event param value. error 0x%X",iVar3);
        iVar2 = iVar3;
      }
    }
    if (local_48 != 0) {
      (*DAT_102310a50)();
    }
    local_48 = 0;
    if (bVar1) {
      FUN_1009bf8d0(param_1,local_34,local_38);
      iVar2 = 0;
    }
  }
  return iVar2;
}

