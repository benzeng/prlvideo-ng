
int FUN_1009962a0(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 local_2c;
  Data *local_28;
  undefined1 local_1a;
  
  iVar1 = CAbstractWizardPageFlow::getPrevPageId((int)param_1);
  local_28 = (Data *)PTR_shared_null_1021e15e8;
  local_2c = 5;
  FUN_100129840(&local_28,&local_2c);
  if (*(int *)(local_28 + 8) != *(int *)(local_28 + 0xc)) {
    lVar2 = (long)*(int *)(local_28 + 8) << 3;
    do {
      if (*(int *)(local_28 + lVar2 + 0x10) == iVar1) {
        iVar1 = (**(code **)(*param_1 + 0x70))(param_1,iVar1);
        break;
      }
      lVar2 = lVar2 + 8;
    } while ((long)*(int *)(local_28 + 0xc) * 8 != lVar2);
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return iVar1;
      }
      local_1a = 0;
    }
    QListData::dispose(local_28);
  }
  return iVar1;
}

