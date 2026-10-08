
void FUN_100765a30(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong local_20;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  local_20 = param_2;
  if ((*(int *)((long)puVar1 + 0x14) != 0) && (*(uint *)(puVar1 + 4) != 0)) {
    uVar3 = (uint)(param_2 >> 0x1f) ^ (uint)param_2 ^ *(uint *)((long)puVar1 + 0x24);
    for (puVar2 = *(undefined8 **)(puVar1[1] + ((ulong)uVar3 % (ulong)*(uint *)(puVar1 + 4)) * 8);
        puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
      if ((*(uint *)(puVar2 + 1) == uVar3) && (puVar2[2] == param_2)) {
        if ((puVar2 != puVar1) && (puVar2[3] != 0)) {
          QObject::deleteLater();
        }
        break;
      }
    }
  }
  FUN_100765f50(param_1 + 0x20,&local_20);
  FUN_10085bca0(param_1);
  return;
}

