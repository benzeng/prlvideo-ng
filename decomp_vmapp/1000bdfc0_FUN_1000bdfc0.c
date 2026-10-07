
undefined8 FUN_1000bdfc0(long param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x18);
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) &&
     (cVar2 = FUN_10006b7e0(*(undefined8 *)(param_1 + 0xf8),*(long *)(param_1 + 0x48) + 0x18),
     cVar2 == '\0')) {
    return 0x80000044;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x110);
  FUN_1005600d0(uVar3,(int *)(param_1 + 0x107d0));
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getHomePath();
  FUN_10055db20(&local_38,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000be075;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000be075:
  cVar2 = FUN_10055f350(&local_38);
  if ((cVar2 != '\0') && (*(int *)(param_1 + 0x107d0) != 0)) {
    FUN_1008e3970("","vm",0,
                  "Sav file was dropped due it was detected that to HDD was externally changed");
    FUN_10055f420(&local_38);
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000be0df;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1000be0df:
  FUN_10055fef0(uVar3,0);
  FUN_10055fd10(uVar3,0);
  uVar3 = FUN_1000cc520(*(undefined8 *)(param_1 + 0x109c8),*(long *)(param_1 + 0x48) + 0x18);
  return uVar3;
}

