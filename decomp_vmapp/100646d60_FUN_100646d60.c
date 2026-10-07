
void FUN_100646d60(undefined8 param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  QArrayData *pQVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  int *local_40;
  int *local_38;
  undefined1 local_29;
  
  iVar2 = CHwGenericPciDevice::getType();
  if (iVar2 != 1) {
    return;
  }
  local_40 = (int *)PTR_shared_null_100ba2188;
  local_48 = (QArrayData *)QString::fromAscii_helper("nVidia Corporation Quadro FX 3800",0x21);
  FUN_10000c490(&local_40,&local_48);
  local_50 = (QArrayData *)QString::fromAscii_helper("nVidia Corporation Quadro FX 4800",0x21);
  FUN_10000c490(&local_40,&local_50);
  pQVar3 = (QArrayData *)QString::fromAscii_helper("nVidia Corporation Quadro FX 5800",0x21);
  local_58 = pQVar3;
  FUN_10000c490(&local_40,&local_58);
  local_38 = local_40;
  if (*local_40 != -1) {
    if (*local_40 == 0) {
      QListData::detach((int)&local_38);
      iVar2 = local_38[2];
      if (iVar2 != local_38[3]) {
        piVar5 = local_40 + (long)local_40[2] * 2 + 4;
        piVar6 = local_38 + (long)iVar2 * 2 + 4;
        lVar4 = (long)local_38[3] * 8 + (long)iVar2 * -8;
        do {
          piVar1 = *(int **)piVar5;
          *(int **)piVar6 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_29 = *piVar1 != 0;
            UNLOCK();
          }
          piVar6 = piVar6 + 2;
          piVar5 = piVar5 + 2;
          lVar4 = lVar4 + -8;
          pQVar3 = local_58;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_40 = *local_40 + 1;
      local_29 = *local_40 != 0;
      UNLOCK();
    }
  }
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      pQVar3 = local_58;
      if ((bool)local_29) goto LAB_100646eb2;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100646eb2:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100646ede;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100646ede:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100646f0a;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100646f0a:
  FUN_100013180(&local_40);
  (**(code **)(*param_2 + 0xa8))(&local_60,param_2);
  QtPrivate::QStringList_contains(&local_38,&local_60,1);
  CHwGenericPciDevice::setSupported(SUB81(param_2,0));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100646f74;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100646f74:
  FUN_100013180(&local_38);
  return;
}

