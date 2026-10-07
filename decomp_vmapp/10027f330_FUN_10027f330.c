
void FUN_10027f330(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *in_RAX;
  uint uVar3;
  long *local_28;
  
  *param_1 = &PTR_FUN_100bafb50;
  param_1[1] = &PTR_metaObject_100bafbc8;
  local_28 = in_RAX;
  FUN_100257ee0();
  uVar3 = 0;
  do {
    FUN_100280150(&local_28,uVar3 & 0xffff);
    if (*(long *)(local_28[2] + 8) != 0) {
      FUN_10025ab50(*(long *)(local_28[2] + 8));
    }
    if (local_28 != (long *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  FUN_100257ad0(param_1);
  return;
}

