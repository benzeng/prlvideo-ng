
long FUN_100ad5f40(long param_1,bool param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  char cVar5;
  long *plVar6;
  ulong uVar7;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  
  uVar1 = *(uint *)(param_1 + 0x900);
  if ((ulong)uVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x908);
    uVar7 = 0;
    do {
      plVar6 = (long *)FUN_100adb590(param_1 + 0x100,*(undefined4 *)(lVar2 + uVar7 * 4));
      lVar3 = *plVar6;
      if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x18) & 0x40) == 0)) {
        local_48 = *(int *)(lVar3 + 0x28);
        iStack_44 = *(int *)(lVar3 + 0x2c);
        iStack_40 = *(int *)(lVar3 + 0x30) + -1;
        iStack_3c = *(int *)(lVar3 + 0x34) + -1;
        if (((*(byte *)(lVar3 + 0x1a) & 0x10) != 0) && (*(int *)(lVar3 + 0x70) == 1)) {
          piVar4 = *(int **)(lVar3 + 0x68);
          iStack_3c = iStack_44 + -1;
          iStack_40 = local_48 + -1;
          local_48 = local_48 + *piVar4;
          iStack_44 = iStack_44 + piVar4[1];
          iStack_40 = iStack_40 + piVar4[2];
          iStack_3c = iStack_3c + piVar4[3];
        }
        cVar5 = QRect::contains((QPoint *)&local_48,param_2);
        if (cVar5 != '\0') {
          return lVar3;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar1);
  }
  return 0;
}

