
void FUN_10037b370(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  
  *(undefined1 *)(param_1 + 0x40) = 0;
  if ((((*(long *)(param_1 + 0x30) != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) &&
      (*(long *)(param_1 + 0x38) != 0)) &&
     ((lVar2 = FUN_100323e00(), lVar2 != 0 && ((*(byte *)(param_2 + 0x38) & 7) != 0)))) {
    if (2 < DAT_10230ffd0) {
      dVar6 = *(double *)(param_2 + 0x18);
      if (0.0 <= dVar6) {
        iVar4 = (int)(dVar6 + DAT_100e110f0);
      }
      else {
        iVar4 = (int)((dVar6 - (double)(int)(DAT_100e110e0 + dVar6)) + DAT_100e110f0) +
                (int)(DAT_100e110e0 + dVar6);
      }
      dVar6 = *(double *)(param_2 + 0x20);
      if (0.0 <= dVar6) {
        iVar5 = (int)(dVar6 + DAT_100e110f0);
      }
      else {
        iVar5 = (int)((dVar6 - (double)(int)(DAT_100e110e0 + dVar6)) + DAT_100e110f0) +
                (int)(DAT_100e110e0 + dVar6);
      }
      FUN_100df99c0("","prl_client_app",3,"[dnd] ::dropEvent (%d, %d)",iVar4,iVar5);
    }
    dVar6 = *(double *)(param_2 + 0x18);
    if (0.0 <= dVar6) {
      iVar4 = (int)(dVar6 + DAT_100e110f0);
    }
    else {
      iVar4 = (int)((dVar6 - (double)(int)(DAT_100e110e0 + dVar6)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + dVar6);
    }
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x38);
    }
    dVar6 = (double)FUN_1003277b0(uVar3);
    dVar6 = (double)iVar4 * dVar6;
    if (0.0 <= dVar6) {
      iVar4 = (int)(dVar6 + DAT_100e110f0);
    }
    else {
      iVar4 = (int)((dVar6 - (double)(int)(DAT_100e110e0 + dVar6)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + dVar6);
    }
    dVar6 = *(double *)(param_2 + 0x20);
    if (0.0 <= dVar6) {
      iVar5 = (int)(dVar6 + DAT_100e110f0);
    }
    else {
      iVar5 = (int)((dVar6 - (double)(int)(DAT_100e110e0 + dVar6)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + dVar6);
    }
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x38);
    }
    dVar6 = (double)FUN_1003277b0(uVar3);
    dVar6 = (double)iVar5 * dVar6;
    if (0.0 <= dVar6) {
      iVar5 = (int)(dVar6 + DAT_100e110f0);
    }
    else {
      iVar5 = (int)((dVar6 - (double)(int)(DAT_100e110e0 + dVar6)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + dVar6);
    }
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
      uVar3 = 0;
      if (*(long *)(param_1 + 0x38) != 0) {
        uVar3 = FUN_100323e00(*(long *)(param_1 + 0x38));
      }
    }
    uVar3 = FUN_100319ca0(uVar3);
    cVar1 = FUN_1003345b0(uVar3,*(undefined8 *)(param_2 + 0x40),iVar4,iVar5);
    if (cVar1 != '\0') {
      *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_2 + 0x38);
      *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) | 4;
      return;
    }
  }
  *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) & 0xfb;
  return;
}

