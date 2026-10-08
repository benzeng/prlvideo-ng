
void FUN_100be6330(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  time_t tVar4;
  long lVar5;
  
  if (*(int *)(*(long *)(param_1 + 0x130) + 0x44) == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x270);
  uVar1 = *(uint *)(lVar5 + 0x40);
  if (((uVar1 & param_2) != 0) && (*(int *)(param_1 + 0xa8) == 0)) {
    if ((uVar1 & 0x200) == 0) {
      iVar2 = FUN_100be9720();
      if (iVar2 == 0) goto LAB_100be63ed;
      lVar5 = *(long *)(param_1 + 0x270);
    }
    if (*(long *)(lVar5 + 0x50) != 0) {
      FUN_100bf2cf0(*(long *)(param_1 + 0x130) + 0xc0,1,0xe,"ssl_lib.c",0x982);
      iVar2 = (**(code **)(*(long *)(param_1 + 0x270) + 0x50))
                        (param_1,*(undefined8 *)(param_1 + 0x130));
      if (iVar2 == 0) {
        FUN_100be8ab0();
      }
    }
  }
LAB_100be63ed:
  if (((uVar1 & 0x80) == 0) && ((uVar1 & param_2) == param_2)) {
    lVar5 = *(long *)(param_1 + 0x270);
    pcVar3 = (char *)(lVar5 + 0x70);
    if ((param_2 & 1) == 0) {
      pcVar3 = (char *)(lVar5 + 0x7c);
    }
    if (*pcVar3 == -1) {
      tVar4 = _time((time_t *)0x0);
      FUN_100be9e60(lVar5,tVar4);
      return;
    }
  }
  return;
}

