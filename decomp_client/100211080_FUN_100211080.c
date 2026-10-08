
void FUN_100211080(long *param_1,undefined4 param_2)

{
  long *plVar1;
  Data *pDVar2;
  int iVar3;
  long lVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  Data *local_38;
  undefined1 local_2c;
  undefined1 local_2b;
  
  QObject::sender();
  lVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102203b50);
  local_38 = (Data *)PTR_shared_null_1021e15e8;
  if (lVar4 != 0) {
    plVar1 = param_1 + 0x22;
    iVar3 = FUN_1001294a0(lVar4 + 0x28,plVar1,&local_38);
    if ((iVar3 == 0) && (*(int *)(local_38 + 0xc) != *(int *)(local_38 + 8))) {
      CVmConfiguration::merge(plVar1,lVar4 + 0x18,plVar1,0);
    }
  }
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  pDVar2 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_2c = 0;
    }
    iVar3 = *(int *)(local_38 + 0xc);
    if (iVar3 != *(int *)(local_38 + 8)) {
      lVar4 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = local_38 + (long)iVar3 * 8 + 8;
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_100211170:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_2b = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_2b) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_100211170;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar2);
  }
  return;
}

