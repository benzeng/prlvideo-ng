
int FUN_10068e420(long *param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  long local_38;
  
  bVar4 = 0;
  lVar7 = 0;
  if (param_2 != 1) {
    lVar7 = *param_1;
    if ((*(byte *)((long)param_1 + *(long *)(lVar7 + -0x18) + 0x18) & 2) != 0) {
      cVar5 = (**(code **)(*(long *)(*(long *)(lVar7 + -0x18) + (long)param_1) + 0x150))();
      bVar4 = 0;
      lVar7 = 0;
      if (cVar5 != '\0') goto LAB_10068e4e9;
      lVar7 = *param_1;
    }
    local_38 = 0;
    lVar7 = *(long *)(lVar7 + -0x18);
    iVar6 = FUN_100685960(lVar7 + 0x10 + (long)param_1,*(uint *)(lVar7 + 0x18 + (long)param_1) | 2,0
                          ,*(undefined8 *)(lVar7 + 0x40 + (long)param_1),&local_38);
    if (iVar6 < 0) {
      (**(code **)(*param_1 + 0xf0))(param_1);
      return -0x7ffdefd9;
    }
    LOCK();
    plVar1 = (long *)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
    lVar7 = *plVar1;
    *plVar1 = local_38;
    UNLOCK();
    bVar4 = 1;
  }
LAB_10068e4e9:
  local_68 = 0;
  uStack_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = param_7;
  iVar6 = (**(code **)(*param_1 + 0x1a0))
                    (param_1,param_2,0,0,param_3,param_4,param_5,param_6,&local_68);
  if (iVar6 < 0) {
    (**(code **)(*param_1 + 0xf0))(param_1);
  }
  if ((bool)(bVar4 & lVar7 != 0)) {
    LOCK();
    plVar1 = (long *)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
    plVar2 = (long *)*plVar1;
    *plVar1 = lVar7;
    UNLOCK();
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if (param_1[0x301e] != 0) {
    lVar7 = param_1[0x301c];
    plVar1 = (long *)param_1[0x301d];
    lVar3 = *plVar1;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar7 + 8);
    **(long **)(lVar7 + 8) = lVar3;
    param_1[0x301e] = 0;
    while (plVar1 != param_1 + 0x301c) {
      plVar2 = (long *)plVar1[1];
      operator_delete(plVar1);
      plVar1 = plVar2;
    }
  }
  return iVar6;
}

