
int FUN_1009bab20(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined2 local_3c [2];
  undefined2 local_38 [2];
  undefined4 local_34;
  
  local_58 = 0;
  iVar2 = (*DAT_1023111f8)(param_2,0,&local_58);
  if (iVar2 < 0) {
    bVar1 = false;
    FUN_100df99c0("","TransporterWizardModel",0,"Error: Unable to get event param. error 0x%X",iVar2
                 );
  }
  else {
    iVar2 = (*DAT_102311218)(local_58,&local_34);
    if (iVar2 < 0) {
      bVar1 = false;
      FUN_100df99c0("","TransporterWizardModel",0,
                    "Error: Unable to get event param value. error 0x%X",iVar2);
    }
    else {
      bVar1 = true;
    }
  }
  if (local_58 != 0) {
    (*DAT_102310a50)();
  }
  local_58 = 0;
  if (bVar1) {
    local_60 = 0;
    iVar3 = (*DAT_1023111f8)(param_2,1,&local_60);
    if (iVar3 < 0) {
      bVar1 = false;
      FUN_100df99c0("","TransporterWizardModel",0,"Error: Unable to get event param. error 0x%X",
                    iVar3);
      iVar2 = iVar3;
    }
    else {
      iVar3 = (*DAT_102311210)(local_60,local_38);
      bVar1 = true;
      if (iVar3 < 0) {
        bVar1 = false;
        FUN_100df99c0("","TransporterWizardModel",0,
                      "Error: Unable to get event param value. error 0x%X",iVar3);
        iVar2 = iVar3;
      }
    }
    if (local_60 != 0) {
      (*DAT_102310a50)();
    }
    local_60 = 0;
    if (bVar1) {
      local_68 = 0;
      iVar3 = (*DAT_1023111f8)(param_2,2,&local_68);
      if (iVar3 < 0) {
        bVar1 = false;
        FUN_100df99c0("","TransporterWizardModel",0,"Error: Unable to get event param. error 0x%X",
                      iVar3);
        iVar2 = iVar3;
      }
      else {
        iVar3 = (*DAT_102311210)(local_68,local_3c);
        bVar1 = true;
        if (iVar3 < 0) {
          bVar1 = false;
          FUN_100df99c0("","TransporterWizardModel",0,
                        "Error: Unable to get event param value. error 0x%X",iVar3);
          iVar2 = iVar3;
        }
      }
      if (local_68 != 0) {
        (*DAT_102310a50)();
      }
      local_68 = 0;
      if (bVar1) {
        local_70 = 0;
        iVar3 = (*DAT_1023111f8)(param_2,3,&local_70);
        if (iVar3 < 0) {
          bVar1 = false;
          FUN_100df99c0("","TransporterWizardModel",0,"Error: Unable to get event param. error 0x%X"
                        ,iVar3);
          iVar2 = iVar3;
        }
        else {
          iVar3 = (*DAT_102311220)(local_70,&local_48);
          bVar1 = true;
          if (iVar3 < 0) {
            bVar1 = false;
            FUN_100df99c0("","TransporterWizardModel",0,
                          "Error: Unable to get event param value. error 0x%X",iVar3);
            iVar2 = iVar3;
          }
        }
        if (local_70 != 0) {
          (*DAT_102310a50)();
        }
        local_70 = 0;
        if (bVar1) {
          local_78 = 0;
          iVar3 = (*DAT_1023111f8)(param_2,4,&local_78);
          if (iVar3 < 0) {
            bVar1 = false;
            FUN_100df99c0("","TransporterWizardModel",0,
                          "Error: Unable to get event param. error 0x%X",iVar3);
            iVar2 = iVar3;
          }
          else {
            iVar3 = (*DAT_102311220)(local_78,&local_50);
            bVar1 = true;
            if (iVar3 < 0) {
              bVar1 = false;
              FUN_100df99c0("","TransporterWizardModel",0,
                            "Error: Unable to get event param value. error 0x%X",iVar3);
              iVar2 = iVar3;
            }
          }
          if (local_78 != 0) {
            (*DAT_102310a50)();
          }
          local_78 = 0;
          if (bVar1) {
            FUN_1009bf930(param_1,local_34,local_38[0],local_3c[0],local_48,local_50);
            iVar2 = 0;
          }
        }
      }
    }
  }
  return iVar2;
}

