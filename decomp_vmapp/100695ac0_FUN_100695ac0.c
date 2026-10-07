
int FUN_100695ac0(long *param_1,QString *param_2,uint param_3,long *param_4)

{
  QString *this;
  long *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uid_t uVar5;
  QString *pQVar6;
  char *pcVar7;
  int local_64;
  QTypedArrayData<unsigned_short> *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  this = (QString *)(param_1 + 2);
  QString::operator=(this,param_2);
  *(uint *)(param_1 + 3) = param_3;
  if ((param_3 & 0x2000) != 0) {
    local_40 = (QArrayData *)QString::fromAscii_helper("/dev/disk",9);
    cVar2 = QString::startsWith(this,&local_40,1);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100695b4c;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100695b4c:
    if (cVar2 != '\0') {
      local_48 = (QArrayData *)QString::fromAscii_helper("/dev/disk",9);
      local_50 = (QArrayData *)QString::fromAscii_helper("/dev/rdisk",10);
      pQVar6 = (QString *)QString::replace(this,&local_48,&local_50,1);
      QString::operator=(this,pQVar6);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100695bce;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_100695bce:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100695bfe;
        }
        QArrayData::deallocate(local_48,2,8);
      }
    }
  }
LAB_100695bfe:
  uVar4 = *(uint *)(param_1 + 3);
  if ((uVar4 & 2) != 0) {
    iVar3 = FUN_100696020(param_1);
    if (iVar3 < 0) {
      local_60 = this->field0_0x0;
      if (1 < *(int *)local_60 + 1U) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + 1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","dimg",0,"Umount failed for %s with %u",local_58 + *(long *)(local_58 + 0x10)
                    ,iVar3);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100695e3d;
        }
        QArrayData::deallocate(local_58,1,8);
      }
LAB_100695e3d:
      if (*(int *)local_60 == -1) {
        return -0x7ffdbffe;
      }
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        UNLOCK();
        if (*(int *)local_60 != 0) {
          return -0x7ffdbffe;
        }
        local_31 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_60,2,8);
      return -0x7ffdbffe;
    }
    uVar4 = *(uint *)(param_1 + 3);
  }
  *(uint *)(param_1 + 3) = uVar4 | 0x4000;
  uVar5 = _geteuid();
  if (uVar5 == 0) {
    iVar3 = FUN_100685960(this,(int)param_1[3],0,param_1[8],param_1 + 1);
    if (iVar3 < 0) {
      pcVar7 = "";
      goto LAB_100695ea3;
    }
LAB_100695d49:
    iVar3 = FUN_1006970e0(param_1);
    if (-1 < iVar3) {
      (**(code **)(*param_1 + 0x188))(param_1,param_1[7] * param_1[4]);
      return 0;
    }
    pcVar7 = "Fill disk parameters failed";
  }
  else {
    plVar1 = param_1 + 1;
    iVar3 = FUN_1006850b0((int)param_1[3],plVar1,param_1[8]);
    if (iVar3 < 0) {
      pcVar7 = "Create file abstraction failed";
      goto LAB_100695ea3;
    }
    local_64 = -1;
    iVar3 = (**(code **)(*param_4 + 0x18))(param_4,this,(int)param_1[3],&local_64);
    if (-1 < iVar3) {
      (**(code **)(*(long *)*plVar1 + 0x20))((long *)*plVar1,local_64);
      iVar3 = _flock(local_64,6);
      if (iVar3 < 0) {
        pcVar7 = "Open: flock main handle failed";
        iVar3 = -0x7ffdefc9;
        goto LAB_100695ea3;
      }
      local_64 = -1;
      iVar3 = (**(code **)(*param_4 + 0x18))(param_4,this,(int)param_1[3],&local_64);
      if (-1 < iVar3) {
        (**(code **)(*(long *)param_1[1] + 0xa8))((long *)param_1[1],1,local_64);
        local_64 = -1;
        iVar3 = (**(code **)(*param_4 + 0x18))(param_4,this,(int)param_1[3],&local_64);
        if (-1 < iVar3) {
          iVar3 = (**(code **)(*(long *)*plVar1 + 0xa8))((long *)*plVar1,2,local_64);
          if (iVar3 < 0) {
            pcVar7 = "";
            goto LAB_100695ea3;
          }
          goto LAB_100695d49;
        }
      }
    }
    pcVar7 = "Open failed";
  }
LAB_100695ea3:
  FUN_1008e3970("","dimg",0,"%s: 0x%x",pcVar7,iVar3);
  (**(code **)(*param_1 + 0x28))(param_1);
  return iVar3;
}

