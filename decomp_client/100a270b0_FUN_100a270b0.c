
void FUN_100a270b0(long param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  QArrayData *pQVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  void *pvVar5;
  long local_58;
  long *local_50;
  long local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pvVar5 = operator_new(0x88);
  pQVar1 = (QArrayData *)*param_2;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  local_40 = pQVar1;
  FUN_100a2ac20(&local_58,param_4);
  FUN_100a2a320(pvVar5,&local_40,param_3,&local_58);
  FUN_100a2ae40(param_1 + 0x80,pvVar5);
  if (local_48 != 0) {
    lVar2 = *local_50;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(local_58 + 8);
    **(long **)(local_58 + 8) = lVar2;
    local_48 = 0;
    plVar4 = local_50;
    while (plVar4 != &local_58) {
      plVar3 = (long *)plVar4[1];
      std::string::~string((string *)(plVar4 + 2));
      operator_delete(plVar4);
      plVar4 = plVar3;
    }
  }
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

