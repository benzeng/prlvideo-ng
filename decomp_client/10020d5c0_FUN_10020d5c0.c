
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10020d5c0(long param_1,long *param_2)

{
  int iVar1;
  QString *pQVar2;
  QArrayData *local_48;
  long local_40 [3];
  int local_28;
  undefined1 local_21;
  
  local_28 = 100000;
  _PrlEvent_GetType(*param_2,&local_28);
  if ((((local_28 == 0x188aa) && (*(long *)(param_1 + 0x48) != 0)) &&
      (*(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) && (*(long *)(param_1 + 0x50) != 0)) {
    local_40[2] = 0;
    local_40[1] = 0;
    local_40[0] = *param_2;
    if (local_40[0] != 0) {
      _PrlHandle_AddRef();
    }
    FUN_10011d190(local_40,local_40 + 2,local_40 + 1);
    if (local_40[0] != 0) {
      _PrlHandle_Free();
    }
    CTimeEstimator::getTextForProgress((longlong)&local_48,*(longlong *)(param_1 + 0x78));
    iVar1 = 0;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (iVar1 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x50);
    }
    CProgressDialog::setValue(iVar1);
    pQVar2 = (QString *)0x0;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (pQVar2 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      pQVar2 = *(QString **)(param_1 + 0x50);
    }
    CProgressDialog::setDescription(pQVar2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) {
          return 0;
        }
        local_21 = 0;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
  return 0;
}

