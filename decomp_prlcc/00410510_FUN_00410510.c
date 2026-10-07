
undefined8 * FUN_00410510(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  char *__s2;
  char *__s1;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    lVar1 = param_1[4];
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x28) = param_1[5];
    }
    lVar4 = param_1[8];
    if (lVar4 != 0) {
      puVar2 = *(undefined8 **)(lVar4 + 0x38);
      if (*(undefined8 **)(lVar4 + 0x38) == param_1) {
        *(undefined8 *)(lVar4 + 0x38) = param_1[6];
      }
      else {
        do {
          puVar5 = puVar2;
          puVar2 = (undefined8 *)puVar5[6];
        } while (puVar2 != param_1);
        puVar2 = *(undefined8 **)(lVar4 + 0x38);
        __s2 = (char *)*param_1;
        __s1 = (char *)*puVar2;
        puVar5[6] = param_1[6];
        iVar3 = strcmp(__s1,__s2);
        if (iVar3 != 0) {
          do {
            puVar5 = puVar2;
            puVar2 = (undefined8 *)puVar5[5];
            iVar3 = strcmp((char *)*puVar2,__s2);
          } while (iVar3 != 0);
          if (param_1 == puVar2) {
            lVar4 = lVar1;
            if (lVar1 == 0) {
              lVar4 = param_1[5];
            }
            puVar5[5] = lVar4;
            puVar2 = puVar5;
          }
        }
        do {
          puVar5 = puVar2;
          puVar2 = (undefined8 *)puVar5[4];
          if (puVar2 == (undefined8 *)0x0) goto LAB_004105c5;
        } while (param_1 != puVar2);
        puVar5[4] = lVar1;
      }
    }
LAB_004105c5:
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  return param_1;
}

