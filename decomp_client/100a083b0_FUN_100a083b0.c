
QPixmap * FUN_100a083b0(undefined4 param_1,undefined8 param_2)

{
  QPixmap *pQVar1;
  undefined8 uVar2;
  int in_stack_00000018;
  QPixmap local_50 [32];
  
  pQVar1 = operator_new(0x78);
  CMessageBox::CMessageBox((CMessageBox *)pQVar1,param_2,0,0xb);
  CMessageBox::setTitle((QString *)pQVar1);
  FUN_100a08080(local_50,param_1);
  CMessageBox::setIcon(pQVar1);
  QPixmap::~QPixmap(local_50);
  CMessageBox::setMessage((QString *)pQVar1);
  CMessageBox::setDescription((QString *)pQVar1);
  CMessageBox::setButton1((QString *)pQVar1);
  CMessageBox::setButton2((QString *)pQVar1);
  CMessageBox::setButton3((QString *)pQVar1);
  if (in_stack_00000018 == 0) {
    uVar2 = 1;
  }
  else if (in_stack_00000018 == 1) {
    uVar2 = 2;
  }
  else {
    if (in_stack_00000018 != 2) goto LAB_100a08493;
    uVar2 = 3;
  }
  CMessageBox::setDefaultButton(pQVar1,uVar2);
LAB_100a08493:
  CMessageBox::setAllowHide(SUB81(pQVar1,0));
  return pQVar1;
}

