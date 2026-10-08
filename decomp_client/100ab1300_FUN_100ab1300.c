
void FUN_100ab1300(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  if (param_2 == (undefined8 *)0x0) {
    for (lVar5 = param_1[4]; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x28)) {
      if (*(undefined8 **)(lVar5 + 0x18) == param_3) {
        *(byte *)(lVar5 + 0x3c) = *(byte *)(lVar5 + 0x3c) | 4;
        *(undefined4 *)(lVar5 + 0x38) = param_4;
        return;
      }
    }
    puVar2 = (undefined8 *)param_1[3];
    do {
      param_2 = puVar2;
      if (param_2 == (undefined8 *)0x0) {
        param_2 = operator_new(0x40);
        *(undefined4 *)(param_2 + 1) = 1;
        *param_2 = &PTR_FUN_102239d78;
        param_2[2] = param_1;
        if (param_1 != (undefined8 *)0x0) {
          (**(code **)*param_1)(param_1);
        }
        param_2[3] = param_3;
        if (param_3 != (undefined8 *)0x0) {
          (**(code **)*param_3)(param_3);
        }
        goto LAB_100ab1415;
      }
      puVar2 = (undefined8 *)param_2[5];
    } while ((undefined8 *)param_2[3] != param_3);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[4] = param_2[4];
    }
    *(undefined8 **)param_2[4] = puVar2;
LAB_100ab1415:
    *(undefined4 *)(param_2 + 7) = param_4;
  }
  else {
    lVar5 = param_2[5];
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x20) = param_2[4];
    }
    *(long *)param_2[4] = lVar5;
  }
  plVar8 = param_1 + 3;
  lVar5 = FUN_100ab4920();
  iVar1 = *(int *)(param_2 + 7);
  iVar3 = -iVar1;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  lVar6 = FUN_100ab4a10((long)iVar3);
  param_2[6] = lVar6 + lVar5;
  lVar4 = *plVar8;
  plVar7 = plVar8;
  do {
    if (lVar4 == 0) {
      param_2[5] = 0;
LAB_100ab147c:
      param_2[4] = plVar7;
      *plVar7 = (long)param_2;
      if (param_2 != (undefined8 *)*plVar8) {
        return;
      }
      FUN_100aaf5d0(param_1 + 5);
      return;
    }
    if (lVar6 + lVar5 < *(long *)(lVar4 + 0x30)) {
      param_2[5] = lVar4;
      *(undefined8 **)(lVar4 + 0x20) = param_2 + 5;
      goto LAB_100ab147c;
    }
    plVar7 = (long *)(lVar4 + 0x28);
    lVar4 = *(long *)(lVar4 + 0x28);
  } while( true );
}

