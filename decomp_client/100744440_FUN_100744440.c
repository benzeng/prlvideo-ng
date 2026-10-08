
bool FUN_100744440(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  QMapNodeBase *local_28;
  undefined1 local_19;
  
  FUN_100742c20(&local_28,param_1,param_2);
  iVar1 = *(int *)(local_28 + 4);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007444a8;
    }
    if (*(long *)(local_28 + 0x10) != 0) {
      FUN_1005bfc90();
      QMapDataBase::freeTree(local_28,(int)*(undefined8 *)(local_28 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_28);
  }
LAB_1007444a8:
  return iVar1 != 0;
}

