
ulong FUN_100c5f490(long param_1,void *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  size_t sVar4;
  ulong uVar5;
  ulong uVar6;
  
  FUN_100c58810(param_1,0xf);
  uVar5 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = *(long *)(**(long **)(param_1 + 0x30) + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = 0;
    if ((param_2 != (void *)0x0) && (param_3 != 0)) {
      uVar6 = (ulong)param_3;
      uVar5 = *(ulong *)(lVar1 + 0x10);
      if (uVar5 == 0) {
        uVar5 = 0;
        if (*(int *)(lVar1 + 8) == 0) {
          FUN_100c58830(param_1,9);
          if (*(ulong *)(lVar1 + 0x20) < uVar6) {
            uVar6 = *(ulong *)(lVar1 + 0x20);
          }
          *(ulong *)(lVar1 + 0x30) = uVar6;
          uVar5 = 0xffffffff;
        }
      }
      else {
        if (uVar5 < uVar6) {
          uVar6 = uVar5;
        }
        lVar2 = *(long *)(lVar1 + 0x18);
        uVar5 = uVar6;
        do {
          sVar4 = *(ulong *)(lVar1 + 0x20) - lVar2;
          if (lVar2 + uVar5 <= *(ulong *)(lVar1 + 0x20)) {
            sVar4 = uVar5;
          }
          _memcpy(param_2,(void *)(lVar2 + *(long *)(lVar1 + 0x28)),sVar4);
          lVar2 = *(long *)(lVar1 + 0x10) - sVar4;
          *(long *)(lVar1 + 0x10) = lVar2;
          if (lVar2 == 0) {
            *(undefined8 *)(lVar1 + 0x18) = 0;
            lVar2 = 0;
          }
          else {
            lVar3 = *(long *)(lVar1 + 0x18) + sVar4;
            lVar2 = 0;
            if (lVar3 != *(long *)(lVar1 + 0x20)) {
              lVar2 = lVar3;
            }
            *(long *)(lVar1 + 0x18) = lVar2;
            param_2 = (void *)((long)param_2 + sVar4);
          }
          uVar5 = uVar5 - sVar4;
        } while (uVar5 != 0);
        uVar5 = uVar6 & 0xffffffff;
      }
    }
  }
  return uVar5;
}

