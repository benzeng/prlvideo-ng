
void FUN_100369040(QObject *param_1,QEvent *param_2,long param_3)

{
  ushort uVar1;
  QEvent *pQVar2;
  ulong uVar3;
  undefined7 uVar4;
  
  if (param_1[0x8c] == (QObject)0x0) goto LAB_100369132;
  uVar1 = *(ushort *)(param_3 + 0x10);
  if (uVar1 < 0xb3) {
    if (uVar1 - 0xd < 2) {
LAB_1003690ed:
      pQVar2 = (QEvent *)0x0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (pQVar2 = (QEvent *)0x0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        pQVar2 = *(QEvent **)(param_1 + 0x20);
      }
      if (pQVar2 != param_2) {
        uVar4 = (undefined7)((ulong)pQVar2 >> 8);
        uVar3 = CONCAT71(uVar4,1);
        if (*(int *)(param_1 + 0x84) != 0) {
          uVar3 = CONCAT71(uVar4,*(int *)(param_1 + 0x80) == 0);
        }
        FUN_100369150(param_1,uVar3 & 0xff,uVar1 == 0xe,uVar3);
      }
      goto LAB_100369132;
    }
    if (uVar1 != 0x11) {
      if (uVar1 == 0x12) {
        pQVar2 = (QEvent *)0x0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (pQVar2 = (QEvent *)0x0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          pQVar2 = *(QEvent **)(param_1 + 0x20);
        }
        if (pQVar2 == param_2) {
          FUN_100369db0(param_1);
        }
      }
      goto LAB_100369132;
    }
  }
  else if (uVar1 != 0xcb) {
    if (uVar1 != 0xb3) goto LAB_100369132;
    goto LAB_1003690ed;
  }
  pQVar2 = (QEvent *)0x0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (pQVar2 = (QEvent *)0x0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
    pQVar2 = *(QEvent **)(param_1 + 0x20);
  }
  if (pQVar2 == param_2) {
    QTimer::singleShot(0,*(QObject **)(param_1 + 0x10),"1refresh()");
  }
LAB_100369132:
  QObject::eventFilter(param_1,param_2);
  return;
}

