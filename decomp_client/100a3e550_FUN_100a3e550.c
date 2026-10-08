
void FUN_100a3e550(long param_1,ulong *param_2,long *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  QMutex::lock();
  if (*(char *)(param_1 + 0x28) != '\0') {
    puVar1 = *(undefined8 **)(param_1 + 0x60);
    if (*(uint *)(puVar1 + 4) != 0) {
      uVar2 = *param_2;
      uVar4 = (uint)(uVar2 >> 0x1f) ^ (uint)uVar2 ^ *(uint *)((long)puVar1 + 0x24);
      for (puVar3 = *(undefined8 **)(puVar1[1] + ((ulong)uVar4 % (ulong)*(uint *)(puVar1 + 4)) * 8);
          puVar3 != puVar1; puVar3 = (undefined8 *)*puVar3) {
        if ((*(uint *)(puVar3 + 1) == uVar4) && (uVar2 == puVar3[2])) {
          if (puVar3 != puVar1) {
            FUN_100a3caf0(param_1,0,uVar2,*(undefined4 *)*param_3,1);
            FUN_100a3caf0(param_1,1,*param_2,*(undefined4 *)(*param_3 + 4),1);
            FUN_100a3caf0(param_1,2,*param_2,*(undefined4 *)(*param_3 + 8),1);
            FUN_100a3caf0(param_1,3,*param_2,*(undefined4 *)(*param_3 + 0xc),1);
            FUN_100a3caf0(param_1,4,*param_2,*(undefined4 *)(*param_3 + 0x10),1);
            FUN_100a3caf0(param_1,5,*param_2,*(undefined4 *)(*param_3 + 0x14),1);
          }
          break;
        }
      }
    }
  }
  QMutex::unlock();
  return;
}

