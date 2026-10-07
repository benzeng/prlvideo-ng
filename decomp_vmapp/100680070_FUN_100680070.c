
int FUN_100680070(undefined8 param_1,undefined4 param_2,undefined8 param_3,int *param_4,
                 undefined8 *param_5)

{
  QArrayData *pQVar1;
  int iVar2;
  QArrayData *local_48;
  int local_3c;
  int local_38;
  undefined1 local_31;
  
  local_38 = 0;
  local_3c = 0;
  local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
  iVar2 = FUN_10067f050();
  if (iVar2 != 0x8158015) {
    if (iVar2 != 0x8158016) goto LAB_100680186;
    if (local_3c != 0) {
      QByteArray::resize((int)&local_48);
      iVar2 = *param_4;
      if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
      }
      iVar2 = FUN_10067f050(param_1,param_2,param_3,iVar2,local_48 + *(long *)(local_48 + 0x10),
                            *(uint *)(local_48 + 4),&local_3c,&local_38);
      if (iVar2 != 0x8000000) goto LAB_100680186;
    }
  }
  if ((*param_4 == 0) || (iVar2 = 0x8158018, local_38 == *param_4)) {
    *param_4 = local_38;
    pQVar1 = (QArrayData *)*param_5;
    *param_5 = local_48;
    iVar2 = 0x8000000;
    local_48 = pQVar1;
  }
LAB_100680186:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return iVar2;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,1,8);
  }
  return iVar2;
}

