
void FUN_10029c780(int *param_1)

{
  uint uVar1;
  long lVar2;
  
  *(undefined2 *)(param_1 + 0x2a) = 0x101;
  lVar2 = 0;
  do {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x2c) + lVar2 * 2);
    if (((int)uVar1 < 8) && (*param_1 != 6)) {
      if ((param_1[(ulong)uVar1 + 10] == 0) ||
         (*(undefined1 *)((long)param_1 + 0xa9) = 0, (uint)param_1[(ulong)uVar1 + 10] < 0x1f)) {
        *(undefined1 *)(param_1 + 0x2a) = 0;
        *(uint *)((long)param_1 + lVar2 * 2 + 0x48) =
             (uint)(param_1[8] * param_1[(ulong)uVar1 + 10]) / 0x1f;
        *(undefined8 *)(param_1 + lVar2 + 0x1a) =
             *(undefined8 *)
              (&DAT_100b36570 +
              (ulong)(uint)param_1[(ulong)*(uint *)(*(long *)(param_1 + 0x2c) + lVar2 * 2) + 10] * 8
              );
      }
      else {
        *(int *)((long)param_1 + lVar2 * 2 + 0x48) = param_1[8];
        (param_1 + lVar2 + 0x1a)[0] = 0;
        (param_1 + lVar2 + 0x1a)[1] = 0;
      }
    }
    else {
      *(undefined4 *)((long)param_1 + lVar2 * 2 + 0x48) = 0;
      (param_1 + lVar2 + 0x1a)[0] = 0;
      (param_1 + lVar2 + 0x1a)[1] = 0x3ff00000;
    }
    lVar2 = lVar2 + 2;
  } while (lVar2 != 0x10);
  return;
}

