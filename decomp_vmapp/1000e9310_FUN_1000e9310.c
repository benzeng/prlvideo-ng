
bool FUN_1000e9310(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return false;
  }
  cVar2 = FUN_1000b2290(*(undefined8 *)(param_1 + 0x18));
  if (cVar2 == '\0') {
    cVar2 = FUN_1000e96d0(*(undefined8 *)(param_1 + 0x28),param_2);
    goto LAB_1000e942d;
  }
  local_38 = (QArrayData *)PTR_shared_null_100ba20d0;
  cVar2 = FUN_1000e95f0(*(undefined8 *)(param_1 + 0x28),&local_38);
  if ((cVar2 != '\0') &&
     (iVar3 = FUN_1000b29f0(*(undefined8 *)(param_1 + 0x18),param_2,&local_38), iVar3 < 0)) {
    QString::toUtf8();
    FUN_1008e3970("","vm",0,"Unable to encrypt screenshot in %s by error %#x",
                  local_40 + *(long *)(local_40 + 0x10),iVar3);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000e93e5;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_1000e93e5:
    cVar2 = '\0';
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000e942d;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1000e942d:
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
    if (plVar1[1] != 0) {
      _CFRelease();
    }
    if (*plVar1 != 0) {
      _CFRelease();
    }
    operator_delete(plVar1);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return cVar2 != '\0';
}

