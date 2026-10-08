
undefined8 * FUN_1009e11a0(undefined8 *param_1,uint param_2,long *param_3,long *param_4)

{
  char *pcVar1;
  bool bVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if ((*(int *)(*param_3 + 4) == 0) || (*(int *)(*param_4 + 4) == 0)) {
    *param_1 = PTR_shared_null_1021e1288;
    return param_1;
  }
  bVar2 = (param_2 & 0xfffffffd) != 9;
  pcVar1 = "https://report.parallels.com/%1/%2/report";
  if (!bVar2) {
    pcVar1 = "https://report.parallels.com/%1/%2/cep";
  }
  local_38 = (QArrayData *)QString::fromAscii_helper(pcVar1,(uint)bVar2 * 3 + 0x26);
  QString::arg(&local_30,&local_38,param_3,0,0x20);
  QString::arg(param_1,&local_30,param_4,0,0x20);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009e125a;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1009e125a:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return param_1;
}

