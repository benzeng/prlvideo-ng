
int FUN_1005f8c60(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  QArrayData *local_38;
  undefined1 local_29;
  
  (**(code **)(**(long **)(param_1 + 0x58) + 0x310))();
  local_38 = (QArrayData *)PTR_shared_null_100ba20d0;
  *(undefined4 *)(param_1 + 0x40) = 2;
  lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 8);
  plVar3 = (long *)0x0;
  if (lVar1 != 0) {
    plVar3 = *(long **)(lVar1 + 0x10);
  }
  (**(code **)(*plVar3 + 0x60))();
  QMutex::lock();
  iVar2 = (**(code **)(**(long **)(param_1 + 0x58) + 0x370))
                    (*(long **)(param_1 + 0x58),param_1 + 0x68,&local_38);
  if (iVar2 < 0) {
    FUN_1008e3970("","vdisk",0,"Can\'t load node with data 0x%x",iVar2);
  }
  else {
    iVar2 = (**(code **)(**(long **)(param_1 + 0x58) + 0x378))
                      (*(long **)(param_1 + 0x58),param_1 + 0x70,&local_38);
    if ((-1 < iVar2) &&
       (iVar2 = (**(code **)(**(long **)(param_1 + 0x58) + 0x1b8))
                          (*(long **)(param_1 + 0x58),param_1 + 0x70), -1 < iVar2)) {
      *(undefined4 *)(param_1 + 0x40) = 3;
    }
  }
  QByteArray::fill((char)&local_38,0x59);
  QMutex::unlock();
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

