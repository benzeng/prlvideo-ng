
bool FUN_100ad8d70(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  
  bVar7 = *(char *)(param_1 + 0xad1) != '\0';
  if (bVar7) {
    *(undefined1 *)(param_1 + 0xad1) = 0;
  }
  bVar7 = !bVar7;
  lVar6 = param_1 + 0x100;
  plVar4 = (long *)FUN_100adb590(lVar6,param_2);
  lVar1 = *plVar4;
  if (lVar1 == 0) {
    return false;
  }
  lVar5 = FUN_100adc640(lVar6,param_2);
  plVar4 = (long *)FUN_100adb590(lVar6,*(undefined4 *)(param_1 + 0x910));
  lVar2 = *plVar4;
  if (lVar2 == 0) {
    if ((*(byte *)(lVar1 + 0x19) & 0x80) == 0) {
      if ((*(char *)(param_1 + 0x91c) != '\0') && (*(int *)(param_1 + 0x914) == param_2)) {
        FUN_100adbaf0(lVar6,param_2,0);
        FUN_100ad8d70(param_1,param_2);
        return false;
      }
LAB_100ad8e67:
      *(undefined1 *)(param_1 + 0xaa6) = 1;
      return false;
    }
    bVar7 = false;
  }
  else {
    lVar6 = FUN_100adc640(lVar6,*(undefined4 *)(lVar2 + 8));
    if (lVar5 == 0) {
      return false;
    }
    if (lVar6 == 0) {
      return false;
    }
    if (lVar5 == lVar6) {
      if ((*(byte *)(lVar2 + 0x18) & 1) != 0) {
        return false;
      }
    }
    else {
      if ((*(byte *)(lVar1 + 0x19) & 0x80) == 0) goto LAB_100ad8e67;
      bVar7 = false;
    }
  }
  FUN_100adca00(*(undefined8 *)(param_1 + 0x9b8),*(undefined4 *)(lVar5 + 8),1);
  if ((*(ushort *)(lVar1 + 0x18) & 0x4010) == 0) {
    if (*(int *)(lVar1 + 0x30) - *(int *)(lVar1 + 0x28) < 0x10) {
      bVar3 = false;
    }
    else {
      bVar3 = 0xf < *(int *)(lVar1 + 0x34) - *(int *)(lVar1 + 0x2c);
    }
  }
  else {
    bVar3 = false;
  }
  FUN_100ae31d0(param_1,*(undefined4 *)(lVar1 + 8),*(undefined4 *)(lVar1 + 0x10),bVar3);
  return bVar7;
}

