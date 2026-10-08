
int FUN_100b33f00(long *param_1,long *param_2,uint param_3)

{
  int iVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  
  if (*(int *)(*param_2 + 4) == 0) {
    return -0x7ffdefef;
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  (**(code **)(*param_1 + 0x1b0))(param_1,param_2,param_3 | 0x4000);
  if ((param_3 & 8) != 0) {
    QString::toUtf8();
    FUN_100df99c0("","dimg",0,"Open: fake open of device %s",local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 == -1) {
      return 0;
    }
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 0;
      }
    }
    QArrayData::deallocate(local_38,1,8);
    return 0;
  }
  iVar1 = (**(code **)(*param_1 + 0x1b8))(param_1);
  if (iVar1 < 0) {
    FUN_100df99c0("","dimg",0,"Error unmounting device 0x%x",iVar1);
    return iVar1;
  }
  iVar1 = FUN_100b0dfd0(param_1 + 2,(int)param_1[3],0,param_1[8],param_1 + 1);
  if (-1 < iVar1) {
    (**(code **)(*param_1 + 0x58))(param_1,2);
    (**(code **)(*param_1 + 0x188))(param_1,param_1[7] * param_1[4]);
    return 0;
  }
  QString::toUtf8();
  FUN_100df99c0("","dimg",0,"Open: \'%s\' device open error. (0x%x)",
                local_40 + *(long *)(local_40 + 0x10),iVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100b340c1;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100b340c1:
  (**(code **)(*param_1 + 0x28))(param_1);
  return iVar1;
}

