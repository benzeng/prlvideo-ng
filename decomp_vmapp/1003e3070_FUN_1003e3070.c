
undefined8 FUN_1003e3070(long *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) ||
     (uVar1 = *(uint *)(param_1 + 0x19), uVar1 == 0xffffffff)) {
    uVar1 = (uint)CONCAT11((char)*(undefined2 *)(param_1[0xb] + 8),
                           (char)((ushort)*(undefined2 *)(param_1[0xb] + 8) >> 8));
  }
  if ((short)uVar1 == 0) {
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  else {
    uVar3 = uVar1 & 0xffff;
    (**(code **)(*param_1 + 0x278))(param_1,8,uVar3);
    if (uVar3 != 0) {
      lVar2 = 0;
      if ((uVar1 & 3) != 0) {
        lVar2 = 0;
        do {
          *(undefined1 *)(param_1[9] + lVar2) = 0;
          lVar2 = lVar2 + 1;
        } while ((uVar1 & 3) != (uint)lVar2);
      }
      if (2 < (uVar1 & 0xffff) - 1) {
        do {
          *(undefined1 *)(param_1[9] + lVar2) = 0;
          *(undefined1 *)(param_1[9] + 1 + lVar2) = 0;
          *(undefined1 *)(param_1[9] + 2 + lVar2) = 0;
          *(undefined1 *)(param_1[9] + 3 + lVar2) = 0;
          lVar2 = lVar2 + 4;
        } while ((uVar1 & 0xffff) != (uint)lVar2);
      }
    }
    if (uVar3 < 7) {
      if (uVar3 < 6) {
        return 0;
      }
    }
    else {
      *(undefined1 *)(param_1[9] + 5) = 1;
    }
    *(undefined4 *)(param_1[9] + 1) = 0x10000;
  }
  return 0;
}

