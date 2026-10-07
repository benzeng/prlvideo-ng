
void FUN_10056dd60(long param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  
  if (*(long *)(param_1 + 0x1218) == 0) {
    FUN_1008e3970("","vdisk",0,"Error: aio is null");
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","DiskStatesImp.cpp",0x872,
                  "UnplugAsync");
  }
  plVar4 = *(long **)(param_1 + 0x1228);
  while (plVar4 != (long *)(param_1 + 0x1228)) {
    lVar1 = *plVar4;
    plVar2 = (long *)plVar4[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar4 = (long)plVar4;
    plVar4[1] = (long)plVar4;
    (*(code *)plVar4[3])(plVar4[2]);
    plVar4 = *(long **)(param_1 + 0x1228);
  }
  plVar4 = *(long **)(param_1 + 0x1218);
  iVar3 = 1;
  if (*(int *)((long)plVar4 + 0xc) != 0) {
    FUN_1008e3970("","vdisk",0,"AIO Wait/Submit recursion detected!");
    iVar3 = *(int *)((long)plVar4 + 0xc) + 1;
  }
  *(int *)((long)plVar4 + 0xc) = iVar3;
  (**(code **)(*plVar4 + 0x38))(plVar4);
  *(int *)((long)plVar4 + 0xc) = *(int *)((long)plVar4 + 0xc) + -1;
  return;
}

