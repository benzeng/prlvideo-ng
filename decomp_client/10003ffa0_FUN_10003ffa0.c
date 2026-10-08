
undefined8 * FUN_10003ffa0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  piVar1 = (int *)*param_2;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_19 = *piVar1 != 0;
    UNLOCK();
  }
  local_28 = (QArrayData *)QString::fromAscii_helper("&",1);
  local_30 = (QArrayData *)QString::fromAscii_helper("&amp;",5);
  QString::replace(param_1,&local_28,&local_30,1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100040034;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100040034:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100040064;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100040064:
  local_38 = (QArrayData *)QString::fromAscii_helper("<",1);
  local_40 = (QArrayData *)QString::fromAscii_helper("&lt;",4);
  QString::replace(param_1,&local_38,&local_40,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000400d3;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000400d3:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100040103;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100040103:
  local_48 = (QArrayData *)QString::fromAscii_helper(">",1);
  local_50 = (QArrayData *)QString::fromAscii_helper("&gt;",4);
  QString::replace(param_1,&local_48,&local_50,1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100040172;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100040172:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000401a2;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000401a2:
  local_58 = (QArrayData *)QString::fromAscii_helper("\"",1);
  local_60 = (QArrayData *)QString::fromAscii_helper("&quot;",6);
  QString::replace(param_1,&local_58,&local_60,1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100040211;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100040211:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100040241;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100040241:
  local_68 = (QArrayData *)QString::fromAscii_helper("\'",1);
  local_70 = (QArrayData *)QString::fromAscii_helper("&apos;",6);
  QString::replace(param_1,&local_68,&local_70,1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000402b0;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1000402b0:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
  return param_1;
}

