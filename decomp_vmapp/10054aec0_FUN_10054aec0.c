
undefined1 FUN_10054aec0(long *param_1)

{
  char cVar1;
  undefined1 uVar2;
  QArrayData *local_e0;
  undefined1 local_d8 [152];
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_30 [15];
  undefined1 local_21;
  
  FUN_100761480(local_30);
  cVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
    FUN_1008e3970("","TransMem",0,"[CGuestMemoryAnonymous::clone_file] the mapping is not open");
    goto LAB_10054b0d8;
  }
  QString::toUtf8();
  cVar1 = FUN_100761540(local_30,local_38 + *(long *)(local_38 + 0x10),0,0,1,0,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10054af57;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_10054af57:
  if (cVar1 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,"[CGuestMemoryAnonymous::clone_file] failed to open file %s",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 == -1) {
      uVar2 = 0;
    }
    else {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) {
          uVar2 = 0;
          goto LAB_10054b0d8;
        }
      }
      QArrayData::deallocate(local_40,1,8);
      uVar2 = 0;
    }
    goto LAB_10054b0d8;
  }
  FUN_10054bd60(local_d8,param_1 + 0xd,param_1[2],param_1[3],param_1[6]);
  cVar1 = FUN_10054c040(local_d8);
  if ((cVar1 == '\0') || (cVar1 = FUN_10054d010(local_d8,param_1), cVar1 == '\0')) {
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,"[CGuestMemoryAnonymous::clone_file] failed to save file %s",
                  local_e0 + *(long *)(local_e0 + 0x10));
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_21 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10054b091;
      }
      QArrayData::deallocate(local_e0,1,8);
    }
LAB_10054b091:
    FUN_10054eed0(local_d8);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    FUN_10054eed0(local_d8);
  }
  FUN_100546d50(local_d8);
LAB_10054b0d8:
  FUN_100761500(local_30);
  return uVar2;
}

