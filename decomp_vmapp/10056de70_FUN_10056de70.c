
undefined8 FUN_10056de70(long *param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  byte bVar6;
  
  if (param_1[0x243] == 0) {
    FUN_1008e3970("","vdisk",0,"Error: aio is null");
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","DiskStatesImp.cpp",0x885,
                  "ExecuteOnWait");
  }
  plVar1 = param_1 + 0x247;
  bVar6 = 0;
  while( true ) {
    (**(code **)(*param_1 + 0x108))(param_1);
    plVar5 = (long *)param_1[0x243];
    iVar4 = 1;
    if (*(int *)((long)plVar5 + 0xc) != 0) {
      FUN_1008e3970("","vdisk",0,"AIO Wait/Submit recursion detected!");
      iVar4 = *(int *)((long)plVar5 + 0xc) + 1;
    }
    *(int *)((long)plVar5 + 0xc) = iVar4;
    iVar4 = (**(code **)(*plVar5 + 0x40))(plVar5,param_2);
    *(int *)((long)plVar5 + 0xc) = *(int *)((long)plVar5 + 0xc) + -1;
    bVar6 = bVar6 | iVar4 != 0;
    plVar5 = (long *)*plVar1;
    if (plVar5 == plVar1) break;
    do {
      lVar2 = *plVar5;
      plVar3 = (long *)plVar5[1];
      *(long **)(lVar2 + 8) = plVar3;
      *plVar3 = lVar2;
      *plVar5 = (long)plVar5;
      plVar5[1] = (long)plVar5;
      (*(code *)plVar5[3])(plVar5[2]);
      plVar5 = (long *)*plVar1;
      param_2 = 0;
    } while (plVar5 != plVar1);
  }
  return CONCAT71((int7)((ulong)plVar5 >> 8),bVar6);
}

