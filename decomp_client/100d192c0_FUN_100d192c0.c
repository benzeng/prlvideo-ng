
undefined8 FUN_100d192c0(long *param_1,long *param_2)

{
  code *pcVar1;
  char cVar2;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  int local_54;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  cVar2 = (**(code **)(*param_2 + 0x10))(param_2,&local_30);
  if (cVar2 != '\0') {
    pcVar1 = *(code **)(*param_1 + 0x28);
    local_38 = (QArrayData *)QString::fromAscii_helper("vmname",6);
    local_40 = local_30;
    if (1 < *(int *)local_30 + 1U) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
    }
    (*pcVar1)(param_1,&local_38,&local_40);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d19369;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100d19369:
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d19399;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_100d19399:
  cVar2 = (**(code **)(*param_2 + 0x28))(param_2,&local_30);
  if (cVar2 != '\0') {
    pcVar1 = *(code **)(*param_1 + 0x28);
    local_48 = (QArrayData *)QString::fromAscii_helper("guestos",7);
    local_50 = local_30;
    if (1 < *(int *)local_30 + 1U) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
    }
    (*pcVar1)(param_1,&local_48,&local_50);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d19424;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100d19424:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d19454;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100d19454:
  cVar2 = (**(code **)(*param_2 + 0x30))(param_2,&local_54);
  if (cVar2 != '\0') {
    pcVar1 = *(code **)(*param_1 + 0x28);
    local_60 = (QArrayData *)QString::fromAscii_helper("memsize",7);
    QString::number((uint)&local_68,local_54);
    (*pcVar1)(param_1,&local_60,&local_68);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_21 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d194d7;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100d194d7:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_21 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d19507;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
LAB_100d19507:
  cVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  if (cVar2 == '\0') goto LAB_100d195b9;
  pcVar1 = *(code **)(*param_1 + 0x28);
  local_70 = (QArrayData *)QString::fromAscii_helper("firmware",8);
  local_78 = (QArrayData *)QString::fromAscii_helper("efi",3);
  (*pcVar1)(param_1,&local_70,&local_78);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d19589;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100d19589:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d195b9;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100d195b9:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return 0x8000000;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return 0x8000000;
}

