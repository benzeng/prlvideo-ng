
int FUN_1005278f0(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char local_41;
  ulong local_40;
  undefined1 local_38 [8];
  
  local_40 = param_5;
  iVar5 = _memcmp(param_2 + 4,(void *)(param_5 + 0x28),0x10);
  uVar9 = 0;
  if ((iVar5 == 0) ||
     (((((iVar5 = *(int *)(param_2 + 4), -0x3d091 < iVar5 &&
         (-0x3d091 < *(int *)((long)param_2 + 0x24))) && (*(int *)(param_2 + 5) < 0x3d091)) &&
       ((*(int *)((long)param_2 + 0x24) <= *(int *)((long)param_2 + 0x2c) &&
        (iVar5 <= *(int *)(param_2 + 5))))) && (uVar9 = 1, *(int *)((long)param_2 + 0x2c) < 0x3d091)
      ))) {
    cVar4 = FUN_100527de0();
    uVar1 = uVar9 + 2;
    if (cVar4 == '\0') {
      uVar1 = uVar9;
    }
    cVar4 = FUN_100527f00();
    uVar9 = uVar1 | 4;
    if (cVar4 == '\0') {
      uVar9 = uVar1;
    }
    uVar9 = (*(uint *)(param_5 + 0x18) ^ *(uint *)(param_2 + 2)) & 0x20 | uVar9;
    local_41 = '\0';
    cVar4 = FUN_100528000(param_1,param_2,param_5,param_3,param_4,&local_41);
    if (cVar4 == '\0') {
      iVar5 = 0;
    }
    else {
      uVar9 = uVar9 | 0x10;
      iVar5 = (int)((char)(local_41 << 7) >> 7);
    }
    uVar1 = *(uint *)(param_2 + 2);
    uVar8 = *(uint *)(param_5 + 0x18);
    uVar7 = uVar9 | 8;
    if ((uVar1 >> 1 & 1 | uVar1 * 2 & 2) == (uVar8 >> 1 & 1 | uVar8 * 2 & 2)) {
      uVar7 = uVar9;
    }
    uVar8 = uVar8 ^ uVar1;
    uVar9 = uVar8 * 8;
    *(undefined8 *)(param_5 + 0x30) = param_2[5];
    *(undefined8 *)(param_5 + 0x28) = param_2[4];
    *(undefined8 *)(param_5 + 0x20) = param_2[3];
    *(undefined8 *)(param_5 + 0x18) = param_2[2];
    uVar2 = *param_2;
    *(undefined8 *)(param_5 + 0x10) = param_2[1];
    *(undefined8 *)(param_5 + 8) = uVar2;
    if (*(long *)(param_5 + 0x38) == 0) {
      *(undefined4 *)(param_5 + 0x1c) = 0;
    }
    uVar7 = uVar9 & 0x40c0 | uVar8 * 2 & 0x100 | uVar9 & 0x200 | uVar9 & 0x800 |
            (uVar8 & 0x200) << 4 | uVar8 >> 4 & 0x8000 | uVar8 >> 4 & 0x10000 | uVar7;
    if (*(long *)(param_5 + 0x48) == 0) {
      *(undefined4 *)(param_5 + 0x20) = 0;
    }
    *(uint *)(param_5 + 0x90) = *(uint *)(param_5 + 0x90) | uVar7;
    if (uVar7 != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x830);
      if (*(uint *)(puVar3 + 4) != 0) {
        uVar9 = (uint)(param_5 >> 0x1f) ^ (uint)param_5 ^ *(uint *)((long)puVar3 + 0x24);
        for (puVar6 = *(undefined8 **)
                       (puVar3[1] + ((ulong)uVar9 % (ulong)*(uint *)(puVar3 + 4)) * 8);
            puVar6 != puVar3; puVar6 = (undefined8 *)*puVar6) {
          if ((*(uint *)(puVar6 + 1) == uVar9) && (puVar6[2] == param_5)) {
            if (puVar6 != puVar3) {
              return iVar5;
            }
            break;
          }
        }
      }
      FUN_100529480(param_1 + 0x838,&local_40,local_38);
    }
  }
  else {
    iVar5 = -0xffffffd;
    if ((0 < DAT_1011b55f8) &&
       (FUN_1008e3970("CHRSERVER","ChrDAStorage",1,
                      "Window (changed) bounds are invalid. Ignore it: [0x%08X] pid=%d",
                      *(undefined4 *)param_2,*(undefined4 *)(param_2 + 1)), 0 < DAT_1011b55f8)) {
      iVar10 = *(int *)((long)param_2 + 0x2c) - *(int *)((long)param_2 + 0x24);
      FUN_1008e3970("CHRSERVER","ChrDAStorage",1,"  guest bounds [%d;%d]-[%d;%d] w=%d; h=%d",
                    *(int *)(param_2 + 4),*(int *)((long)param_2 + 0x24),*(int *)(param_2 + 5),
                    *(int *)((long)param_2 + 0x2c),*(int *)(param_2 + 5) - *(int *)(param_2 + 4),
                    iVar10);
      if (0 < DAT_1011b55f8) {
        uVar9 = *(uint *)(param_2 + 2);
        FUN_1008e3970("CHRSERVER","ChrDAStorage",1,
                      "  hidden=%d tool=%d appwnd=%d layered=%d nrects=%d",uVar9 >> 6 & 1,
                      uVar9 >> 4 & 1,uVar9 >> 10 & 1,uVar9 >> 5 & 1,
                      *(undefined4 *)((long)param_2 + 0x14),iVar10);
      }
    }
  }
  return iVar5;
}

