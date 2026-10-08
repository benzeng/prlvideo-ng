
undefined8 FUN_100bd9b90(long param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined1 local_24 [4];
  
  if ((*(long *)(param_1 + 0x220) != 0) && (*(long *)(param_1 + 0x218) != 0)) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x130) + 0x128);
    if ((lVar6 != 0) &&
       ((uVar1 = *(ulong *)(*(long *)(param_1 + 0x130) + 0x120), uVar1 != 0 &&
        (lVar2 = *(long *)(*(long *)(param_1 + 0x80) + 0x3a8), uVar8 = 0,
        (*(ulong *)(lVar2 + 0x20) & 0x40) != 0 || (*(ulong *)(lVar2 + 0x18) & 0xe0) != 0)))) {
      while (*(char *)(lVar6 + uVar8) != '\0') {
        uVar8 = uVar8 + 1;
        if (uVar1 <= uVar8) {
          FUN_100c62ee0(0x14,0x118,0x9d,"t1_lib.c",0x7f8);
          return 0xffffffff;
        }
      }
    }
  }
  lVar6 = *(long *)(param_1 + 0x170);
  if ((lVar6 == 0) || (pcVar5 = *(code **)(lVar6 + 0x1a0), pcVar5 == (code *)0x0)) {
    lVar6 = *(long *)(param_1 + 0x270);
    iVar3 = 0;
    if ((lVar6 != 0) && (pcVar5 = *(code **)(lVar6 + 0x1a0), pcVar5 != (code *)0x0))
    goto LAB_100bd9c7d;
  }
  else {
LAB_100bd9c7d:
    iVar3 = (*pcVar5)(param_1,local_24,*(undefined8 *)(lVar6 + 0x1a8));
  }
  FUN_100bf3910(*(undefined8 *)(param_1 + 0x208));
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
  if ((((*(int *)(param_1 + 0x1ec) != -1) && (*(int *)(param_1 + 0x1f0) == 0)) &&
      (*(int *)(param_1 + 0xa8) == 0)) &&
     ((lVar6 = *(long *)(param_1 + 0x170), lVar6 != 0 && (*(code **)(lVar6 + 0x1e8) != (code *)0x0))
     )) {
    iVar4 = (**(code **)(lVar6 + 0x1e8))(param_1,*(undefined8 *)(lVar6 + 0x1f0));
    if (iVar4 == 0) {
      uVar7 = 0x71;
      goto LAB_100bd9d35;
    }
    if (iVar4 < 0) {
      uVar7 = 0x50;
      goto LAB_100bd9d35;
    }
  }
  if (iVar3 == 1) {
    FUN_100bd2dc0(param_1,1,0x70);
    return 1;
  }
  if (iVar3 == 3) {
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    return 1;
  }
  if (iVar3 != 2) {
    return 1;
  }
  uVar7 = 0x70;
LAB_100bd9d35:
  FUN_100bd2dc0(param_1,2,uVar7);
  return 0xffffffff;
}

