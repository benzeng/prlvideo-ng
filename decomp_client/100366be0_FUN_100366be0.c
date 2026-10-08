
undefined8
FUN_100366be0(undefined8 param_1,undefined8 param_2,long param_3,QWidget *param_4,long param_5)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  QArrayData *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  undefined1 local_29;
  
  cVar2 = FUN_10035de90(*(undefined8 *)(param_3 + 8),0,0);
  if (cVar2 == '\0') {
    uVar4 = (**(code **)(**(long **)(param_3 + 0x18) + 0x38))
                      (*(long **)(param_3 + 0x18),param_4,param_4,0x10,0);
    if (uVar4 < 2) {
      return 0;
    }
    pcVar5 = "(!)Error: failed to grab input on mouse release.";
    uVar6 = 0;
    goto LAB_100366d95;
  }
  uVar4 = *(uint *)(param_5 + 0x50);
  if ((int)uVar4 < 0x10) {
    uVar7 = 1;
    switch(uVar4) {
    case 1:
      goto switchD_100366c31_caseD_1;
    case 2:
    case 4:
    case 8:
      goto switchD_100366c31_caseD_2;
    default:
      goto switchD_100366c31_caseD_3;
    }
  }
  if ((int)uVar4 < 0x40) {
    if ((uVar4 != 0x10) && (uVar4 != 0x20)) {
switchD_100366c31_caseD_3:
      if (DAT_10230ffd0 < 2) {
        return 0;
      }
      pcVar5 = "Failed to send mouse to VM. Unsupported mouse buttons.";
      uVar6 = 2;
LAB_100366d95:
      FUN_100df99c0("[HID_CTL]","prl_client_app",uVar6,pcVar5);
      return 0;
    }
  }
  else if ((uVar4 != 0x40) && (uVar4 != 0x80)) goto switchD_100366c31_caseD_3;
switchD_100366c31_caseD_2:
  uVar7 = uVar4;
  if (uVar4 == 2) {
    cVar2 = FUN_10035dcf0(*(undefined8 *)(param_3 + 8),0x20);
    uVar7 = 2;
    if (cVar2 != '\0') {
      FUN_10035db20(*(undefined8 *)(param_3 + 8),0x20,0);
      uVar7 = 1;
    }
  }
switchD_100366c31_caseD_1:
  FUN_10035daa0(*(long *)(param_3 + 8),~uVar7 & *(uint *)(*(long *)(param_3 + 8) + 0x80));
  local_68 = WidgetUtils::mapToGlobal(param_4,(QPointF *)(param_5 + 0x20));
  plVar1 = *(long **)(*(long *)(param_3 + 8) + 0x28);
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = param_2;
  local_38 = uVar7;
  (**(code **)(*plVar1 + 0xd0))(plVar1,&local_68,0);
  cVar2 = FUN_10035ddf0(*(undefined8 *)(param_3 + 8),param_4);
  if (cVar2 == '\0') {
    return 0;
  }
  if (*(int *)(*(long *)(param_3 + 8) + 0x80) != 0) {
    return 0;
  }
  FUN_10035da60(&local_70);
  cVar2 = FUN_100360b20(&local_70);
  if (cVar2 == '\0') {
    bVar3 = FUN_100365110(param_3);
    bVar3 = bVar3 ^ 1;
  }
  else {
    bVar3 = 0;
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100366de8;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100366de8:
  if (bVar3 != 0) {
    (**(code **)(**(long **)(param_3 + 0x18) + 0x18))(*(long **)(param_3 + 0x18),0x10,0);
  }
  return 0;
}

