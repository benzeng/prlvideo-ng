
void FUN_100584e90(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x128) != param_1 + 0x128) {
    FUN_1008e3970("","vdisk",0,"Error: storage has dios in list");
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","Storage.cpp",0xf9d,
                  "CloseCurrentPath");
  }
  lVar1 = *(long *)(param_1 + 0x40);
  uVar2 = *(ulong *)(param_1 + 0x58);
  plVar4 = (long *)(lVar1 + (uVar2 >> 9) * 8);
  plVar3 = (long *)0x0;
  plVar5 = (long *)0x0;
  if (*(long *)(param_1 + 0x48) != lVar1) {
    plVar3 = (long *)((uVar2 & 0x1ff) * 8 + *plVar4);
    uVar2 = uVar2 + *(long *)(param_1 + 0x60);
    plVar5 = (long *)((uVar2 & 0x1ff) * 8 + *(long *)(lVar1 + (uVar2 >> 9) * 8));
  }
  while (plVar3 != plVar5) {
    if ((long *)*plVar3 != (long *)0x0) {
      (**(code **)(*(long *)*plVar3 + 0x28))();
      (**(code **)(*(long *)*plVar3 + 0x20))();
    }
    *plVar3 = 0;
    plVar3 = plVar3 + 1;
    if ((long)plVar3 - *plVar4 == 0x1000) {
      plVar3 = (long *)plVar4[1];
      plVar4 = plVar4 + 1;
    }
  }
  FUN_100598ee0(param_1 + 0x38);
  return;
}

