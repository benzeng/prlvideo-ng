
undefined8 FUN_100573480(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  QArrayData *local_50;
  QArrayData *local_48;
  undefined1 local_40 [39];
  undefined1 local_19;
  
  local_48 = (QArrayData *)*param_2;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_19 = *(int *)local_48 != 0;
    UNLOCK();
  }
  FUN_1006ee2c0(local_40,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005734e3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005734e3:
  cVar1 = FUN_1006edb20(local_40);
  uVar2 = 0;
  if (cVar1 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Impersonisation for username \"%s\" failed.",
                  local_50 + *(long *)(local_50 + 0x10));
    uVar2 = 0x80021060;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_19 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100573559;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
LAB_100573559:
  FUN_1006ee7c0(local_40);
  return uVar2;
}

