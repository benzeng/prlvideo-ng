
void FUN_100333320(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  
  *(uint *)(param_1 + 0x8270 + (ulong)param_2 * 4) = param_3;
  if (0x4ff < param_2 - 0x100) {
    lVar1 = **(long **)(param_1 + 400);
    uVar2 = *(ulong *)(param_1 + 0x188) | *(ulong *)(lVar1 + (ulong)param_2 * 8);
    *(ulong *)(param_1 + 0x188) = uVar2;
    if ((param_2 == 0x9a) && ((param_3 & 0xfeffffff) == 0x304d3241)) {
      *(ulong *)(param_1 + 0x188) = uVar2 | *(ulong *)(lVar1 + 0x3090);
    }
    return;
  }
  switch(param_2 & 0x3f) {
  case 0:
    lVar1 = **(long **)(param_1 + 400);
    uVar2 = *(ulong *)(param_1 + 0x188) | *(ulong *)(lVar1 + 0x3058);
    *(ulong *)(param_1 + 0x188) = uVar2;
    *(ulong *)(param_1 + 0x188) = uVar2 | *(ulong *)(lVar1 + 0x3070);
    return;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 0xb:
  case 0x18:
  case 0x1a:
  case 0x1b:
  case 0x1c:
    *(ulong *)(param_1 + 0x188) =
         *(ulong *)(param_1 + 0x188) | *(ulong *)(**(long **)(param_1 + 400) + 0x3050);
    return;
  case 7:
  case 8:
  case 9:
  case 10:
  case 0x16:
  case 0x17:
    *(ulong *)(param_1 + 0x188) =
         *(ulong *)(param_1 + 0x188) | *(ulong *)(**(long **)(param_1 + 400) + 0x3068);
    return;
  default:
    lVar1 = **(long **)(param_1 + 400);
    break;
  case 0x1d:
    lVar1 = **(long **)(param_1 + 400);
    if (*(char *)(DAT_1011c8478 + 0x36) == '\0') goto LAB_100333437;
    break;
  case 0x21:
    lVar1 = **(long **)(param_1 + 400);
LAB_100333437:
    *(ulong *)(param_1 + 0x188) = *(ulong *)(param_1 + 0x188) | *(ulong *)(lVar1 + 0x3060);
    return;
  }
  *(ulong *)(param_1 + 0x188) = *(ulong *)(param_1 + 0x188) | *(ulong *)(lVar1 + 0x3070);
  return;
}

