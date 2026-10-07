
void FUN_1004bcf20(long *param_1,long param_2,uint param_3,uint param_4)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  bool bVar6;
  undefined8 local_68;
  uint local_5c [5];
  undefined8 local_48;
  undefined8 local_40;
  uint local_34;
  
  uVar4 = (*DAT_1011ccc38)();
  dVar1 = (double)param_1[0x48];
  uVar3 = _floor(SUB84((double)param_3 / dVar1,0));
  local_68 = _floor(SUB84((double)param_4 / dVar1,0));
  lVar5 = *(long *)(param_2 + 0x18);
  if ((param_3 == 0 || param_4 == 0) || (lVar5 != 0)) {
    if ((param_3 == 0 || param_4 == 0) && lVar5 != 0) {
      _CGLClearDrawable();
      FUN_1002ade20(*param_1,*(undefined8 *)(param_2 + 0x18));
      *(undefined8 *)(param_2 + 0x18) = 0;
      goto LAB_1004bd120;
    }
  }
  else {
    lVar5 = FUN_1002afad0(*param_1,1);
    *(long *)(param_2 + 0x18) = lVar5;
    if (lVar5 == 0) {
LAB_1004bd120:
      iVar2 = *(int *)(param_2 + 0xc);
      goto LAB_1004bd123;
    }
    local_34 = (uint)(*(int *)(*param_1 + 0x9838) != 0);
    _CGLSetParameter(lVar5,0xde,&local_34);
    lVar5 = *(long *)(param_2 + 0x18);
  }
  iVar2 = *(int *)(param_2 + 0xc);
  if (lVar5 != 0) {
    *(int *)(param_2 + 0x10) = iVar2;
    (*DAT_1011cccd8)(uVar4,*(undefined4 *)(param_2 + 8),param_2 + 0xc);
    local_5c[1] = 0;
    local_5c[2] = 0;
    local_5c[3] = 0;
    local_5c[4] = 0;
    local_40 = local_68;
    local_48 = uVar3;
    (*DAT_1011ccd00)(uVar4,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    (*DAT_1011cccf0)((int)param_1[0x48],uVar4,*(undefined4 *)(param_2 + 8),
                     *(undefined4 *)(param_2 + 0xc));
    _CGLClearDrawable(*(undefined8 *)(param_2 + 0x18));
    (*DAT_1011ccd28)(*(undefined8 *)(param_2 + 0x18),uVar4,*(undefined4 *)(param_2 + 8),
                     *(undefined4 *)(param_2 + 0xc));
    bVar6 = true;
    if ((*(byte *)(param_2 + 0x48) & 0x20) != 0) {
      bVar6 = *(long *)(param_2 + 0x70) == 0;
    }
    local_5c[0] = (uint)bVar6;
    _CGLSetParameter(*(undefined8 *)(param_2 + 0x18),0xec,local_5c);
    FUN_1002afc80(*param_1,*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 8),
                  *(undefined4 *)(param_2 + 0xc),param_3,param_4);
    return;
  }
LAB_1004bd123:
  if (iVar2 != 0) {
    (*DAT_1011ccce0)(uVar4,*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return;
}

