
undefined1 FUN_100ab19c0(long param_1,int param_2)

{
  long lVar1;
  bool bVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined1 local_70 [64];
  
  FUN_100aafe50(local_70,param_1 + 200);
  if (*(char *)(param_1 + 0xf0) != '\0') {
    *(undefined1 *)(param_1 + 0xf0) = 0;
    lVar1 = *(long *)(param_1 + 0xc0);
    if (lVar1 != 0) {
      for (lVar4 = *(long *)(lVar1 + 0x20); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x28)) {
        *(undefined4 *)(lVar4 + 0x3c) = 2;
      }
      plVar5 = *(long **)(lVar1 + 0x18);
      if (plVar5 != (long *)0x0) {
        do {
          lVar4 = plVar5[5];
          if (lVar4 != 0) {
            *(long *)(lVar4 + 0x20) = plVar5[4];
          }
          *(long *)plVar5[4] = lVar4;
          (**(code **)(*plVar5 + 8))();
          plVar5 = *(long **)(lVar1 + 0x18);
          if (plVar5 == *(long **)(lVar1 + 0x20)) {
            FUN_100aaf5d0(lVar1 + 0x28);
            plVar5 = *(long **)(lVar1 + 0x18);
          }
        } while (plVar5 != (long *)0x0);
      }
    }
    if (*(int *)(param_1 + 0xe0) != 0) {
      FUN_100aaf7b0(param_1 + 0x40);
    }
  }
  uVar3 = 1;
  if (*(int *)(param_1 + 0xd8) == 0) goto LAB_100ab1b78;
  if (param_2 == 0) {
    uVar3 = 0;
    goto LAB_100ab1b78;
  }
  plVar5 = *(long **)(param_1 + 0xb8);
  if (*(long **)(param_1 + 0xb8) == (long *)0x0) {
    plVar5 = operator_new(0x88);
    ___bzero(plVar5,0x88);
    *plVar5 = (long)&PTR_FUN_102239bf8;
    *(undefined4 *)(plVar5 + 1) = 1;
    FUN_100aaf510(plVar5 + 2,0,0);
    *plVar5 = (long)&PTR_FUN_1022821f8;
    plVar6 = *(long **)(param_1 + 0xb8);
    *(long **)(param_1 + 0xb8) = plVar5;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
      plVar5 = *(long **)(param_1 + 0xb8);
    }
    bVar2 = true;
    plVar6 = (long *)0x0;
    if (plVar5 != (long *)0x0) goto LAB_100ab1b34;
  }
  else {
LAB_100ab1b34:
    plVar6 = plVar5;
    (**(code **)*plVar6)(plVar6);
    bVar2 = false;
  }
  FUN_100aafe00(local_70);
  uVar3 = FUN_100aaf630(plVar6 + 2,param_2);
  if (!bVar2) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
LAB_100ab1b78:
  FUN_100aafde0(local_70);
  return uVar3;
}

