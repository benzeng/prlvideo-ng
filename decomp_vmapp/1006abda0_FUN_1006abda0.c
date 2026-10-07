
void FUN_1006abda0(QRegExp *param_1,undefined8 param_2,int param_3,int param_4,undefined8 *param_5,
                  int param_6,int param_7)

{
  QRegExp *pQVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  Data *local_50;
  Data *local_48;
  int local_3c;
  int local_38;
  undefined1 local_31;
  
  local_3c = param_7;
  local_38 = param_4;
  QRegExp::QRegExp(param_1,param_2,1,0);
  *(int *)(param_1 + 8) = param_3;
  local_48 = (Data *)PTR_shared_null_100ba2188;
  FUN_10077ced0(&local_48,&local_38);
  pQVar1 = param_1 + 0x10;
  *(Data **)pQVar1 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)pQVar1);
      lVar2 = *(long *)pQVar1;
      lVar4 = (long)*(int *)(lVar2 + 8);
      if ((local_48 + (long)*(int *)(local_48 + 8) * 8 != (Data *)(lVar2 + lVar4 * 8)) &&
         (lVar5 = *(int *)(lVar2 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(lVar2 + 0xc))) {
        _memcpy((void *)(lVar2 + 0x10 + lVar4 * 8),
                local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10,lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006abe84;
    }
    QListData::dispose(local_48);
  }
LAB_1006abe84:
  piVar3 = (int *)*param_5;
  *(int **)(param_1 + 0x18) = piVar3;
  if (1 < *piVar3 + 1U) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    local_31 = *piVar3 != 0;
    UNLOCK();
  }
  *(int *)(param_1 + 0x20) = param_6;
  local_50 = (Data *)PTR_shared_null_100ba2188;
  FUN_10077ced0(&local_50,&local_3c);
  pQVar1 = param_1 + 0x28;
  *(Data **)pQVar1 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)pQVar1);
      lVar2 = *(long *)pQVar1;
      lVar4 = (long)*(int *)(lVar2 + 8);
      if ((local_50 + (long)*(int *)(local_50 + 8) * 8 != (Data *)(lVar2 + lVar4 * 8)) &&
         (lVar5 = *(int *)(lVar2 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(lVar2 + 0xc))) {
        _memcpy((void *)(lVar2 + 0x10 + lVar4 * 8),
                local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10,lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
    }
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) goto LAB_1006abf45;
      local_31 = 0;
    }
    QListData::dispose(local_50);
  }
LAB_1006abf45:
  *(undefined **)(param_1 + 0x30) = PTR_shared_null_100ba2188;
  if (param_3 < 0) {
    param_3 = 0;
  }
  if (param_3 < param_4) {
    param_3 = param_4;
  }
  *(int *)(param_1 + 0x38) = param_3;
  if (param_6 < 0) {
    param_6 = 0;
  }
  if (param_6 < param_7) {
    param_6 = param_7;
  }
  *(int *)(param_1 + 0x3c) = param_6;
  return;
}

