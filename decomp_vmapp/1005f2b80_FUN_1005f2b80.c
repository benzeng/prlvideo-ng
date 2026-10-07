
undefined8 * FUN_1005f2b80(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
    if (param_1 != (void *)0x0) {
      QFileInfo::~QFileInfo((QFileInfo *)((long)param_1 + 0x208));
      plVar2 = *(long **)((long)param_1 + 0x200);
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      operator_delete(param_1);
      puVar4 = (undefined8 *)0x0;
    }
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
    puVar4[2] = param_1;
    *puVar4 = &PTR_FUN_10111e358;
  }
  return puVar4;
}

