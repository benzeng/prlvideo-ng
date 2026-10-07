
void FUN_100750b90(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[6] != 0) {
    plVar2 = (long *)param_1[10];
    param_1[10] = 0;
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
    FUN_10074ff00(param_1);
    if (param_1[7] != 0) {
      (**(code **)(*param_1 + 0x48))(param_1);
      param_1[7] = 0;
    }
    if (param_1[8] != 0) {
      (**(code **)(*param_1 + 0x48))(param_1);
      param_1[8] = 0;
    }
    return;
  }
  FUN_1008e3970("","Compression",0,"Uncompress: engine is not active");
  return;
}

