
void FUN_100710070(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  int *local_48;
  QArrayData *local_40;
  QRegExp local_38 [8];
  int *local_30;
  undefined1 local_21;
  
  *param_1 = PTR_shared_null_100ba2188;
  local_40 = (QArrayData *)QString::fromAscii_helper("\\s+",3);
  QRegExp::QRegExp(local_38,&local_40,1,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007100e6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007100e6:
  QString::split(&local_48,param_2,local_38,1);
  if ((int *)*param_1 != local_48) {
    local_30 = local_48;
    if (*local_48 != -1) {
      if (*local_48 == 0) {
        QListData::detach((int)&local_30);
        iVar1 = local_30[2];
        if (iVar1 != local_30[3]) {
          local_48 = local_48 + (long)local_48[2] * 2 + 4;
          piVar4 = local_30 + (long)iVar1 * 2 + 4;
          lVar3 = (long)local_30[3] * 8 + (long)iVar1 * -8;
          do {
            piVar2 = *(int **)local_48;
            *(int **)piVar4 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_21 = *piVar2 != 0;
              UNLOCK();
            }
            piVar4 = piVar4 + 2;
            local_48 = local_48 + 2;
            lVar3 = lVar3 + -8;
          } while (lVar3 != 0);
        }
      }
      else {
        LOCK();
        *local_48 = *local_48 + 1;
        local_21 = *local_48 != 0;
        UNLOCK();
      }
    }
    piVar4 = (int *)*param_1;
    *param_1 = local_30;
    local_30 = piVar4;
    FUN_100013180(&local_30);
  }
  FUN_100013180(&local_48);
  QRegExp::~QRegExp(local_38);
  return;
}

