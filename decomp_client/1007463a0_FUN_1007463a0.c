
undefined8 * FUN_1007463a0(undefined8 *param_1,long param_2,QString *param_3)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x68) + 0x10);
  lVar6 = 0;
  if (lVar3 != 0) {
    do {
      while (lVar5 = lVar3, cVar2 = operator<((QString *)(lVar5 + 0x18),param_3), cVar2 == '\0') {
        lVar3 = *(long *)(lVar5 + 8);
        lVar6 = lVar5;
        if (*(long *)(lVar5 + 8) == 0) goto LAB_100746406;
      }
      lVar3 = *(long *)(lVar5 + 0x10);
    } while (*(long *)(lVar5 + 0x10) != 0);
    lVar5 = lVar6;
    if (lVar6 != 0) {
LAB_100746406:
      cVar2 = operator<(param_3,(QString *)(lVar5 + 0x18));
      if (cVar2 == '\0') {
        lVar3 = *(long *)(param_2 + 0x68);
        goto LAB_100746424;
      }
    }
  }
  lVar3 = *(long *)(param_2 + 0x68);
  lVar5 = lVar3 + 8;
LAB_100746424:
  puVar1 = PTR_shared_null_1021e1288;
  if (lVar3 + 8 == lVar5) {
    *param_1 = PTR_shared_null_1021e1288;
    iVar4 = *(int *)puVar1;
    if (1 < iVar4 + 1U) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + 1;
      UNLOCK();
      iVar4 = *(int *)puVar1;
    }
    auVar7._8_4_ = (int)puVar1;
    auVar7._0_8_ = puVar1;
    auVar7._12_4_ = (int)((ulong)puVar1 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 1) = auVar7;
    *(undefined1 (*) [16])(param_1 + 3) = auVar7;
    *(undefined1 (*) [16])(param_1 + 5) = auVar7;
    *(undefined1 (*) [16])(param_1 + 7) = auVar7;
    param_1[9] = puVar1;
    param_1[10] = PTR_shared_null_1021e15d0;
    if (iVar4 != -1) {
      if (iVar4 != 0) {
        LOCK();
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (*(int *)puVar1 != 0) {
          return param_1;
        }
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
  }
  else {
    FUN_100283580(param_1,lVar5 + 0x20);
  }
  return param_1;
}

