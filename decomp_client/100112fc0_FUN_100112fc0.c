
undefined1 FUN_100112fc0(QString *param_1,long param_2)

{
  long lVar1;
  CHwHddPartition *pCVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  CHwHddPartition local_150 [232];
  QString local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  QString local_40;
  undefined1 local_31;
  
  CHwHddPartition::getSystemName();
  cVar3 = operator==(param_1,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100113024;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100113024:
  uVar7 = 1;
  if (cVar3 == '\0') {
    local_60 = *(Data **)(param_2 + 0xa8);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 == 0) {
        QListData::detach((int)&local_60);
        lVar5 = (long)*(int *)(local_60 + 8);
        lVar1 = *(long *)(param_2 + 0xa8);
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_60 + lVar5 * 8) &&
           (lVar6 = *(int *)(local_60 + 0xc) - lVar5,
           lVar6 != 0 && lVar5 <= *(int *)(local_60 + 0xc))) {
          _memcpy(local_60 + lVar5 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8)
                  ,lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + 1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
      }
    }
    local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
    local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
    if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
      do {
        local_48 = 1;
        pCVar2 = *(CHwHddPartition **)local_58;
        CHwHddPartition::getSystemName();
        cVar3 = operator==(&local_68,param_1);
        cVar4 = '\x01';
        if (cVar3 == '\0') {
          CHwHddPartition::CHwHddPartition(local_150,pCVar2);
          cVar4 = FUN_100112fc0(param_1,local_150);
          CHwHddPartition::~CHwHddPartition(local_150);
        }
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100113141;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
LAB_100113141:
        uVar7 = 1;
        if (cVar4 != '\0') goto LAB_100113167;
        local_58 = local_58 + 8;
      } while (local_58 != local_50);
    }
    local_48 = 1;
    uVar7 = 0;
LAB_100113167:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        UNLOCK();
        if (*(int *)local_60 != 0) {
          return uVar7;
        }
        local_31 = 0;
      }
      QListData::dispose(local_60);
    }
  }
  return uVar7;
}

