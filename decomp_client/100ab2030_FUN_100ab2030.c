
void FUN_100ab2030(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 local_70 [64];
  
  plVar1 = param_1 + 4;
  uVar5 = 0xffffffffffffffff;
LAB_100ab206f:
  do {
    uVar6 = uVar5 & 0xffffffff;
    if (86399999 < (long)uVar5) {
      uVar6 = 86400000;
    }
    FUN_100aaf630(param_1 + 5,uVar6);
    FUN_100aafe50(local_70,param_1[2] + 200);
    while (lVar2 = param_1[3], lVar2 != 0) {
      lVar4 = FUN_100ab4920();
      if (lVar4 < *(long *)(lVar2 + 0x30)) {
        uVar5 = FUN_100ab4930(lVar2 + 0x30,lVar4);
        if (uVar5 != 0) {
          FUN_100aafde0(local_70);
          goto LAB_100ab206f;
        }
      }
      lVar4 = *(long *)(lVar2 + 0x28);
      if (lVar4 != 0) {
        *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
      }
      **(long **)(lVar2 + 0x20) = lVar4;
      uVar3 = 3;
      if (0 < *(int *)(lVar2 + 0x38)) {
        uVar3 = 5;
      }
      *(undefined4 *)(lVar2 + 0x3c) = uVar3;
      lVar4 = *plVar1;
      *(long *)(lVar2 + 0x28) = lVar4;
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x20) = lVar2 + 0x28;
      }
      *(long **)(lVar2 + 0x20) = plVar1;
      param_1[4] = lVar2;
      FUN_100ab0dd0(param_1[2],lVar2);
    }
    if (*plVar1 == 0) {
      *(undefined8 *)(param_1[2] + 0xc0) = 0;
      FUN_100aafde0(local_70);
      (**(code **)(*param_1 + 8))(param_1);
      return;
    }
    FUN_100aafde0(local_70);
    uVar5 = 0xffffffffffffffff;
  } while( true );
}

