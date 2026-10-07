
undefined1 FUN_1005aff80(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  char *pcVar7;
  uint uVar8;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QDir local_50 [8];
  QString local_48;
  QArrayData *local_40;
  int local_34;
  undefined8 local_30;
  
  if ((int)param_1[6] != -1) {
    if (2 < DAT_1011b55f8) {
      QString::toUtf8();
      FUN_1008e3970("","vdisk",3,"Already opened [%s] - recreate",
                    local_40 + *(long *)(local_40 + 0x10));
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          local_30 = CONCAT71(local_30._1_7_,*(int *)local_40 != 0);
          if (*(int *)local_40 != 0) goto LAB_1005b0010;
        }
        QArrayData::deallocate(local_40,1,8);
      }
    }
LAB_1005b0010:
    FUN_1007079c0(param_1 + 5);
  }
  *(undefined4 *)(param_1 + 0x14) = 3;
  (**(code **)(**(long **)*param_1 + 0x178))(&local_58);
  QDir::QDir(local_50,&local_58);
  QDir::dirName();
  QString::operator=((QString *)(param_1 + 2),&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      local_30 = CONCAT71(local_30._1_7_,*(int *)local_48.field0_0x0 != 0);
      if (*(int *)local_48.field0_0x0 != 0) goto LAB_1005b0094;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1005b0094:
  QDir::~QDir(local_50);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      local_30 = CONCAT71(local_30._1_7_,*(int *)local_58.field0_0x0 != 0);
      if (*(int *)local_58.field0_0x0 != 0) goto LAB_1005b00cd;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1005b00cd:
  lVar5 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = lVar5;
  FUN_1005ae770(&local_60,param_1,param_1 + 3);
  QString::operator=((QString *)(param_1 + 1),&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      UNLOCK();
      local_30 = CONCAT71(local_30._1_7_,*(int *)local_60.field0_0x0 != 0);
      if (*(int *)local_60.field0_0x0 != 0) goto LAB_1005b0132;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1005b0132:
  FUN_1007077c0(param_1 + 5,(QString *)(param_1 + 1),(int)param_1[0x14],0,0x200,0);
  if ((int)param_1[6] == -1) {
    if (2 < DAT_1011b55f8) {
      QString::toUtf8();
      FUN_1008e3970("","vdisk",3,"Unable to create cache file [%s], err = %u",
                    local_68 + *(long *)(local_68 + 0x10),*(undefined4 *)((long)param_1 + 0x3c));
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          UNLOCK();
          local_30 = CONCAT71(local_30._1_7_,*(int *)local_68 != 0);
          if (*(int *)local_68 != 0) {
            return 0;
          }
        }
        QArrayData::deallocate(local_68,1,8);
        return 0;
      }
    }
  }
  else {
    uVar4 = (**(code **)(**(long **)*param_1 + 0x330))();
    *(undefined8 *)((long)param_1 + 0xbc) = uVar4;
    uVar3 = (**(code **)(**(long **)*param_1 + 0x2e0))();
    *(undefined4 *)((long)param_1 + 0xcc) = uVar3;
    puVar1 = (undefined8 *)*param_1;
    *(undefined4 *)((long)param_1 + 0xd4) = *(undefined4 *)(puVar1 + 3);
    *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)((long)puVar1 + 0x1c);
    lVar5 = (**(code **)(*(long *)*puVar1 + 0x308))((long *)*puVar1,0);
    *(int *)(param_1 + 0x1a) = *(int *)(lVar5 + 0x60) + -1;
    *(int *)(param_1 + 0x216) = *(int *)((long)param_1 + 0xd4);
    uVar8 = *(int *)((long)param_1 + 0xd4) + 0x3fU >> 3 & 0x1ffffff8;
    *(uint *)((long)param_1 + 0x10b4) = uVar8;
    pvVar6 = _valloc((ulong)uVar8);
    param_1[0x217] = (long)pvVar6;
    if (pvVar6 == (void *)0x0) {
      FUN_1008e3970("","vdisk",0,"No memory (%u bytes) for group bitmap",uVar8);
      pcVar7 = "Bitmap init failed";
    }
    else {
      ___bzero(pvVar6,(ulong)uVar8);
      lVar5 = ((ulong)*(uint *)((long)param_1 + 0xcc) - 1) + (ulong)(uVar8 + 0x3000);
      param_1[0x218] = lVar5 - lVar5 % (long)(ulong)*(uint *)((long)param_1 + 0xcc);
      local_30 = 0x6573556e49;
      *(undefined8 *)((long)param_1 + 0xb4) = 0x6573556e49;
      local_34 = 0;
      cVar2 = FUN_1007080a0(param_1 + 5,(long)param_1 + 0xa4,0x1000,&local_34,0);
      if ((cVar2 != '\0') && (local_34 == 0x1000)) {
        if (DAT_1011b55f8 < 3) {
          return 1;
        }
        QString::toUtf8();
        FUN_1008e3970("","vdisk",3,"Created [%s]",local_70 + *(long *)(local_70 + 0x10));
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            UNLOCK();
            local_30 = CONCAT71(local_30._1_7_,*(int *)local_70 != 0);
            if (*(int *)local_70 != 0) {
              return 1;
            }
          }
          QArrayData::deallocate(local_70,1,8);
          return 1;
        }
        return 1;
      }
      FUN_1008e3970("","vdisk",0,"Unable to write \'%s\' header(written %u, expected %u), err = %u",
                    &local_30,local_34,0x1000,*(undefined4 *)((long)param_1 + 0x3c));
      pcVar7 = "Unable to write \'used\' signature";
    }
    FUN_1008e3970("","vdisk",0,pcVar7);
    FUN_1005afd10(param_1);
  }
  return 0;
}

