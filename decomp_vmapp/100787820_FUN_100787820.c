
void FUN_100787820(int *param_1)

{
  int iVar1;
  QArrayData *local_38;
  QArrayData *local_30;
  
  QString::toUtf8();
  iVar1 = _IORegistryEntryFromPath
                    (*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,
                     local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_100787884;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100787884:
  *param_1 = iVar1;
  if (iVar1 == 0) {
    QString::toUtf8();
    FUN_1008e3970("","HostUtils",0,"[DeviceFromIOMedia] Can not get access to IORegistry path %s",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return;
        }
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
  return;
}

