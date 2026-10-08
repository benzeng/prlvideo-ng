
void FUN_100a26810(long param_1,undefined8 *param_2,int param_3)

{
  QArrayData *pQVar1;
  undefined8 uVar2;
  void *pvVar3;
  QArrayData *local_50;
  long local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar2 = FUN_100152280();
  uVar2 = FUN_100154930(uVar2,param_2 + 1,param_2);
  pvVar3 = operator_new(0x88);
  if (param_3 == 0x30000004) {
    pQVar1 = (QArrayData *)*param_2;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    local_40 = pQVar1;
    FUN_10018c250(&local_48,uVar2);
    FUN_100a2a1e0(pvVar3,&local_40,&local_48);
    FUN_100a2ae40(param_1 + 0x80,pvVar3);
    if (local_48 != 0) {
      _PrlHandle_Free();
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
  }
  else {
    pQVar1 = (QArrayData *)*param_2;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    local_50 = pQVar1;
    FUN_100a2a280(pvVar3,&local_50);
    FUN_100a2ae40(param_1 + 0x80,pvVar3);
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
  }
  return;
}

