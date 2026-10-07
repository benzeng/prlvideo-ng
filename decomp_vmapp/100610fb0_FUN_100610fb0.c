
int FUN_100610fb0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QByteArray::QByteArray((QByteArray *)&local_30,0x1000,'\0');
  local_38 = (QArrayData *)*param_2;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_21 = *(int *)local_38 != 0;
    UNLOCK();
  }
  iVar1 = FUN_1006148a0(&local_30,&local_38,*param_3);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100611030;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100611030:
  if (iVar1 < 0) {
    FUN_1008e3970("","crypt",0,"Error 0x%x creating hash for file",iVar1);
  }
  else {
    if ((1 < *(uint *)local_30) || (*(long *)(local_30 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_30,*(uint *)(local_30 + 4) + 1,*(uint *)(local_30 + 8) >> 0x1f)
      ;
    }
    _memcpy((void *)(param_1 + 0x2c),local_30 + *(long *)(local_30 + 0x10),0x1000);
    iVar1 = 0;
    QByteArray::fill((char)&local_30,0);
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return iVar1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,1,8);
  }
  return iVar1;
}

