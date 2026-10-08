
void FUN_1009e9b50(long *param_1,QString *param_2,undefined8 param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  QFileInfo *this;
  int iVar4;
  int iVar5;
  long lVar6;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  undefined8 local_a8;
  Data *local_a0;
  Data *local_98;
  undefined8 local_90;
  Data *local_88;
  Data *local_80;
  undefined8 local_78;
  QFileInfo local_70 [8];
  Data *local_68;
  undefined1 local_60 [32];
  QArrayData *local_40;
  undefined1 local_31;
  
  local_b0 = (QArrayData *)QString::fromAscii_helper(".log",4);
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1009f96c0(local_60,param_2,param_3,&local_b0,0x1000000);
    FUN_1009f97b0(&local_68,local_60);
    iVar5 = 0;
    if ((0 < param_4) && (iVar5 = 0, (int)*(uint *)(local_68 + 8) < (int)*(uint *)(local_68 + 0xc)))
    {
      QFileInfo::QFileInfo(local_70,param_2);
      pcVar1 = *(code **)(*param_1 + 0x68);
      QFileInfo::absoluteFilePath();
      (*pcVar1)(param_1,&local_40,param_3);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009e9c47;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_1009e9c47:
      QFileInfo::~QFileInfo(local_70);
      iVar4 = param_4 + -1;
      iVar5 = iVar4;
      if (1 < param_4) {
        uVar3 = *(uint *)local_68;
        if (1 < uVar3) {
          FUN_1000f7ce0(&local_68,*(uint *)(local_68 + 4));
          uVar3 = *(uint *)local_68;
        }
        local_80 = local_68 + (long)(int)*(uint *)(local_68 + 8) * 8 + 0x10;
        if (1 < uVar3) {
          FUN_1000f7ce0(&local_68,*(uint *)(local_68 + 4));
        }
        local_88 = local_68 + (long)(int)*(uint *)(local_68 + 0xc) * 8 + 0x10;
        FUN_1009f9550(&local_78,&local_80,&local_88);
        local_90 = local_78;
        if (1 < *(uint *)local_68) {
          FUN_1000f7ce0(&local_68,*(uint *)(local_68 + 4));
        }
        local_98 = local_68 + (long)(int)*(uint *)(local_68 + 0xc) * 8 + 0x10;
        iVar2 = FUN_1009f8b20(local_60,&local_90,&local_98,param_1,iVar4);
        iVar5 = iVar4 - iVar2;
        if (iVar5 != 0 && iVar2 <= iVar4) {
          if (1 < *(uint *)local_68) {
            FUN_1000f7ce0(&local_68,*(uint *)(local_68 + 4));
          }
          local_a0 = local_68 + (long)(int)*(uint *)(local_68 + 8) * 8 + 0x10;
          local_a8 = local_78;
          iVar4 = FUN_1009f8b20(local_60,&local_a0,&local_a8,param_1,iVar5);
          iVar5 = iVar5 - iVar4;
        }
      }
      iVar5 = param_4 - iVar5;
    }
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009e9dda;
      }
      iVar4 = *(int *)(local_68 + 0xc);
      if (iVar4 != *(int *)(local_68 + 8)) {
        lVar6 = (long)*(int *)(local_68 + 8) * 8 + (long)iVar4 * -8;
        this = (QFileInfo *)(local_68 + (long)iVar4 * 8 + 8);
        do {
          QFileInfo::~QFileInfo(this);
          this = this + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose(local_68);
    }
LAB_1009e9dda:
    FUN_1009f97a0(local_60);
  }
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009e9e28;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1009e9e28:
  if (0 < iVar5) {
    return;
  }
  QString::toUtf8();
  lVar6 = *(long *)(local_b8 + 0x10);
  QString::toUtf8();
  FUN_100df99c0("","prl_problem_report_utils",0,"cannot append logs to report [%s, %s]",
                local_b8 + lVar6,local_c0 + *(long *)(local_c0 + 0x10));
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009e9ec2;
    }
    QArrayData::deallocate(local_c0,1,8);
  }
LAB_1009e9ec2:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      UNLOCK();
      if (*(int *)local_b8 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_b8,1,8);
  }
  return;
}

