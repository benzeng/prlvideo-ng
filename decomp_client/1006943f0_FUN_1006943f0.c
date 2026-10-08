
undefined8 FUN_1006943f0(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  Data *pDVar2;
  undefined8 uVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  long lVar6;
  Data *local_38;
  undefined1 local_2a;
  undefined1 local_29;
  
  uVar3 = 0;
  if (param_2 != 0) {
    local_38 = (Data *)PTR_shared_null_1021e15e8;
    uVar3 = FUN_10068e430(param_2,param_3,param_4,&local_38);
    pDVar2 = local_38;
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return uVar3;
        }
        local_2a = 0;
      }
      iVar1 = *(int *)(local_38 + 0xc);
      if (iVar1 != *(int *)(local_38 + 8)) {
        lVar6 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
        pDVar4 = local_38 + (long)iVar1 * 8 + 8;
        do {
          pQVar5 = *(QArrayData **)pDVar4;
          if (*(int *)pQVar5 == 0) {
LAB_1006944a0:
            QArrayData::deallocate(pQVar5,2,8);
          }
          else if (*(int *)pQVar5 != -1) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            local_29 = *(int *)pQVar5 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar5 = *(QArrayData **)pDVar4;
              goto LAB_1006944a0;
            }
          }
          pDVar4 = pDVar4 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose(pDVar2);
    }
  }
  return uVar3;
}

