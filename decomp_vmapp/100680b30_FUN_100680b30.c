
int FUN_100680b30(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  QArrayData *local_38;
  undefined4 local_30;
  undefined1 local_29;
  
  local_30 = 0;
  local_38 = (QArrayData *)PTR_shared_null_100ba20d0;
  iVar2 = FUN_100680070(param_1,param_3,param_2,&local_30,&local_38);
  uVar1 = local_30;
  if (iVar2 == 0x8000000) {
    if ((1 < *(uint *)local_38) || (*(long *)(local_38 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_38,*(uint *)(local_38 + 4) + 1,*(uint *)(local_38 + 8) >> 0x1f)
      ;
    }
    iVar2 = FUN_10067f090(param_1,param_4,param_2,uVar1,local_38 + *(long *)(local_38 + 0x10),
                          *(uint *)(local_38 + 4));
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return iVar2;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return iVar2;
}

