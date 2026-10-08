
bool FUN_100991af0(long param_1)

{
  int iVar1;
  int local_1c;
  
  iVar1 = (*DAT_102310bf0)(*(undefined8 *)(param_1 + 0x30),&local_1c);
  if (iVar1 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,"Error: Unable to get migration type. error 0x%X",
                  iVar1);
  }
  return iVar1 >= 0 && local_1c == 3;
}

