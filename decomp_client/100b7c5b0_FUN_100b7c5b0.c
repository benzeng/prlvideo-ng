
undefined8 * FUN_100b7c5b0(undefined8 *param_1,long *param_2,QString *param_3)

{
  int *piVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined *local_40;
  undefined1 local_33;
  undefined1 local_31;
  
  puVar2 = PTR_shared_null_1021e1288;
  local_40 = PTR_shared_null_1021e1288;
  lVar3 = *(long *)(*param_2 + 0x10);
  lVar7 = 0;
  if (*(long *)(*param_2 + 0x10) != 0) {
    do {
      while (lVar6 = lVar3, cVar4 = operator<((QString *)(lVar6 + 0x18),param_3), cVar4 == '\0') {
        lVar3 = *(long *)(lVar6 + 8);
        lVar7 = lVar6;
        if (*(long *)(lVar6 + 8) == 0) goto LAB_100b7c626;
      }
      lVar3 = *(long *)(lVar6 + 0x10);
    } while (*(long *)(lVar6 + 0x10) != 0);
    lVar6 = lVar7;
    if (lVar7 != 0) {
LAB_100b7c626:
      cVar4 = operator<(param_3,(QString *)(lVar6 + 0x18));
      if (cVar4 == '\0') goto LAB_100b7c638;
    }
  }
  lVar6 = 0;
LAB_100b7c638:
  ppuVar5 = &local_40;
  if (lVar6 != 0) {
    ppuVar5 = (undefined **)(lVar6 + 0x20);
  }
  piVar1 = (int *)*ppuVar5;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_33 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_33) {
        return param_1;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  return param_1;
}

