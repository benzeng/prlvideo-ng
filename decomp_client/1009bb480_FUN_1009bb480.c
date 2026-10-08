
int FUN_1009bb480(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long local_30;
  undefined4 local_24;
  
  local_30 = 0;
  iVar2 = (*DAT_1023111f8)(param_2,0,&local_30);
  if (iVar2 < 0) {
    bVar1 = false;
    FUN_100df99c0("","TransporterWizardModel",0,"Error: Unable to get event param. error 0x%X",iVar2
                 );
  }
  else {
    iVar2 = (*DAT_102311218)(local_30,&local_24);
    if (iVar2 < 0) {
      bVar1 = false;
      FUN_100df99c0("","TransporterWizardModel",0,
                    "Error: Unable to get event param value. error 0x%X",iVar2);
    }
    else {
      bVar1 = true;
    }
  }
  if (local_30 != 0) {
    (*DAT_102310a50)();
  }
  local_30 = 0;
  if (bVar1) {
    FUN_1009bfa90(param_1,local_24);
    iVar2 = 0;
  }
  return iVar2;
}

