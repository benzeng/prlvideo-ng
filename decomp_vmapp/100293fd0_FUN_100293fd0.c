
void FUN_100293fd0(long param_1,uint param_2)

{
  uint *puVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar3 = *(long *)(param_1 + 0x1018);
  uVar5 = 0;
  if (param_2 != 0) {
    for (; (param_2 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
    }
  }
  if (param_2 == 0) {
    uVar5 = 0xffffffff;
  }
  lVar8 = (ulong)uVar5 * 0x78;
  lVar7 = (ulong)uVar5 * 0x20;
  lVar6 = lVar3 + lVar7;
  *(long *)(param_1 + 0xd8 + lVar8) = lVar6;
  *(undefined1 *)(param_1 + 0x9e + lVar8) = 0;
  if (((*(uint *)(lVar3 + lVar7) >> 0xc & 0xffff0) + 0x80 < *(uint *)(param_1 + 0x100 + lVar8)) ||
     (*(long *)(param_1 + 0xf8 + lVar8) !=
      CONCAT44(*(undefined4 *)(lVar3 + 0xc + lVar7),*(undefined4 *)(lVar3 + 8 + lVar7)))) {
    FUN_10008d2d0(param_1 + 0xf0 + lVar8);
    lVar6 = *(long *)(param_1 + 0xd8 + lVar8);
  }
  lVar8 = param_1 + 0x90 + lVar8;
  puVar1 = (uint *)(*(long *)(param_1 + 0xff8) + 0x20);
  *puVar1 = *puVar1 | 0x80;
  if ((*(byte *)(lVar6 + 1) & 4) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0xfd8) + 0xf0);
    *plVar2 = *plVar2 + 1;
  }
  cVar4 = FUN_100291420(param_1,lVar8);
  if (cVar4 != '\0') {
    return;
  }
  FUN_100291510(param_1,lVar8);
  return;
}

