
void FUN_10019c960(undefined8 param_1,QWidget *param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  if (param_2 != (QWidget *)0x0) {
    uVar1 = FUN_1001d50a0();
    cVar2 = FUN_1001d50e0(uVar1);
    if (cVar2 == '\0') {
      QApplication::alert(param_2,1000);
      return;
    }
  }
  return;
}

