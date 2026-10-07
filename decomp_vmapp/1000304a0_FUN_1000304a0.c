
undefined1
FUN_1000304a0(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  uint local_34;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    local_34 = param_2;
    QMutex::lock();
    puVar1 = *(undefined8 **)(param_1 + 0x270);
    if (*(uint *)(puVar1 + 4) != 0) {
      uVar3 = *(uint *)((long)puVar1 + 0x24) ^ param_2;
      for (puVar2 = *(undefined8 **)(puVar1[1] + ((ulong)uVar3 % (ulong)*(uint *)(puVar1 + 4)) * 8);
          puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
        if ((*(uint *)(puVar2 + 1) == uVar3) && (*(uint *)((long)puVar2 + 0xc) == param_2)) {
          if (puVar2 != puVar1) {
            uVar4 = 0;
            goto LAB_100030555;
          }
          break;
        }
      }
    }
    uVar4 = 1;
    local_50 = param_3;
    local_48 = param_4;
    local_40 = param_5;
    FUN_1000318d0(param_1 + 0x270,&local_34,&local_50);
LAB_100030555:
    QMutex::unlock();
  }
  return uVar4;
}

