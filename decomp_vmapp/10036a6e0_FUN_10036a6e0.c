
void FUN_10036a6e0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  int local_6c;
  
  (*DAT_1011c5770)(*param_1);
  uVar5 = param_1[7];
  if (uVar5 != 0) {
    local_6c = 0;
    uVar4 = 0;
    do {
      if ((uVar5 & 1) != 0) {
        iVar2 = param_1[uVar4 * 8 + 9];
        iVar1 = param_1[uVar4 * 8 + 10];
        if (local_6c != iVar2) {
          (*DAT_1011c5708)(0x8892,iVar2);
          local_6c = iVar2;
        }
        iVar2 = param_1[uVar4 * 8 + 0xc];
        if ((*(char *)(DAT_1011c8478 + 0x31) == '\0') || (iVar2 != 0x8368)) {
          if ((iVar2 != 0x1406) && (iVar2 != 0x140b)) goto LAB_10036a7b0;
LAB_10036a7b8:
          (*DAT_1011c72b0)(uVar4,param_1[uVar4 * 8 + 0xd],iVar2,
                           *(undefined1 *)(param_1 + uVar4 * 8 + 0xe),param_1[uVar4 * 8 + 0xb]);
        }
        else {
          param_1[uVar4 * 8 + 0xc] = 0x1405;
          *(undefined8 *)(param_1 + uVar4 * 8 + 0xd) = 1;
          iVar2 = 0x1405;
LAB_10036a7b0:
          if (param_1[uVar4 * 8 + 0xe] != 0) goto LAB_10036a7b8;
          (*DAT_1011c7840)(uVar4,param_1[uVar4 * 8 + 0xd],iVar2,param_1[uVar4 * 8 + 0xb],(long)iVar1
                          );
        }
        (*DAT_1011c7200)(uVar4,param_1[uVar4 * 8 + 0xf]);
        (*DAT_1011c5c90)(uVar4);
      }
      uVar4 = (ulong)((int)uVar4 + 1);
      uVar5 = uVar5 >> 1;
    } while (uVar5 != 0);
  }
  uVar5 = param_1[8];
  if (uVar5 != 0) {
    uVar3 = 0;
    do {
      if ((uVar5 & 1) != 0) {
        (*DAT_1011c5bd8)(uVar3);
        (*DAT_1011c7180)(0,0,0,DAT_100b39678,uVar3);
        uVar4 = (ulong)uVar3;
        *(undefined8 *)(param_1 + uVar4 * 8 + 0xf) = 0;
        *(undefined8 *)(param_1 + uVar4 * 8 + 0xd) = 0;
        *(undefined8 *)(param_1 + uVar4 * 8 + 0xb) = 0;
        *(undefined8 *)(param_1 + uVar4 * 8 + 9) = 0;
      }
      uVar3 = uVar3 + 1;
      uVar5 = uVar5 >> 1;
    } while (uVar5 != 0);
  }
  if ((param_1[0x89] != 0) && ((param_1[0x8c] != 0 || (param_1[0x8b] != 0)))) {
    (*DAT_1011c78b0)(0x8e22);
  }
  for (uVar5 = param_1[0x8c]; uVar5 != 0; uVar5 = uVar5 & ~(1 << ((byte)uVar3 & 0x1f))) {
    uVar3 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    if (uVar5 == 0) {
      uVar3 = 0xffffffff;
    }
    (*DAT_1011c74b0)(0x8c8e,uVar3,0);
    *(undefined8 *)(param_1 + (ulong)uVar3 * 4 + 0x8f) = 0;
    *(undefined8 *)(param_1 + (ulong)uVar3 * 4 + 0x8d) = 0;
  }
  for (uVar5 = param_1[0x8b]; uVar5 != 0; uVar5 = uVar5 & ~(1 << ((byte)uVar4 & 0x1f))) {
    uVar3 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    uVar4 = (ulong)uVar3;
    if (uVar5 == 0) {
      uVar4 = 0xffffffff;
    }
    (*DAT_1011c74b8)(0x8c8e,uVar4,param_1[uVar4 * 4 + 0x8e],param_1[uVar4 * 4 + 0x8f],
                     param_1[uVar4 * 4 + 0x90]);
  }
  if (((param_1[0x89] != 0) && (param_1[0x8c] != 0)) && (param_1[0x8a] == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010036a9ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c78b0)(0x8e22,0);
    return;
  }
  return;
}

