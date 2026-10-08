
void FUN_100367c90(QObject *param_1,QEvent *param_2,long param_3)

{
  QEvent *pQVar1;
  undefined8 uVar2;
  
  if (((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) &&
     (*(long *)(param_1 + 0x18) != 0)) {
    pQVar1 = (QEvent *)FUN_100379860(*(undefined8 *)(param_1 + 0x20));
    if (pQVar1 == param_2) {
      if (*(short *)(param_3 + 0x10) == 0xe) {
        FUN_100367d40(param_1);
      }
      else if (*(short *)(param_3 + 0x10) == 0xc) {
        uVar2 = 0;
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
          uVar2 = *(undefined8 *)(param_1 + 0x18);
        }
        FUN_100326e00(uVar2,0);
      }
    }
    else if ((*(QEvent **)(param_1 + 0x20) == param_2) && (*(short *)(param_3 + 0x10) == 0xe)) {
      FUN_1003682f0(param_1);
    }
  }
  QObject::eventFilter(param_1,param_2);
  return;
}

