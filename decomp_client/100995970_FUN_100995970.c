
void FUN_100995970(undefined2 *param_1,undefined8 param_2)

{
  int iVar1;
  
  *param_1 = 0x100;
  *(undefined1 *)(param_1 + 1) = 0;
  iVar1 = FUN_1009c1ab0(param_2);
  if (iVar1 == 0) {
    FUN_100df99c0("","TransporterWizardModel",0,"Error : PTA API dll \'%s\' load failed.",param_2);
    return;
  }
  iVar1 = FUN_1009c27e0();
  if (iVar1 != 0) {
    *(undefined1 *)param_1 = 1;
    return;
  }
  FUN_100df99c0("","TransporterWizardModel",0,"Error : PTA API dll \'%s\' symbols resolve failed.",
                param_2);
  FUN_1009c1c20();
  return;
}

