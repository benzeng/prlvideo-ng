
int FUN_1009bb1a0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long local_58;
  long local_50;
  long local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  local_48 = 0;
  iVar2 = (*DAT_1023111f8)(param_2,0,&local_48);
  if (iVar2 < 0) {
    bVar1 = false;
    FUN_100df99c0("","TransporterWizardModel",0,"Error: Unable to get event param. error 0x%X",iVar2
                 );
  }
  else {
    iVar2 = (*DAT_102311218)(local_48,&local_34);
    if (iVar2 < 0) {
      bVar1 = false;
      FUN_100df99c0("","TransporterWizardModel",0,
                    "Error: Unable to get event param value. error 0x%X",iVar2);
    }
    else {
      bVar1 = true;
    }
  }
  if (local_48 != 0) {
    (*DAT_102310a50)();
  }
  local_48 = 0;
  if (bVar1) {
    local_50 = 0;
    iVar3 = (*DAT_1023111f8)(param_2,1,&local_50);
    if (iVar3 < 0) {
      bVar1 = false;
      FUN_100df99c0("","TransporterWizardModel",0,"Error: Unable to get event param. error 0x%X",
                    iVar3);
      iVar2 = iVar3;
    }
    else {
      iVar3 = (*DAT_102311218)(local_50,&local_38);
      bVar1 = true;
      if (iVar3 < 0) {
        bVar1 = false;
        FUN_100df99c0("","TransporterWizardModel",0,
                      "Error: Unable to get event param value. error 0x%X",iVar3);
        iVar2 = iVar3;
      }
    }
    if (local_50 != 0) {
      (*DAT_102310a50)();
    }
    local_50 = 0;
    if (bVar1) {
      local_58 = 0;
      iVar3 = (*DAT_1023111f8)(param_2,2,&local_58);
      if (iVar3 < 0) {
        bVar1 = false;
        FUN_100df99c0("","TransporterWizardModel",0,"Error: Unable to get event param. error 0x%X",
                      iVar3);
        iVar2 = iVar3;
      }
      else {
        iVar3 = (*DAT_102311218)(local_58,&local_3c);
        bVar1 = true;
        if (iVar3 < 0) {
          bVar1 = false;
          FUN_100df99c0("","TransporterWizardModel",0,
                        "Error: Unable to get event param value. error 0x%X",iVar3);
          iVar2 = iVar3;
        }
      }
      if (local_58 != 0) {
        (*DAT_102310a50)();
      }
      local_58 = 0;
      if (bVar1) {
        FUN_1009bfa20(param_1,local_34,local_38,local_3c);
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}

