
void FUN_100995a00(long param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = *(char **)(param_1 + 0x10);
  if (pcVar1 != (char *)0x0) {
    if (pcVar1[2] != '\0') {
      iVar2 = (*DAT_102310a38)();
      if (iVar2 < 0) {
        FUN_100df99c0("","TransporterWizardModel",0,
                      "Error : PTA API deinit failed with error code : %.8X");
      }
      else {
        pcVar1[2] = '\0';
      }
    }
    if ((pcVar1[1] != '\0') && (*pcVar1 != '\0')) {
      iVar2 = FUN_1009c1c20();
      if (iVar2 == 0) {
        FUN_100df99c0("","TransporterWizardModel",0,"Error : PTA API dll unload failed.");
      }
    }
    operator_delete(pcVar1);
    return;
  }
  return;
}

