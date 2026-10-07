
void FUN_1002c14c0(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  
  do {
    while( true ) {
      plVar1 = *(long **)(param_1 + 0x310);
      if (plVar1 != (long *)0x0) {
        iVar2 = 1;
        if (*(int *)((long)plVar1 + 0xc) != 0) {
          FUN_1008e3970("","USB",0,"AIO Wait/Submit recursion detected!");
          iVar2 = *(int *)((long)plVar1 + 0xc) + 1;
        }
        *(int *)((long)plVar1 + 0xc) = iVar2;
        (**(code **)(*plVar1 + 0x40))(plVar1,0);
        *(int *)((long)plVar1 + 0xc) = *(int *)((long)plVar1 + 0xc) + -1;
      }
      lVar3 = FUN_100257d80(param_1);
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x2030);
      *(int *)(lVar3 + 0x2030) = 0;
      UNLOCK();
      if (iVar2 == 0) break;
      FUN_1002c15f0(param_1,iVar2,param_2);
    }
    FUN_1002ef6b0(*(undefined8 *)(param_1 + 0x40));
    lVar3 = FUN_100257d80(param_1);
  } while (*(int *)(lVar3 + 0x2030) != 0);
  return;
}

