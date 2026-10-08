
QWidget * FUN_100360930(undefined8 param_1,double param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  QWidget *pQVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  int *local_50;
  long *local_48;
  long *local_40;
  undefined4 local_38;
  int *local_30;
  undefined1 local_21;
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001548f0(uVar4,param_3);
  pQVar6 = (QWidget *)0x0;
  if (lVar5 == 0) {
    return (QWidget *)0x0;
  }
  uVar4 = FUN_10018c280(lVar5);
  uVar4 = FUN_100319d40(uVar4);
  FUN_10035ba90(&local_30,uVar4);
  FUN_10006b440(&local_50,&local_30);
  local_48 = (long *)(local_50 + (long)local_50[2] * 2 + 4);
  local_40 = (long *)(local_50 + (long)local_50[3] * 2 + 4);
  if (local_50[2] != local_50[3]) {
    iVar7 = 1;
    do {
      local_38 = 1;
      lVar5 = *(long *)*local_48;
      pQVar6 = (QWidget *)0x0;
      if ((lVar5 != 0) && (pQVar6 = (QWidget *)0x0, *(int *)(lVar5 + 4) != 0)) {
        pQVar6 = (QWidget *)((long *)*local_48)[1];
      }
      dVar8 = (double)WidgetUtils::cursorPos();
      dVar9 = param_2;
      if ((pQVar6 != (QWidget *)0x0) &&
         (cVar1 = WidgetUtils::isWidgetUnderMouse(pQVar6), cVar1 != '\0')) {
        iVar2 = MacUtils::getWindowNumber(pQVar6);
        iVar3 = MacUtils::getWindowAtPoint(dVar8,param_2);
        dVar9 = param_2;
        if (iVar2 == iVar3) goto LAB_100360a3d;
      }
      local_48 = local_48 + 1;
      param_2 = dVar9;
    } while (local_48 != local_40);
  }
  local_38 = 1;
  iVar7 = 2;
LAB_100360a3d:
  if (*local_50 != -1) {
    if (*local_50 != 0) {
      LOCK();
      *local_50 = *local_50 + -1;
      local_21 = *local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100360a67;
    }
    FUN_10006b5d0(&local_50,local_50);
  }
LAB_100360a67:
  if (iVar7 == 2) {
    pQVar6 = (QWidget *)0x0;
  }
  if (*local_30 != -1) {
    if (*local_30 != 0) {
      LOCK();
      *local_30 = *local_30 + -1;
      UNLOCK();
      if (*local_30 != 0) {
        return pQVar6;
      }
      local_21 = 0;
    }
    FUN_10006b5d0(&local_30,local_30);
  }
  return pQVar6;
}

