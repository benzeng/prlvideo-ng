
void FUN_100a5ead0(long param_1,char param_2)

{
  int iVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  *(char *)(param_1 + 0x33) = param_2;
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x32) == '\0') {
      QByteArray::clear();
      return;
    }
    FUN_100a5f0c0((QByteArray *)&local_38,*(undefined8 *)(param_1 + 0x40));
    QByteArray::operator=((QByteArray *)(param_1 + 0x38),(QByteArray *)&local_38);
    if (*(int *)local_38 == -1) {
      return;
    }
    pQVar2 = local_38;
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_21 = 0;
    }
    goto LAB_100a5ec36;
  }
  pQVar2 = *(QArrayData **)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = PTR_shared_null_1021e1288;
  if (((*(char *)(param_1 + 0x34) != '\0') && (*(char *)(param_1 + 0x32) != '\0')) &&
     (*(char *)(param_1 + 0x30) != '\0')) {
    if (*(int *)(pQVar2 + 4) == 0) {
      FUN_100a5e890(param_1);
    }
    else {
      FUN_100a5f0c0(&local_30,*(undefined8 *)(param_1 + 0x40));
      pQVar3 = local_30;
      if ((*(int *)(local_30 + 4) != *(int *)(pQVar2 + 4)) ||
         (iVar1 = _memcmp(local_30 + *(long *)(local_30 + 0x10),pQVar2 + *(long *)(pQVar2 + 0x10),
                          (long)*(int *)(local_30 + 4)), iVar1 != 0)) {
        FUN_100a5e700(param_1,&local_30);
        pQVar3 = local_30;
      }
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_21 = *(int *)pQVar3 != 0;
          UNLOCK();
          pQVar3 = local_30;
          if ((bool)local_21) goto LAB_100a5ec0e;
        }
        QArrayData::deallocate(pQVar3,1,8);
      }
    }
  }
LAB_100a5ec0e:
  if (*(int *)pQVar2 == -1) {
    return;
  }
  if (*(int *)pQVar2 != 0) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + -1;
    local_21 = *(int *)pQVar2 != 0;
    UNLOCK();
    if ((bool)local_21) {
      return;
    }
  }
LAB_100a5ec36:
  QArrayData::deallocate(pQVar2,1,8);
  return;
}

