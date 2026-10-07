
uint * FUN_100022450(undefined8 *param_1,int *param_2,long *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint *puVar5;
  uint *puVar6;
  int *local_38;
  undefined1 local_29;
  
  puVar5 = (uint *)*param_1;
  if (1 < *puVar5) {
    FUN_100023ae0(param_1);
    puVar5 = (uint *)*param_1;
  }
  if (*(uint **)(puVar5 + 4) == (uint *)0x0) {
    puVar5 = puVar5 + 2;
    uVar4 = 1;
  }
  else {
    puVar6 = (uint *)0x0;
    puVar2 = *(uint **)(puVar5 + 4);
    do {
      while (puVar5 = puVar2, (int)puVar5[6] < *param_2) {
        puVar2 = *(uint **)(puVar5 + 4);
        if (*(uint **)(puVar5 + 4) == (uint *)0x0) {
          uVar4 = 0;
          uVar3 = 0;
          if (puVar6 == (uint *)0x0) goto LAB_100022526;
          goto LAB_1000224bd;
        }
      }
      puVar6 = puVar5;
      puVar2 = *(uint **)(puVar5 + 2);
      uVar3 = 1;
    } while (*(uint **)(puVar5 + 2) != (uint *)0x0);
LAB_1000224bd:
    uVar4 = uVar3;
    if ((int)puVar6[6] <= *param_2) {
      if (*(long *)(puVar6 + 8) != *param_3) {
        FUN_100023c30(&local_38,param_3);
        piVar1 = *(int **)(puVar6 + 8);
        *(int **)(puVar6 + 8) = local_38;
        if (*piVar1 != -1) {
          if (*piVar1 != 0) {
            LOCK();
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 != 0) {
              return puVar6;
            }
            local_29 = 0;
          }
          local_38 = piVar1;
          FUN_100023390(&local_38,piVar1);
        }
      }
      return puVar6;
    }
  }
LAB_100022526:
  puVar5 = (uint *)FUN_100023a50(*param_1,param_2,param_3,puVar5,uVar4);
  return puVar5;
}

