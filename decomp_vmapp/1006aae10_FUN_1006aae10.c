
int FUN_1006aae10(long *param_1,QString *param_2,uint param_3)

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
  
  puVar1 = PTR_shared_null_100ba20d0;
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  iVar3 = -0x7ffdefef;
  if (*(int *)(param_2->field0_0x0 + 4) != 0) {
    (**(code **)(*param_1 + 0x28))();
    if ((char)param_1[0x10] == '\0') {
      QString::operator=(&local_40,param_2);
    }
    else {
      FUN_1006aaac0(&local_50,param_2);
      QString::operator=(&local_40,&local_50);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006aaeba;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
    }
LAB_1006aaeba:
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
        if ((bool)local_31) goto LAB_1006aaf29;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1006aaf29:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006aaf59;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1006aaf59:
    if (2 < DAT_1011b55f8) {
      QString::toUtf8();
      FUN_1008e3970("","dimg",3,"Open: /dev/ removed from device name %s",
                    local_68 + *(long *)(local_68 + 0x10));
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006aafca;
        }
        QArrayData::deallocate(local_68,1,8);
      }
    }
LAB_1006aafca:
    if ((param_3 & 0x2000) != 0) {
      local_70 = (QArrayData *)QString::fromAscii_helper("disk",4);
      cVar2 = QString::startsWith(this,&local_70,1);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006ab034;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1006ab034:
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
            if ((bool)local_31) goto LAB_1006ab0eb;
          }
          QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
        }
LAB_1006ab0eb:
        if (*(int *)local_80.field0_0x0 != -1) {
          if (*(int *)local_80.field0_0x0 != 0) {
            LOCK();
            *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
            local_31 = *(int *)local_80.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006ab11b;
          }
          QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
        }
LAB_1006ab11b:
        if (*(int *)pQVar5 != -1) {
          if (*(int *)pQVar5 != 0) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            local_31 = *(int *)pQVar5 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006ab14b;
          }
          QArrayData::deallocate(pQVar5,2,8);
        }
LAB_1006ab14b:
        if (*(int *)pQVar4 != -1) {
          if (*(int *)pQVar4 != 0) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + -1;
            local_31 = *(int *)pQVar4 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006ab178;
          }
          QArrayData::deallocate(pQVar4,2,8);
        }
      }
    }
LAB_1006ab178:
    param_3 = param_3 | 0x4000;
    iVar3 = FUN_1006850b0(param_3,param_1 + 1,param_1[8]);
    if (iVar3 < 0) {
      FUN_1008e3970("","dimg",0,"Error creating file abstraction for normal file 0x%x",iVar3);
    }
    else {
      iVar3 = FUN_1006850b0(param_3,param_1 + 0xd,param_1[8]);
      if (iVar3 < 0) {
        FUN_1008e3970("","dimg",0,"Error creating file abstraction for mount locker 0x%x",iVar3);
      }
      else {
        uVar6 = 0;
        while( true ) {
          QString::operator=((QString *)(param_1 + 2),&local_40);
          *(uint *)(param_1 + 3) = param_3;
          iVar3 = FUN_1006a9b80(param_1,&local_40,&local_48);
          if (-1 < iVar3) break;
          (**(code **)(*param_1 + 0x28))(param_1);
          uVar6 = uVar6 + 1;
          if (10 < uVar6) goto LAB_1006ab27f;
          FUN_1007685b0(1000);
        }
        iVar3 = 0;
        (**(code **)(*param_1 + 0x58))(param_1,2);
      }
    }
  }
LAB_1006ab27f:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006ab2af;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1006ab2af:
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

