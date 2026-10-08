
void FUN_100cd1100(long param_1,byte param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((param_2 & 0x10) == 0) {
    if ((param_2 & 0x20) != 0) {
      plVar3 = *(long **)(param_1 + 0x60);
      lVar1 = *plVar3;
      uVar2 = 0x71;
      goto LAB_100cd113e;
    }
  }
  else {
    plVar3 = *(long **)(param_1 + 0x60);
    lVar1 = *plVar3;
    uVar2 = 0x40;
LAB_100cd113e:
    (**(code **)(lVar1 + 200))(plVar3,uVar2,param_3);
  }
  if ((param_2 & 4) == 0) {
    if ((param_2 & 8) != 0) {
      plVar3 = *(long **)(param_1 + 0x60);
      lVar1 = *plVar3;
      uVar2 = 0x3e;
      goto LAB_100cd1170;
    }
  }
  else {
    plVar3 = *(long **)(param_1 + 0x60);
    lVar1 = *plVar3;
    uVar2 = 0x32;
LAB_100cd1170:
    (**(code **)(lVar1 + 200))(plVar3,uVar2,param_3);
  }
  if ((param_2 & 1) == 0) {
    if ((param_2 & 2) != 0) {
      plVar3 = *(long **)(param_1 + 0x60);
      lVar1 = *plVar3;
      uVar2 = 0x6d;
      goto LAB_100cd11a2;
    }
  }
  else {
    plVar3 = *(long **)(param_1 + 0x60);
    lVar1 = *plVar3;
    uVar2 = 0x25;
LAB_100cd11a2:
    (**(code **)(lVar1 + 200))(plVar3,uVar2,param_3);
  }
  if ((param_2 & 0x40) == 0) {
    if ((param_2 & 0x80) == 0) goto LAB_100cd11da;
    plVar3 = *(long **)(param_1 + 0x60);
    lVar1 = *plVar3;
    uVar2 = 0x74;
  }
  else {
    plVar3 = *(long **)(param_1 + 0x60);
    lVar1 = *plVar3;
    uVar2 = 0x73;
  }
  (**(code **)(lVar1 + 200))(plVar3,uVar2,param_3);
LAB_100cd11da:
  if (param_2 != 0) {
    FUN_100db8d20(0x14);
    return;
  }
  return;
}

