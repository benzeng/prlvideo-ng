
void FUN_1000c3d00(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = &PTR_FUN_100ba8cc0;
  lVar5 = 0;
  do {
    plVar6 = (long *)param_1[lVar5 + 8];
    if (plVar6 != (long *)0x0) {
      if (plVar6[2] != 0) {
        lVar1 = *plVar6;
        plVar4 = (long *)plVar6[1];
        *(undefined8 *)(*plVar4 + 8) = *(undefined8 *)(lVar1 + 8);
        **(long **)(lVar1 + 8) = *plVar4;
        plVar6[2] = 0;
        while (plVar4 != plVar6) {
          plVar3 = (long *)plVar4[1];
          operator_delete(plVar4);
          plVar4 = plVar3;
        }
      }
      operator_delete(plVar6);
      param_1[lVar5 + 8] = 0;
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x20);
  *(undefined4 *)(param_1 + 6) = 0;
  plVar6 = (long *)param_1[7];
  if (plVar6 == (long *)0x0) goto LAB_1000c3e31;
  plVar4 = (long *)plVar6[1];
  plVar3 = plVar4;
  if (plVar4 == plVar6) {
LAB_1000c3dd7:
    if (plVar6[2] != 0) {
      lVar5 = *plVar6;
      plVar3 = (long *)plVar6[1];
      *(undefined8 *)(*plVar3 + 8) = *(undefined8 *)(lVar5 + 8);
      **(long **)(lVar5 + 8) = *plVar3;
      plVar6[2] = 0;
      while (plVar3 != plVar4) {
        plVar2 = (long *)plVar3[1];
        operator_delete(plVar3);
        plVar3 = plVar2;
      }
    }
    operator_delete(plVar6);
  }
  else {
    do {
      plVar4 = plVar6;
      if ((long *)plVar3[2] != (long *)0x0) {
        (**(code **)(*(long *)plVar3[2] + 8))();
        plVar4 = (long *)param_1[7];
      }
      plVar3 = (long *)plVar3[1];
      plVar6 = plVar4;
    } while (plVar3 != plVar4);
    if (plVar4 != (long *)0x0) goto LAB_1000c3dd7;
  }
  param_1[7] = 0;
LAB_1000c3e31:
  std::string::~string((string *)(param_1 + 3));
  return;
}

