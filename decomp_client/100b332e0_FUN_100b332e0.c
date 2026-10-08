
int FUN_100b332e0(long *param_1,QString *param_2,uint param_3)

{
  QString *this;
  undefined *puVar1;
  char cVar2;
  int iVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  uint uVar6;
  QString local_80;
  QString local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar3 = -0x7ffdefef;
  if (*(int *)(param_2->field0_0x0 + 4) != 0) {
    (**(code **)(*param_1 + 0x28))();
    if ((char)param_1[0x10] == '\0') {
      QString::operator=(&local_40,param_2);
    }
    else {
      FUN_100b32f90(&local_50,param_2);
      QString::operator=(&local_40,&local_50);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b3338a;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
    }
LAB_100b3338a:
    this = (QString *)(param_1 + 0xf);
    QString::operator=(this,&local_40);
    local_58 = (QArrayData *)QString::fromAscii_helper("/dev/",5);
    local_60 = (QArrayData *)puVar1;
    QString::replace(this,&local_58,&local_60,1);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b333f9;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100b333f9:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b33429;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100b33429:
    if (2 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("","dimg",3,"Open: /dev/ removed from device name %s",
                    local_68 + *(long *)(local_68 + 0x10));
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b3349a;
        }
        QArrayData::deallocate(local_68,1,8);
      }
    }
LAB_100b3349a:
    if ((param_3 & 0x2000) != 0) {
      local_70 = (QArrayData *)QString::fromAscii_helper("disk",4);
      cVar2 = QString::startsWith(this,&local_70,1);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b33504;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100b33504:
      if (cVar2 != '\0') {
        pQVar4 = (QArrayData *)QString::fromAscii_helper("/dev/",5);
        pQVar5 = (QArrayData *)QString::fromAscii_helper("r",1);
        if (1 < *(int *)pQVar4 + 1U) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + 1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
        }
        local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
        QString::append(&local_80);
        local_78.field0_0x0 = local_80.field0_0x0;
        if (1 < *(int *)local_80.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_78);
        QString::operator=(&local_48,&local_78);
        if (*(int *)local_78.field0_0x0 != -1) {
          if (*(int *)local_78.field0_0x0 != 0) {
            LOCK();
            *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
            local_31 = *(int *)local_78.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b335bb;
          }
          QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
        }
LAB_100b335bb:
        if (*(int *)local_80.field0_0x0 != -1) {
          if (*(int *)local_80.field0_0x0 != 0) {
            LOCK();
            *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
            local_31 = *(int *)local_80.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b335eb;
          }
          QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
        }
LAB_100b335eb:
        if (*(int *)pQVar5 != -1) {
          if (*(int *)pQVar5 != 0) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            local_31 = *(int *)pQVar5 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b3361b;
          }
          QArrayData::deallocate(pQVar5,2,8);
        }
LAB_100b3361b:
        if (*(int *)pQVar4 != -1) {
          if (*(int *)pQVar4 != 0) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + -1;
            local_31 = *(int *)pQVar4 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b33648;
          }
          QArrayData::deallocate(pQVar4,2,8);
        }
      }
    }
LAB_100b33648:
    param_3 = param_3 | 0x4000;
    iVar3 = FUN_100b0d720(param_3,param_1 + 1,param_1[8]);
    if (iVar3 < 0) {
      FUN_100df99c0("","dimg",0,"Error creating file abstraction for normal file 0x%x",iVar3);
    }
    else {
      iVar3 = FUN_100b0d720(param_3,param_1 + 0xd,param_1[8]);
      if (iVar3 < 0) {
        FUN_100df99c0("","dimg",0,"Error creating file abstraction for mount locker 0x%x",iVar3);
      }
      else {
        uVar6 = 0;
        while( true ) {
          QString::operator=((QString *)(param_1 + 2),&local_40);
          *(uint *)(param_1 + 3) = param_3;
          iVar3 = FUN_100b32050(param_1,&local_40,&local_48);
          if (-1 < iVar3) break;
          (**(code **)(*param_1 + 0x28))(param_1);
          uVar6 = uVar6 + 1;
          if (10 < uVar6) goto LAB_100b3374f;
          FUN_100db8d20(1000);
        }
        iVar3 = 0;
        (**(code **)(*param_1 + 0x58))(param_1,2);
      }
    }
  }
LAB_100b3374f:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b3377f;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100b3377f:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return iVar3;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return iVar3;
}

