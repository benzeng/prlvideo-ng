
ulong FUN_1007f7740(long param_1)

{
  code *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined8 in_RAX;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int local_24;
  
  local_24 = (int)((ulong)in_RAX >> 0x20);
  uVar4 = (**(code **)(*(long *)(param_1 + 8) + 0x60))
                    (param_1,0x11f0,0x11f1,0xffffffff,0x4000,&local_24);
  if (local_24 == 0) goto LAB_1007f7910;
  if (*(int *)(*(long *)(param_1 + 0x80) + 0x3a0) == 0x16) {
    if (uVar4 < 4) {
      uVar6 = 0x9f;
      uVar7 = 0x8e1;
    }
    else {
      pcVar2 = *(char **)(param_1 + 0x58);
      if (*pcVar2 == '\x01') {
        uVar8 = (ulong)(byte)pcVar2[3] |
                (ulong)(byte)pcVar2[2] << 8 | (ulong)(byte)pcVar2[1] << 0x10;
        if (uVar8 + 4 == uVar4) {
          lVar5 = FUN_10087d170(pcVar2 + 4,uVar8);
          *(long *)(param_1 + 0x208) = lVar5;
          if (lVar5 != 0) {
            *(int *)(param_1 + 0x210) = (int)uVar8;
            goto LAB_1007f77bb;
          }
          uVar6 = 0x8f3;
          goto LAB_1007f78ec;
        }
        uVar6 = 0x9f;
        uVar7 = 0x8ed;
      }
      else {
        uVar6 = 0x149;
        uVar7 = 0x8e7;
      }
    }
    FUN_100887ce0(0x14,0x121,uVar6,"s3_clnt.c",uVar7);
    uVar6 = 0x32;
  }
  else {
    *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x3c4) = 1;
LAB_1007f77bb:
    pcVar1 = *(code **)(*(long *)(param_1 + 0x170) + 0x1e8);
    uVar4 = 1;
    if (pcVar1 == (code *)0x0) goto LAB_1007f7910;
    iVar3 = (*pcVar1)(param_1,*(undefined8 *)(*(long *)(param_1 + 0x170) + 0x1f0));
    if (iVar3 == 0) {
      FUN_100887ce0(0x14,0x121,0x148,"s3_clnt.c",0x8fd);
      uVar6 = 0x71;
    }
    else {
      if (-1 < iVar3) goto LAB_1007f7910;
      uVar6 = 0x902;
LAB_1007f78ec:
      FUN_100887ce0(0x14,0x121,0x41,"s3_clnt.c",uVar6);
      uVar6 = 0x50;
    }
  }
  FUN_1007fd650(param_1,2,uVar6);
  *(undefined4 *)(param_1 + 0x48) = 5;
  uVar4 = 0xffffffff;
LAB_1007f7910:
  return uVar4 & 0xffffffff;
}

