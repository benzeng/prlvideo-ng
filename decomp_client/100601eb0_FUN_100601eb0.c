
int FUN_100601eb0(long param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = QObject::qt_metacall();
  if (-1 < iVar2) {
    if (param_2 == 0xc) {
      if (iVar2 < 1) {
        if (*(int *)param_4[1] == 0) {
          *(undefined4 *)*param_4 = 2;
        }
        else {
          *(undefined4 *)*param_4 = 0xffffffff;
        }
      }
    }
    else {
      if (param_2 != 0) {
        return iVar2;
      }
      if (iVar2 < 1) {
        iVar1 = *(int *)param_4[1];
        if ((-1 < iVar1) || (*(char *)(param_1 + 0x38) == '\0')) {
          QWidget::close();
        }
        FUN_100844710(*(undefined8 *)(param_1 + 0x10),iVar1);
      }
    }
    iVar2 = iVar2 + -1;
  }
  return iVar2;
}

