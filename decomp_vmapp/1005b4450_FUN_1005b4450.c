
int FUN_1005b4450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long *plVar2;
  char *pcVar3;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  int local_30;
  undefined1 local_29;
  
  local_30 = 0;
  plVar2 = (long *)FUN_10059ac80(param_1,0x80401,&local_30);
  if (plVar2 == (long *)0x0) {
    FUN_1008e3970("","vdisk",0,"Disk open failed, err = 0x%X",local_30);
    return local_30;
  }
  cVar1 = (**(code **)(*plVar2 + 0xd8))(plVar2);
  if (cVar1 == '\0') {
    pcVar3 = ">>>> Skip building for plain disk";
  }
  else {
    cVar1 = FUN_10057d550(plVar2);
    if (cVar1 == '\0') {
      FUN_1005b1b60(plVar2,param_2);
      FUN_1007d6a70(&local_40,param_2);
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,">>>> Delete cache file for %s",
                    local_38 + *(long *)(local_38 + 0x10));
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          local_29 = *(int *)local_38 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005b457b;
        }
        QArrayData::deallocate(local_38,1,8);
      }
LAB_1005b457b:
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_29 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005b45ab;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_1005b45ab:
      local_30 = FUN_1005b4780(param_2,param_3,plVar2);
      if (-1 < local_30) goto LAB_1005b4677;
      FUN_1007d6a70(&local_50,param_2);
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,"Rebuild cache file for %s failed, err = 0x%X",
                    local_48 + *(long *)(local_48 + 0x10),local_30);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_29 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005b463c;
        }
        QArrayData::deallocate(local_48,1,8);
      }
LAB_1005b463c:
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_29 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005b466c;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_1005b466c:
      FUN_1005b1b60(plVar2,param_2);
      goto LAB_1005b4677;
    }
    pcVar3 = ">>>> Skip building whereas inc. backup disabled";
  }
  FUN_1008e3970("","vdisk",0,pcVar3);
LAB_1005b4677:
  (**(code **)(*plVar2 + 0x10))(plVar2);
  return local_30;
}

