
void FUN_1000a4ef0(QObject *param_1)

{
  QObject *pQVar1;
  uint uVar2;
  QMapNodeBase *pQVar3;
  QArrayData *local_38;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_29;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f8840;
  pQVar1 = param_1 + 0x10;
  pQVar3 = *(QMapNodeBase **)(param_1 + 0x10);
  uVar2 = *(uint *)pQVar3;
  if (*(uint *)(pQVar3 + 4) != 0) {
    do {
      if (1 < uVar2) {
        FUN_1000a5ea0(pQVar1);
        pQVar3 = *(QMapNodeBase **)pQVar1;
      }
      if (*(long *)(pQVar3 + 0x10) == 0) {
        pQVar3 = pQVar3 + 8;
      }
      else {
        pQVar3 = *(QMapNodeBase **)(pQVar3 + 0x20);
      }
      local_38 = *(QArrayData **)(pQVar3 + 0x18);
      if (1 < *(int *)local_38 + 1U) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + 1;
        local_2c = *(int *)local_38 != 0;
        UNLOCK();
      }
      FUN_1000a4cf0(param_1,&local_38);
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          local_2b = *(int *)local_38 != 0;
          UNLOCK();
          if ((bool)local_2b) goto LAB_1000a4fa8;
        }
        QArrayData::deallocate(local_38,2,8);
      }
LAB_1000a4fa8:
      pQVar3 = *(QMapNodeBase **)pQVar1;
      uVar2 = *(uint *)pQVar3;
    } while (*(uint *)(pQVar3 + 4) != 0);
  }
  if (uVar2 != 0xffffffff) {
    if (uVar2 != 0) {
      LOCK();
      *(uint *)pQVar3 = *(uint *)pQVar3 - 1;
      local_29 = *(uint *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000a4ffa;
      pQVar3 = *(QMapNodeBase **)pQVar1;
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_1000a6010();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_1000a4ffa:
  QObject::~QObject(param_1);
  return;
}

