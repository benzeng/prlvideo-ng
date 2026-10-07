
void FUN_1004c1c00(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 == 3) {
    LOCK();
    lVar3 = *(long *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = 0;
    UNLOCK();
    if (lVar3 != 0) {
      uVar2 = 0xf0000020;
LAB_1004c1c5e:
      FUN_1004c07d0(param_1,lVar3,uVar2);
      return;
    }
  }
  else if (param_2 == 2) {
    LOCK();
    lVar3 = *(long *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = 0;
    UNLOCK();
    if (lVar3 != 0) {
      puVar1 = (undefined8 *)FUN_1002a6010(lVar3);
      *puVar1 = 0;
      *(undefined4 *)puVar1 = 0;
      *(undefined4 *)((long)puVar1 + 4) = 2;
      uVar2 = 0;
      goto LAB_1004c1c5e;
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x2c) = 1;
    UNLOCK();
  }
  return;
}

