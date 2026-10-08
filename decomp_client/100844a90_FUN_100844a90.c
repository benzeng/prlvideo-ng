
int FUN_100844a90(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = CAbstractWizardActionHandler::qt_metacall();
  if (-1 < iVar1) {
    if (param_2 == 0xc) {
      if (iVar1 < 1) {
        if (*(int *)param_4[1] == 1) {
          if (DAT_10226db58 == 0) {
            DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
          }
          *(int *)*param_4 = DAT_10226db58;
        }
        else {
          *(undefined4 *)*param_4 = 0xffffffff;
        }
      }
    }
    else {
      if (param_2 != 0) {
        return iVar1;
      }
      if (iVar1 < 1) {
        FUN_100603990(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      }
    }
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}

