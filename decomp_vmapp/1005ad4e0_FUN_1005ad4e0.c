
undefined1 FUN_1005ad4e0(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined1 uVar6;
  
  if (*(int *)(param_1 + 0x34) == -1) {
    uVar6 = 0;
  }
  else if (*(int *)(param_1 + 0x38) == 0) {
    uVar6 = 0;
    FUN_1008e3970("","vdisk",0,"Error: layer ref counter is zero!");
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","BlockGroup.cpp",0x3ae,
                  "DropLayer");
  }
  else {
    iVar1 = *(int *)(param_1 + 0x38) + -1;
    *(int *)(param_1 + 0x38) = iVar1;
    uVar6 = 1;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
      QMutex::lock();
      uVar2 = *(uint *)(param_1 + 0x18);
      if (uVar2 != 0) {
        lVar3 = *(long *)(param_1 + 0x10);
        uVar5 = 0;
        lVar4 = 8;
        do {
          if (*(void **)(lVar3 + lVar4) != (void *)0x0) {
            operator_delete__(*(void **)(lVar3 + lVar4));
            lVar3 = *(long *)(param_1 + 0x10);
            *(undefined8 *)(lVar3 + lVar4) = 0;
            uVar2 = *(uint *)(param_1 + 0x18);
          }
          uVar5 = uVar5 + 1;
          lVar4 = lVar4 + 0x40;
        } while (uVar5 < uVar2);
      }
      QMutex::unlock();
    }
  }
  return uVar6;
}

