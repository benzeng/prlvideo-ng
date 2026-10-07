
undefined8 * FUN_1007c3190(undefined8 *param_1,void **param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar3 = *param_2;
  if (*puVar3 < 2) {
    puVar8 = (undefined8 *)*param_3;
  }
  else {
    lVar4 = *param_3;
    uVar2 = puVar3[2];
    FUN_1007c4dc0(param_2,puVar3[1]);
    puVar8 = (undefined8 *)
             ((long)*param_2 +
             ((long)(int)((ulong)(lVar4 - (long)(puVar3 + (ulong)uVar2 * 2 + 4)) >> 3) +
             (long)*(int *)((long)*param_2 + 8)) * 8 + 0x10);
    *param_3 = (long)puVar8;
  }
  plVar5 = (long *)*puVar8;
  if (plVar5 != (long *)0x0) {
    plVar6 = (long *)*plVar5;
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    operator_delete(plVar5);
  }
  uVar7 = QListData::erase(param_2);
  *param_1 = uVar7;
  return param_1;
}

