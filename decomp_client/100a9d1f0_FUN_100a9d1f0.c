
QListData * FUN_100a9d1f0(QListData *param_1,long *param_2)

{
  Data *pDVar1;
  Data *pDVar2;
  undefined8 uVar3;
  QListData local_30;
  undefined1 local_21;
  
  pDVar1 = (Data *)*param_2;
  if (*(uint *)(pDVar1 + 0xc) != *(uint *)(pDVar1 + 8)) {
    pDVar2 = param_1->field0_0x0;
    if (*(uint *)(pDVar2 + 0xc) == *(uint *)(pDVar2 + 8)) {
      if (pDVar2 != pDVar1) {
        FUN_100a9fc40(&local_30,param_2);
        pDVar1 = param_1->field0_0x0;
        param_1->field0_0x0 = local_30.field0_0x0;
        if (*(int *)pDVar1 != -1) {
          if (*(int *)pDVar1 != 0) {
            LOCK();
            *(int *)pDVar1 = *(int *)pDVar1 + -1;
            UNLOCK();
            if (*(int *)pDVar1 != 0) {
              return param_1;
            }
            local_21 = 0;
          }
          local_30.field0_0x0 = pDVar1;
          FUN_100a9ea50(&local_30,pDVar1);
        }
      }
    }
    else {
      if (*(uint *)pDVar2 < 2) {
        uVar3 = QListData::append(param_1);
      }
      else {
        uVar3 = FUN_100a9f810(param_1,0x7fffffff);
      }
      FUN_100a9f720(param_1,uVar3,
                    param_1->field0_0x0 + (long)*(int *)(param_1->field0_0x0 + 0xc) * 8 + 0x10,
                    *param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
    }
  }
  return param_1;
}

