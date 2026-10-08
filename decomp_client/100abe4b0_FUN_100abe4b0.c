
void FUN_100abe4b0(long param_1,char param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  undefined8 local_18;
  
  if (*(char *)(param_1 + 0x51) != param_2) {
    *(char *)(param_1 + 0x51) = param_2;
    if (param_2 == '\0') {
      local_18 = in_RAX;
      if (*(char *)(param_1 + 0x52) != '\0') {
        local_18 = CONCAT44(0x10,(int)in_RAX);
        FUN_100a4a170(param_1 + 0x10,(long)&local_18 + 4,4);
      }
      uVar4 = 0;
      if (*(long *)(param_1 + 0x30) != 0) {
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
      }
      FUN_100abf970(uVar4);
      plVar2 = *(long **)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = 0;
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
      FUN_100abdc80(param_1);
    }
    else {
      local_18 = CONCAT44((int)((ulong)in_RAX >> 0x20),5);
      FUN_100a4a170(param_1 + 0x10,&local_18,4);
      if (*(char *)(param_1 + 0x52) != '\0') {
        FUN_100abe090(param_1);
      }
    }
  }
  return;
}

