
undefined8 * FUN_100770010(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  long lVar4;
  int *piVar5;
  QArrayData *local_68;
  int *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  QString local_38;
  int *local_30;
  undefined1 local_21;
  
  piVar5 = (int *)PTR_shared_null_100ba2188;
  *param_1 = PTR_shared_null_100ba2188;
  local_40 = (QArrayData *)QString::fromAscii_helper("pgrep -x %1",0xb);
  QString::arg(&local_38,&local_40,param_2,0,0x20);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10077008a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10077008a:
  if (*(int *)PTR_MacintoshVersion_100ba2170 < 10) {
    local_50 = (QArrayData *)
               QString::fromAscii_helper
                         ("/bin/bash -c \"ps aux | grep %1 | grep -v grep | awk \'{ print $2 }\'\"",
                          0x43);
    QString::arg(&local_48,&local_50,param_2,0,0x20);
    QString::operator=(&local_38,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_21 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100770104;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_100770104:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100770134;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_100770134:
  local_58 = (QArrayData *)PTR_shared_null_100ba20d0;
  cVar3 = FUN_100770460(&local_38,&local_58,60000,0,0);
  if (cVar3 != '\0') {
    local_68 = (QArrayData *)QString::fromAscii_helper("\n",1);
    QString::split(&local_60,&local_58,&local_68,1,1);
    if (local_60 != (int *)PTR_shared_null_100ba2188) {
      local_30 = local_60;
      if (*local_60 != -1) {
        if (*local_60 == 0) {
          QListData::detach((int)&local_30);
          iVar1 = local_30[2];
          if (iVar1 != local_30[3]) {
            local_60 = local_60 + (long)local_60[2] * 2 + 4;
            piVar5 = local_30 + (long)iVar1 * 2 + 4;
            lVar4 = (long)local_30[3] * 8 + (long)iVar1 * -8;
            do {
              piVar2 = *(int **)local_60;
              *(int **)piVar5 = piVar2;
              if (1 < *piVar2 + 1U) {
                LOCK();
                *piVar2 = *piVar2 + 1;
                local_21 = *piVar2 != 0;
                UNLOCK();
              }
              piVar5 = piVar5 + 2;
              local_60 = local_60 + 2;
              lVar4 = lVar4 + -8;
            } while (lVar4 != 0);
            piVar5 = (int *)*param_1;
          }
        }
        else {
          LOCK();
          *local_60 = *local_60 + 1;
          local_21 = *local_60 != 0;
          UNLOCK();
        }
      }
      *param_1 = local_30;
      local_30 = piVar5;
      FUN_100013180(&local_30);
    }
    FUN_100013180(&local_60);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_21 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10077026f;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_10077026f:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10077029f;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10077029f:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return param_1;
}

