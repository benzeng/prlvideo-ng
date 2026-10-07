
undefined8 * FUN_100108610(undefined8 *param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  uint *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  *param_1 = PTR_shared_null_100ba2188;
  QMutex::lock();
  puVar4 = *(uint **)(param_2 + 0x18);
  if (0 < (int)(puVar4[3] - puVar4[2])) {
    puVar2 = (undefined8 *)(param_2 + 0x18);
    lVar8 = (long)(int)(puVar4[3] - puVar4[2]) + 1;
    while( true ) {
      if (1 < *puVar4) {
        FUN_100108f90(puVar2,puVar4[1]);
        puVar4 = (uint *)*puVar2;
      }
      plVar6 = *(long **)(puVar4 + ((int)puVar4[2] + lVar8) * 2);
      lVar3 = *(long *)(*plVar6 + 0x10);
      if (*(char *)(lVar3 + 0x14) == '\0') {
        piVar1 = (int *)(lVar3 + 0x10);
        *piVar1 = *piVar1 + 1;
        plVar5 = operator_new(0x18);
        lVar3 = *plVar6;
        lVar7 = 0;
        if (lVar3 != 0) {
          lVar7 = *(long *)(lVar3 + 0x10);
        }
        *plVar5 = param_2;
        plVar5[1] = lVar7;
        *(undefined4 *)(plVar5 + 2) = 0;
        plVar6 = (long *)FUN_100109420(plVar5,0);
        FUN_100108ab0(param_1);
        if (plVar6 != (long *)0x0) {
          LOCK();
          plVar5 = plVar6 + 1;
          lVar3 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      lVar8 = lVar8 + -1;
      if (lVar8 < 2) break;
      puVar4 = (uint *)*puVar2;
    }
  }
  QMutex::unlock();
  return param_1;
}

