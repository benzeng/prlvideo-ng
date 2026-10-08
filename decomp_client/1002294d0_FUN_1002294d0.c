
undefined8 * FUN_1002294d0(undefined8 *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  QString local_38;
  undefined1 local_29;
  
  *param_1 = PTR_shared_null_1021e15e8;
  uVar3 = 0;
  if ((*(long *)(param_2 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_2 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_2 + 0x20);
  }
  lVar2 = FUN_10015cb20(uVar3,param_2 + 0x38);
  if ((lVar2 == 0) || (cVar1 = FUN_10018ecf0(lVar2), cVar1 != '\0')) goto LAB_1002295d2;
  FUN_10018d830(&local_38,lVar2);
  cVar1 = operator==(&local_38,(QString *)(param_2 + 0x28));
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10022957b;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10022957b:
  if (cVar1 != '\0') {
    if (*(char *)(param_2 + 0x50) != '\0') {
      local_3c = 6;
      FUN_100129840(param_1,&local_3c);
    }
    local_40 = 3;
    FUN_100129840(param_1,&local_40);
    if (*(char *)(param_2 + 0x50) == '\0') {
      return param_1;
    }
    local_44 = 7;
    FUN_100129840(param_1,&local_44);
    return param_1;
  }
LAB_1002295d2:
  local_48 = 0;
  FUN_100129840(param_1,&local_48);
  cVar1 = FUN_100d80630(1);
  if (cVar1 != '\0') {
    local_4c = 2;
    FUN_100129840(param_1,&local_4c);
  }
  if (*(char *)(param_2 + 0x50) != '\0') {
    local_50 = 6;
    FUN_100129840(param_1,&local_50);
  }
  local_54 = 1;
  FUN_100129840(param_1,&local_54);
  if (*(char *)(param_2 + 0x50) != '\0') {
    local_58 = 7;
    FUN_100129840(param_1,&local_58);
  }
  if (*(int *)(param_2 + 0x4c) != 0x2714) {
    local_5c = 4;
    FUN_100129840(param_1,&local_5c);
  }
  return param_1;
}

