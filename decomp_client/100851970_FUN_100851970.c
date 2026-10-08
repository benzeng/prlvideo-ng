
int FUN_100851970(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = CAppUpdateWorker::qt_metacall();
  if (-1 < iVar1) {
    if (param_2 == 0xc) {
      if (iVar1 < 3) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) {
        return iVar1;
      }
      if (iVar1 < 3) {
        FUN_100851870(param_1,0,iVar1,param_4);
      }
    }
    iVar1 = iVar1 + -3;
  }
  return iVar1;
}

