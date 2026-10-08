
long FUN_100757f00(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int *piVar7;
  bool bVar8;
  QArrayData *local_80;
  long local_78;
  QFileInfo local_70 [8];
  QString local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  uint local_48;
  int *local_40;
  undefined1 local_31;
  
  FUN_100758a00(&local_40,param_1);
  local_60 = local_40;
  if (*local_40 != -1) {
    if (*local_40 == 0) {
      QListData::detach((int)&local_60);
      iVar3 = local_60[2];
      if (iVar3 != local_60[3]) {
        local_40 = local_40 + (long)local_40[2] * 2 + 4;
        piVar7 = local_60 + (long)iVar3 * 2 + 4;
        lVar4 = (long)local_60[3] * 8 + (long)iVar3 * -8;
        do {
          piVar1 = *(int **)local_40;
          *(int **)piVar7 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          piVar7 = piVar7 + 2;
          local_40 = local_40 + 2;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_40 = *local_40 + 1;
      local_31 = *local_40 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)local_60[2] * 2 + 4;
  local_50 = local_60 + (long)local_60[3] * 2 + 4;
  local_48 = 1;
  lVar4 = 0;
  if (local_60[2] != local_60[3]) {
    lVar4 = 0;
    do {
      local_68.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_58;
      if (1 < *(int *)local_68.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
      }
      if (local_48 != 0) {
        QFileInfo::QFileInfo(local_70,&local_68);
        cVar2 = QFileInfo::isDir();
        if (cVar2 == '\0') {
          lVar5 = QFileInfo::size();
          lVar4 = lVar4 + lVar5;
        }
        else {
          local_78 = 0;
          iVar3 = FUN_100d9d550(&local_68,&local_78);
          if (iVar3 < 0) {
            QString::toUtf8();
            if ((1 < *(uint *)local_80) || (*(long *)(local_80 + 0x10) != 0x18)) {
              QByteArray::reallocData
                        (&local_80,*(uint *)(local_80 + 4) + 1,*(uint *)(local_80 + 8) >> 0x1f);
            }
            FUN_100df99c0("","prl_client_app",0,"(!)Failed to get size of \"%s\"",
                          local_80 + *(long *)(local_80 + 0x10));
            if (*(int *)local_80 != -1) {
              if (*(int *)local_80 != 0) {
                LOCK();
                *(int *)local_80 = *(int *)local_80 + -1;
                local_31 = *(int *)local_80 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10075805b;
              }
              QArrayData::deallocate(local_80,1,8);
            }
          }
          else {
            lVar4 = lVar4 + local_78;
          }
        }
LAB_10075805b:
        QFileInfo::~QFileInfo(local_70);
        local_48 = 0;
      }
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10075809a;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_10075809a:
      local_58 = local_58 + 2;
      uVar6 = local_48 ^ 1;
      bVar8 = local_48 != 1;
      local_48 = uVar6;
    } while ((bVar8) && (local_58 != local_50));
  }
  FUN_100039a80(&local_60);
  FUN_100039a80(&local_40);
  return lVar4;
}

