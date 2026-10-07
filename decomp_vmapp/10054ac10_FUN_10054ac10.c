
undefined1 FUN_10054ac10(long *param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  QArrayData *local_d8;
  undefined1 local_d0 [152];
  QArrayData *local_38;
  undefined1 local_29;
  
  if ((char)param_1[0x17] == '\0') {
    return 1;
  }
  plVar1 = param_1 + 0xd;
  cVar2 = FUN_100761530(plVar1);
  if (cVar2 == '\0') {
    return 1;
  }
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  if (cVar2 == '\0') {
    return 1;
  }
  lVar3 = param_1[6];
  if (((lVar3 != 0) && (*(char *)(lVar3 + 0x10) == '\0')) && (*(char *)(lVar3 + 0x20) == '\0')) {
    lVar3 = FUN_1007616e0(plVar1,0,0);
    if (((lVar3 == 0) &&
        (lVar3 = param_1[2], lVar4 = FUN_100761880(plVar1,FUN_100761810,0,param_1[4],lVar3),
        lVar3 == lVar4)) &&
       (lVar3 = param_1[3], lVar4 = FUN_100761880(plVar1,FUN_100761810,0,param_1[5],lVar3),
       lVar3 == lVar4)) {
      return 1;
    }
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,"CGuestMemoryAnonymous::save_file() failed to save file %s",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 == -1) {
      return 0;
    }
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
    return 0;
  }
  FUN_10054bd60(local_d0,plVar1,param_1[2],param_1[3]);
  cVar2 = FUN_10054c040(local_d0);
  if (((cVar2 != '\0') && (cVar2 = FUN_10054d010(local_d0,param_1), cVar2 != '\0')) &&
     (cVar2 = FUN_10054eed0(local_d0), cVar2 != '\0')) {
    FUN_100546d50(local_d0);
    return 1;
  }
  QString::toUtf8();
  FUN_1008e3970("","TransMem",0,"CGuestMemoryAnonymous::save_file() failed to save file %s",
                local_d8 + *(long *)(local_d8 + 0x10));
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_29 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10054ad41;
    }
    QArrayData::deallocate(local_d8,1,8);
  }
LAB_10054ad41:
  FUN_100546d50(local_d0);
  return 0;
}

