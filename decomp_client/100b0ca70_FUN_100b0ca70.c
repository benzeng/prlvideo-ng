
long * FUN_100b0ca70(undefined8 param_1,uint param_2,int param_3,int *param_4,undefined8 param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  QArrayData *local_48;
  int local_3c;
  int local_38;
  undefined1 local_31;
  
  local_38 = 0;
  local_3c = param_3;
  if (2 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","dimg",3,"Open image %s. Type %u",local_48 + *(long *)(local_48 + 0x10),param_3
                 );
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b0cb0e;
      }
      QArrayData::deallocate(local_48,1,8);
    }
  }
LAB_100b0cb0e:
  if (param_3 == 100) {
    local_38 = FUN_100b0cc60(param_1,&local_3c);
    plVar3 = (long *)0x0;
    if (local_38 < 0) goto LAB_100b0cbf7;
  }
  iVar1 = local_3c;
  plVar2 = (long *)FUN_100b0cd70(local_3c,param_5,&local_38);
  plVar3 = (long *)0x0;
  if (plVar2 == (long *)0x0) goto LAB_100b0cbf7;
  local_38 = (**(code **)(*plVar2 + 0x18))(plVar2,param_1,param_2);
  if ((((param_2 & 2) == 0) && (local_38 == -0x7ffdefb9)) && (iVar1 == 2)) {
    local_38 = (**(code **)(*plVar2 + 0x18))(plVar2,param_1,param_2 | 2);
    if (-1 < local_38) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
      local_38 = (**(code **)(*plVar2 + 0x18))(plVar2,param_1,param_2);
      goto LAB_100b0cbb6;
    }
    local_38 = -0x7ffdefb9;
  }
  else {
LAB_100b0cbb6:
    plVar3 = plVar2;
    if (-1 < local_38) goto LAB_100b0cbf7;
  }
  FUN_100df99c0("","dimg",0,"Error 0x%x when opening the disk. Releasing image.",local_38);
  (**(code **)(*plVar2 + 0x20))(plVar2);
  plVar3 = (long *)0x0;
LAB_100b0cbf7:
  if (param_4 != (int *)0x0) {
    *param_4 = local_38;
  }
  return plVar3;
}

