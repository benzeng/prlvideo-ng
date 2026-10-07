
undefined8 FUN_1004c16c0(long param_1,long param_2,char param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (*(ushort *)(param_2 + 0x14) < 8) {
    return 0xf0000003;
  }
  lVar2 = FUN_1002a6010(param_2);
  iVar1 = *(int *)(lVar2 + 4);
  puVar3 = (undefined8 *)FUN_1002a6010();
  *puVar3 = 0;
  if (iVar1 == 2) {
    if (param_3 != '\0') {
      LOCK();
      lVar2 = *(long *)(param_1 + 0x30);
      if (lVar2 == 0) {
        *(long *)(param_1 + 0x30) = param_2;
        lVar2 = 0;
      }
      UNLOCK();
      if (lVar2 != 0) {
        return 0xf000001e;
      }
    }
    LOCK();
    iVar1 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = 0;
    UNLOCK();
    iVar4 = 1;
    if (iVar1 == 0) {
      LOCK();
      iVar1 = *(int *)(param_1 + 0x2c);
      *(int *)(param_1 + 0x2c) = 0;
      UNLOCK();
      iVar4 = (uint)(iVar1 != 0) * 2;
    }
    if (param_3 != '\0') {
      if (iVar4 == 0) {
        return 0xffffffff;
      }
      LOCK();
      lVar2 = *(long *)(param_1 + 0x30);
      if (param_2 == lVar2) {
        *(long *)(param_1 + 0x30) = 0;
        lVar2 = param_2;
      }
      UNLOCK();
      if (lVar2 != param_2) {
        if (iVar4 == 2) {
          LOCK();
          *(undefined4 *)(param_1 + 0x2c) = 1;
          UNLOCK();
          return 0xffffffff;
        }
        if (iVar4 != 1) {
          return 0xffffffff;
        }
        LOCK();
        *(undefined4 *)(param_1 + 0x28) = 1;
        UNLOCK();
        return 0xffffffff;
      }
    }
    *(undefined4 *)puVar3 = 0;
    *(int *)((long)puVar3 + 4) = iVar4;
  }
  else {
    *(undefined4 *)puVar3 = 1;
  }
  return 0;
}

