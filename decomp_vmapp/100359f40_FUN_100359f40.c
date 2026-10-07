
void FUN_100359f40(undefined8 *param_1,int param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  
  FUN_1002adb30(*param_1,param_1[1]);
  pvVar1 = (void *)param_1[8];
  if (pvVar1 == (void *)0x0) {
    if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)param_1[3];
      puVar3 = param_1 + 3;
      do {
        while (puVar5 = puVar4, param_2 <= *(int *)(puVar5 + 4)) {
          puVar4 = (undefined8 *)*puVar5;
          puVar3 = puVar5;
          if ((undefined8 *)*puVar5 == (undefined8 *)0x0) goto LAB_100359fd0;
        }
        puVar2 = puVar5 + 1;
        puVar5 = puVar3;
        puVar4 = (undefined8 *)*puVar2;
      } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
LAB_100359fd0:
      if ((puVar5 != param_1 + 3) && (*(int *)(puVar5 + 4) <= param_2)) {
        pvVar1 = (void *)puVar5[5];
        if (pvVar1 != (void *)0x0) {
          FUN_1003339d0(pvVar1);
          operator_delete(pvVar1);
        }
        puVar4 = puVar5;
        puVar3 = (undefined8 *)puVar5[1];
        if ((undefined8 *)puVar5[1] == (undefined8 *)0x0) {
          do {
            puVar2 = (undefined8 *)puVar4[2];
            bVar6 = (undefined8 *)*puVar2 != puVar4;
            puVar4 = puVar2;
          } while (bVar6);
        }
        else {
          do {
            puVar2 = puVar3;
            puVar3 = (undefined8 *)*puVar2;
          } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
        }
        if ((undefined8 *)param_1[2] == puVar5) {
          param_1[2] = puVar2;
        }
        param_1[4] = param_1[4] + -1;
        FUN_1000e86c0(param_1[3],puVar5);
        operator_delete(puVar5);
        return;
      }
    }
  }
  else {
    FUN_100345640(pvVar1);
    operator_delete(pvVar1);
    param_1[8] = 0;
  }
  return;
}

