
void FUN_1000dd750(undefined2 *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  
  if (param_2 != 0) {
    uVar1 = param_2 - 1;
    uVar2 = (ulong)uVar1;
    uVar3 = 0;
    if ((param_2 & 1) != 0) {
      *param_1 = 1;
      if (uVar2 == 0) {
        param_1[3] = 0x2020;
        *(undefined4 *)(param_1 + 1) = 0x20415349;
      }
      else {
        param_1[3] = 0x2020;
        *(undefined4 *)(param_1 + 1) = 0x20494350;
      }
      uVar3 = 1;
    }
    if (uVar1 != 0) {
      puVar5 = (undefined4 *)(param_1 + uVar3 * 4 + 5);
      do {
        *(undefined1 *)((long)puVar5 + -10) = 1;
        *(char *)((long)puVar5 + -9) = (char)uVar3;
        if (uVar3 == uVar2) {
          *(undefined2 *)(puVar5 + -1) = 0x2020;
          puVar5[-2] = 0x20415349;
        }
        else {
          *(undefined2 *)(puVar5 + -1) = 0x2020;
          puVar5[-2] = 0x20494350;
        }
        uVar4 = uVar3 + 1;
        *(undefined1 *)((long)puVar5 + -2) = 1;
        *(char *)((long)puVar5 + -1) = (char)uVar4;
        if (uVar4 == uVar2) {
          *(undefined2 *)(puVar5 + 1) = 0x2020;
          *puVar5 = 0x20415349;
        }
        else {
          *(undefined2 *)(puVar5 + 1) = 0x2020;
          *puVar5 = 0x20494350;
        }
        uVar3 = uVar3 + 2;
        puVar5 = puVar5 + 4;
      } while ((uint)uVar4 != uVar1);
    }
  }
  return;
}

