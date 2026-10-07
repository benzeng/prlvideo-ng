
void * FUN_100795490(uint param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  uint uVar3;
  undefined1 local_24 [4];
  
  QMutex::lock();
  if (*(uint *)(DAT_1011ccbf0 + 4) != 0) {
    uVar3 = *(uint *)((long)DAT_1011ccbf0 + 0x24) ^ param_1;
    for (puVar1 = *(undefined8 **)
                   (DAT_1011ccbf0[1] + ((ulong)uVar3 % (ulong)*(uint *)(DAT_1011ccbf0 + 4)) * 8);
        puVar1 != DAT_1011ccbf0; puVar1 = (undefined8 *)*puVar1) {
      if ((*(uint *)(puVar1 + 1) == uVar3) && (*(uint *)((long)puVar1 + 0xc) == param_1)) {
        if (puVar1 != DAT_1011ccbf0) {
          puVar1 = (undefined8 *)FUN_100795730(&DAT_1011ccbf0,local_24);
          pvVar2 = (void *)*puVar1;
          goto LAB_1007956a8;
        }
        break;
      }
    }
  }
  pvVar2 = (void *)0x0;
  if (param_1 == 2) {
    pvVar2 = operator_new(0x28);
    FUN_100792b90(pvVar2,2,1);
  }
  else if (param_1 == 1) {
    pvVar2 = operator_new(0x28);
    FUN_100792b90(pvVar2,1,1);
    FUN_100793e60(pvVar2,0x30daa,2,1);
    FUN_100793e60(pvVar2,0x30db3,2,1);
    FUN_100793e60(pvVar2,0x30da4,2,1);
    FUN_100793e60(pvVar2,0x30da5,2,1);
    FUN_100793e80(pvVar2,1000,1999,2,1);
    FUN_100793e80(pvVar2,2000,2999,2,1);
    FUN_100793e80(pvVar2,3000,3999,2,1);
    FUN_100793e80(pvVar2,4000,4999,2,1);
    FUN_100793e80(pvVar2,5000,5999,2,1);
    FUN_100793e80(pvVar2,6000,7000,2,1);
  }
  else if (param_1 == 0) {
    pvVar2 = operator_new(0x28);
    FUN_100792b90(pvVar2,1,1);
  }
  puVar1 = (undefined8 *)FUN_100795730(&DAT_1011ccbf0,local_24);
  *puVar1 = pvVar2;
LAB_1007956a8:
  QMutex::unlock();
  return pvVar2;
}

