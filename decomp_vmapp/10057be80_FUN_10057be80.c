
undefined8 FUN_10057be80(long param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x1210) + 0x50))();
  if (cVar1 == '\0') {
    pcVar3 = "[%p] ForceConsistencyCheckCb() terminated by AsyncDev state changing";
  }
  else {
    if (*(long *)(param_1 + 0x12d8) == 0) {
      return 0;
    }
    if ((*(uint *)(*(long *)(param_1 + 0x12d8) + 0x30) | 8) == 8) {
      uVar4 = 0;
      FUN_1008e3970("Compact","vdisk",0,"[%p] ConsistencyCheck forced ",param_1);
      lVar2 = *(long *)(param_1 + 0x1128);
      if (*(long *)(param_1 + 0x1130) != lVar2) {
        do {
          FUN_100597140(*(undefined8 *)(lVar2 + uVar4 * 8));
          uVar4 = uVar4 + 1;
          lVar2 = *(long *)(param_1 + 0x1128);
        } while (uVar4 < (ulong)(*(long *)(param_1 + 0x1130) - lVar2 >> 3));
      }
      lVar2 = *(long *)(param_1 + 0x12d8);
      *(undefined4 *)(lVar2 + 0x30) = 0;
      *(undefined1 *)(lVar2 + 0x48) = 1;
      FUN_100575b80(param_1);
      return 0;
    }
    pcVar3 = "[%p] Compaction in progress, try later";
  }
  FUN_1008e3970("Compact","vdisk",0,pcVar3,param_1);
  return 0;
}

