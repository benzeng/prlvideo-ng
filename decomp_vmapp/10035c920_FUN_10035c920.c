
ulong FUN_10035c920(long param_1,undefined4 *param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 local_34;
  
  uVar3 = 0;
  if (*(long **)(param_1 + 0x38) != (long *)(param_1 + 0x30)) {
    lVar5 = **(long **)(param_1 + 0x38);
    uVar4 = 0;
    if (lVar5 != 0) {
      uVar4 = 0;
      do {
        uVar4 = (ulong)((int)uVar4 + 1);
        lVar5 = **(long **)(lVar5 + 0x40);
      } while (lVar5 != 0);
    }
    uVar1 = uVar4 * 8 + 4;
    uVar3 = 0;
    if (uVar1 <= param_3) {
      *param_2 = (int)uVar4;
      (*DAT_1011c5d40)();
      lVar5 = **(long **)(param_1 + 0x38);
      uVar3 = uVar1;
      if (lVar5 != 0) {
        uVar4 = 0;
        do {
          lVar2 = *(long *)(lVar5 + 0x30);
          FUN_10035c570(param_1,lVar5,&local_34,0);
          param_2[uVar4 * 2 + 1] = *(undefined4 *)(lVar2 + 8);
          param_2[uVar4 * 2 + 2] = local_34;
          lVar2 = *(long *)(lVar5 + 0x48);
          *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar5 + 0x40);
          *(long *)(*(long *)(lVar5 + 0x40) + 0x10) = lVar2;
          *(long *)(lVar5 + 0x40) = lVar5 + 0x38;
          *(long *)(lVar5 + 0x48) = lVar5 + 0x38;
          uVar4 = (ulong)((int)uVar4 + 1);
          lVar5 = **(long **)(param_1 + 0x38);
        } while (lVar5 != 0);
      }
    }
  }
  return uVar3;
}

