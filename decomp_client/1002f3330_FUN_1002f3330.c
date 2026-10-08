
undefined8 FUN_1002f3330(long param_1)

{
  int iVar1;
  AnonymousUnion0 AVar2;
  char cVar3;
  undefined8 uVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  long lVar7;
  AnonymousUnion0 local_38;
  undefined1 local_2c;
  undefined1 local_2b;
  
  local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
  cVar3 = MacUtils::launchApplication
                    ((QString *)(*(long *)(param_1 + 0x18) + 0x80),(QStringList *)&local_38.field0,
                     0x10000);
  AVar2 = local_38;
  if (*(int *)local_38.field1 != -1) {
    if (*(int *)local_38.field1 != 0) {
      LOCK();
      *(int *)local_38.field1 = *(int *)local_38.field1 + -1;
      local_2c = *(int *)local_38.field1 != 0;
      UNLOCK();
      if ((bool)local_2c) goto LAB_1002f33f1;
    }
    iVar1 = *(int *)(local_38.field1 + 0xc);
    if (iVar1 != *(int *)(local_38.field1 + 8)) {
      lVar7 = (long)*(int *)(local_38.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = (Data *)(local_38.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_1002f33d0:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_2b = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_2b) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_1002f33d0;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
LAB_1002f33f1:
  uVar4 = 0;
  if (cVar3 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"Failed to start Parallels Access application");
    uVar4 = 0x80000009;
  }
  return uVar4;
}

