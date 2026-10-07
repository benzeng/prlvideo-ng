
int FUN_100580600(long *param_1,undefined8 param_2)

{
  QArrayData *pQVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_38 = (QArrayData *)PTR_shared_null_100ba20d0;
  iVar2 = (**(code **)(*param_1 + 0x370))(param_1,param_2,&local_38);
  pQVar1 = local_38;
  if (iVar2 < 0) {
    FUN_1008e3970("","vdisk",0,"Can\'t load node with data 0x%x",iVar2);
  }
  else {
    lVar4 = (long)*(int *)(local_38 + *(long *)(local_38 + 0x10)) + *(long *)(local_38 + 0x10);
    iVar2 = (**(code **)(*(long *)param_1[0x236] + 0x48))
                      ((long *)param_1[0x236],local_38 + lVar4 + 0x10);
    if (iVar2 < 0) {
      FUN_1008e3970("","vdisk",0,"Can\'t set disk key with code 0x%x",iVar2);
    }
    else {
      iVar3 = (**(code **)(*(long *)param_1[0x236] + 0x50))
                        ((long *)param_1[0x236],pQVar1 + lVar4 + 0x20);
      iVar2 = 0;
      if (iVar3 < 0) {
        FUN_1008e3970("","vdisk",0,"Can\'t set disk IV with code 0x%x",iVar3);
        iVar2 = iVar3;
      }
    }
  }
  QByteArray::fill((char)&local_38,0x58);
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

