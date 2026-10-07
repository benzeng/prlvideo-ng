
void FUN_100889150(int param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 *puVar3;
  size_t sVar4;
  undefined1 *puVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int local_3c;
  undefined1 *local_38;
  
  local_38 = (undefined1 *)FUN_10081ddd0(0x51,"err.c",0x441);
  if (local_38 != (undefined1 *)0x0) {
    *local_38 = 0;
    if (0 < param_1) {
      local_3c = 0x50;
      iVar9 = 0;
      iVar7 = 0;
      do {
        iVar1 = *param_2;
        if ((ulong)(long)iVar1 < 0x29) {
          puVar3 = (undefined8 *)((long)iVar1 + *(long *)(param_2 + 4));
          *param_2 = iVar1 + 8;
        }
        else {
          puVar3 = *(undefined8 **)(param_2 + 2);
          *(undefined8 **)(param_2 + 2) = puVar3 + 1;
        }
        pcVar2 = (char *)*puVar3;
        if (pcVar2 != (char *)0x0) {
          sVar4 = _strlen(pcVar2);
          iVar7 = (int)sVar4 + iVar7;
          if (local_3c < iVar7) {
            puVar5 = (undefined1 *)FUN_10081df30(local_38,iVar7 + 0x15,"err.c",0x44e);
            if (puVar5 == (undefined1 *)0x0) {
              FUN_10081e1a0(local_38);
              return;
            }
            local_3c = iVar7 + 0x14;
            local_38 = puVar5;
          }
          FUN_10087d250(local_38,pcVar2,(long)local_3c + 1);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < param_1);
    }
    lVar6 = FUN_100887e00();
    lVar8 = 0xf;
    if ((long)*(int *)(lVar6 + 0x250) != 0) {
      lVar8 = (long)*(int *)(lVar6 + 0x250);
    }
    if ((*(long *)(lVar6 + 0xd0 + lVar8 * 8) != 0) &&
       ((*(byte *)(lVar6 + 0x150 + lVar8 * 4) & 1) != 0)) {
      FUN_10081e1a0();
      *(undefined8 *)(lVar6 + 0xd0 + lVar8 * 8) = 0;
    }
    *(undefined1 **)(lVar6 + 0xd0 + lVar8 * 8) = local_38;
    *(undefined4 *)(lVar6 + 0x150 + lVar8 * 4) = 3;
  }
  return;
}

