
undefined8 * FUN_1007908f0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  pvVar4 = operator_new(0x90,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (pvVar4 == (void *)0x0) {
    *param_1 = 0;
  }
  else {
    FUN_1007c6740(pvVar4);
    *(undefined4 *)((long)pvVar4 + 0x5c) = param_2;
    _memcpy(pvVar4,&DAT_100b4b000,0x48);
    *(undefined4 *)((long)pvVar4 + 0x48) = param_3;
    *(undefined8 *)((long)pvVar4 + 0x54) = 0;
    *(undefined8 *)((long)pvVar4 + 0x4c) = 0;
    *(undefined4 *)((long)pvVar4 + 0x60) = 0;
    *(undefined4 *)((long)pvVar4 + 100) = 0;
    *(undefined4 *)((long)pvVar4 + 0x68) = 0;
    lVar2 = *param_4;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    plVar3 = *(long **)((long)pvVar4 + 0x80);
    *(long *)((long)pvVar4 + 0x80) = lVar2;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    puVar5 = operator_new(0x10,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (puVar5 == (undefined8 *)0x0) {
      plVar3 = *(long **)((long)pvVar4 + 0x88);
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      plVar3 = *(long **)((long)pvVar4 + 0x80);
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      plVar3 = *(long **)((long)pvVar4 + 0x78);
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      plVar3 = *(long **)((long)pvVar4 + 0x70);
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      operator_delete(pvVar4);
      *param_1 = 0;
    }
    else {
      *puVar5 = pvVar4;
      *(undefined4 *)(puVar5 + 1) = 0;
      puVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (puVar6 == (undefined8 *)0x0) {
        FUN_100790d00(puVar5);
        operator_delete(puVar5);
        puVar6 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar6 + 1) = 1;
        puVar6[2] = puVar5;
        *puVar6 = &PTR_FUN_1011a5868;
      }
      *param_1 = puVar6;
    }
  }
  return param_1;
}

