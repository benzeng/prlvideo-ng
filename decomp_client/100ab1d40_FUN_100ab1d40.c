
void FUN_100ab1d40(long param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_60 [64];
  
  iVar7 = 0x2000;
  if (param_2 < 0x2001) {
    iVar7 = param_2;
  }
  if (iVar7 < 1) {
    iVar3 = FUN_100ab04e0();
    iVar7 = 4;
    if (3 < iVar3) {
      iVar7 = iVar3;
    }
  }
  FUN_100aafe50(local_60,param_1 + 200);
  iVar3 = *(int *)(param_1 + 0xd4) - iVar7;
  if (iVar3 == 0 || *(int *)(param_1 + 0xd4) < iVar7) {
    uVar5 = (*(int *)(param_1 + 0xdc) + iVar7) - *(int *)(param_1 + 0xd8);
    uVar6 = (uint)*(undefined8 *)(param_1 + 0x38);
    if ((int)uVar6 <= (int)uVar5) {
      uVar5 = uVar6;
    }
    if (0 < (int)uVar5) {
      uVar4 = ((*(int *)(param_1 + 0xd8) + -1) - iVar7) - *(int *)(param_1 + 0xdc);
      uVar5 = ~uVar6;
      if ((int)~uVar6 <= (int)uVar4) {
        uVar5 = uVar4;
      }
      iVar3 = -uVar5;
      do {
        cVar2 = FUN_100ab10b0(param_1);
        if (cVar2 == '\0') break;
        iVar3 = iVar3 + -1;
      } while (1 < iVar3);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xe0);
    if (iVar1 != 0) {
      if (iVar1 <= iVar3) {
        iVar3 = iVar1;
      }
      FUN_100aaf7b0(param_1 + 0x40,iVar3);
    }
  }
  *(int *)(param_1 + 0xd4) = iVar7;
  FUN_100aafde0(local_60);
  return;
}

