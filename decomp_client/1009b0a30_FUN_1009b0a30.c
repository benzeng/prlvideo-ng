
void FUN_1009b0a30(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined4 local_54;
  QArrayData *local_50;
  int local_44;
  long local_40;
  undefined1 local_31;
  
  local_40 = 0;
  iVar2 = (*DAT_102311148)(*param_2,&local_40);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "Error : Unable to get sender endpoint info error 0x%X",iVar2);
    goto LAB_1009b0cfd;
  }
  local_44 = 0;
  iVar2 = (*DAT_102311100)(local_40,&local_44);
  puVar1 = PTR_shared_null_1021e1288;
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "Error : Unable to get sender endpoint info type error 0x%X",iVar2);
    goto LAB_1009b0cfd;
  }
  if (local_44 != 2) goto LAB_1009b0cfd;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  local_54 = 0;
  iVar2 = FUN_10099dc60(DAT_102311158,param_2,&local_50);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "Error : Unable to get extract sender listen address error 0x%X",iVar2);
  }
  else {
    iVar2 = (*DAT_102311160)(*param_2,&local_54);
    if (iVar2 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "Error : Unable to get extract sender listen port error 0x%X",iVar2);
    }
    else {
      local_60 = (QArrayData *)puVar1;
      local_68 = (QArrayData *)puVar1;
      iVar2 = FUN_10099dc60(DAT_102311168,param_3,&local_60);
      if (iVar2 < 0) {
        FUN_100df99c0("","TransporterWizardModel",0,
                      "Error : Unable to get sender passcode data digest error 0x%X",iVar2);
      }
      else {
        iVar2 = FUN_10099dc60(DAT_102311170,param_3,&local_68);
        if (iVar2 < 0) {
          FUN_100df99c0("","TransporterWizardModel",0,
                        "Error : Unable to get sender passcode data salt error 0x%X",iVar2);
        }
        else if (*(char *)(param_1 + 99) == '\0') {
          FUN_1009af1d0(param_1,&local_50,local_54,&local_60,&local_68);
        }
        else if (0 < DAT_10230ffd0) {
          FUN_100df99c0("","TransporterWizardModel",1,
                        "Ignoring \'connect with the passcode\' request, connection is already in progress."
                       );
        }
      }
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009b0c9d;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_1009b0c9d:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009b0ccd;
        }
        QArrayData::deallocate(local_60,2,8);
      }
    }
  }
LAB_1009b0ccd:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b0cfd;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009b0cfd:
  if (local_40 != 0) {
    (*DAT_102310a50)();
  }
  return;
}

