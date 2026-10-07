
undefined1 FUN_1000e2b60(long *param_1,undefined8 param_2,byte param_3,QByteArray *param_4)

{
  QString QVar1;
  QArrayData *pQVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  byte local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  byte local_38;
  undefined1 local_29;
  
  if (*(int *)(*param_1 + 4) == 0) {
    FUN_1008e3970("","vm",0,"AddEfiVar: Empty variable name. Add ignored");
    return 0;
  }
  local_58 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_50 = param_3;
  QByteArray::operator=((QByteArray *)&local_58,param_4);
  FUN_1007d6a70(&local_68,param_2);
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_1;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_29 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000e2c01;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1000e2c01:
  if (DAT_1011c3780 != (undefined8 *)0x0) {
    puVar3 = DAT_1011c3780;
    puVar6 = &DAT_1011c3780;
    do {
      while (puVar5 = puVar3, cVar4 = operator<((QString *)(puVar5 + 4),&local_60), cVar4 == '\0') {
        puVar6 = puVar5;
        puVar3 = (undefined8 *)*puVar5;
        if ((undefined8 *)*puVar5 == (undefined8 *)0x0) goto LAB_1000e2cd8;
      }
      puVar3 = (undefined8 *)puVar5[1];
    } while ((undefined8 *)puVar5[1] != (undefined8 *)0x0);
LAB_1000e2cd8:
    if (((undefined8 **)puVar6 != &DAT_1011c3780) &&
       (cVar4 = operator<(&local_60,(QString *)(puVar6 + 4)), cVar4 == '\0')) {
      if ((*(byte *)(puVar6 + 6) & 1) != 0) {
        DAT_1011b6d28 =
             DAT_1011b6d28 + ((*(int *)(puVar6[4] + 4) * -2 + -0x16) - *(int *)(puVar6[5] + 4));
      }
      FUN_1000e85b0(&DAT_1011c3778,puVar6);
    }
  }
  pQVar2 = local_58;
  QVar1.field0_0x0 = local_60.field0_0x0;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_29 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_29 = *(int *)local_58 != 0;
    UNLOCK();
  }
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_29 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_29 = *(int *)local_58 != 0;
    UNLOCK();
  }
  local_48 = (QArrayData *)local_60.field0_0x0;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_29 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  local_40 = local_58;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_29 = *(int *)local_58 != 0;
    UNLOCK();
  }
  local_38 = local_50;
  FUN_1000e8a70(&DAT_1011c3778,&local_48);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000e2de9;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1000e2de9:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000e2e19;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000e2e19:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000e2e44;
    }
    QArrayData::deallocate(pQVar2,1,8);
  }
LAB_1000e2e44:
  if (*(int *)QVar1.field0_0x0 != -1) {
    if (*(int *)QVar1.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar1.field0_0x0 = *(int *)QVar1.field0_0x0 + -1;
      local_29 = *(int *)QVar1.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000e2e71;
    }
    QArrayData::deallocate((QArrayData *)QVar1.field0_0x0,2,8);
  }
LAB_1000e2e71:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000e2e9c;
    }
    QArrayData::deallocate(pQVar2,1,8);
  }
LAB_1000e2e9c:
  if (*(int *)QVar1.field0_0x0 != -1) {
    if (*(int *)QVar1.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar1.field0_0x0 = *(int *)QVar1.field0_0x0 + -1;
      local_29 = *(int *)QVar1.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000e2ec9;
    }
    QArrayData::deallocate((QArrayData *)QVar1.field0_0x0,2,8);
  }
LAB_1000e2ec9:
  if ((param_3 & 1) != 0) {
    DAT_1011b6d28 =
         DAT_1011b6d28 + 0x16 + *(int *)(local_60.field0_0x0 + 4) * 2 + *(int *)(local_58 + 4);
  }
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000e2f21;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1000e2f21:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return 1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_58,1,8);
  }
  return 1;
}

