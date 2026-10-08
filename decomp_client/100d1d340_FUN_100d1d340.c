
undefined8 *
FUN_100d1d340(undefined8 *param_1,undefined8 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  QArrayData *pQVar2;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  switch(param_3) {
  case 1:
    local_38 = (QArrayData *)QString::fromAscii_helper("IDE%1:%2",8);
    QString::arg(&local_30,&local_38,(long)param_4,0,10,0x20);
    QString::arg(param_1,&local_30,(long)param_5,0,10,0x20);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d1d402;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_100d1d402:
    if (*(int *)local_38 == -1) {
      return param_1;
    }
    pQVar2 = local_38;
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    break;
  case 2:
    local_40 = (QArrayData *)QString::fromAscii_helper("SCSI%1",6);
    QString::arg(param_1,&local_40,(long)param_4,0,10,0x20);
    if (*(int *)local_40 == -1) {
      return param_1;
    }
    pQVar2 = local_40;
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    break;
  case 3:
    local_48 = (QArrayData *)QString::fromAscii_helper("SATA%1",6);
    QString::arg(param_1,&local_48,(long)param_4,0,10,0x20);
    if (*(int *)local_48 == -1) {
      return param_1;
    }
    pQVar2 = local_48;
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    break;
  case 4:
    local_50 = (QArrayData *)QString::fromAscii_helper("SAS%1",5);
    QString::arg(param_1,&local_50,(long)param_4,0,10,0x20);
    if (*(int *)local_50 == -1) {
      return param_1;
    }
    pQVar2 = local_50;
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    break;
  default:
    uVar1 = QString::fromAscii_helper("",0);
    *param_1 = uVar1;
    return param_1;
  }
  QArrayData::deallocate(pQVar2,2,8);
  return param_1;
}

