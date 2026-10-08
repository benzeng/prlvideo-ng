
QImage * FUN_100354220(QImage *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0;
  if ((*(long *)(param_2 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_2 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
  }
  uVar2 = FUN_100323e00(uVar2);
  lVar3 = FUN_100319390(uVar2);
  if (lVar3 == 0) {
LAB_1003542b1:
    QImage::QImage(param_1,(QImage *)(param_2 + 0x20));
  }
  else {
    iVar1 = FUN_10018a9d0(lVar3);
    if (iVar1 != 0x30000009) {
      iVar1 = FUN_10018a9d0(lVar3);
      if (iVar1 != 0x30000010) {
        iVar1 = FUN_10018a9d0(lVar3);
        if (iVar1 != 0x30000006) goto LAB_1003542b1;
      }
    }
    uVar2 = 0;
    if ((*(long *)(param_2 + 0x10) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_2 + 0x10) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_2 + 0x18);
    }
    FUN_100326550(param_1,uVar2,param_2 + 0x50);
  }
  return param_1;
}

