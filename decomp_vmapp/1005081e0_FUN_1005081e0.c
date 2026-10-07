
undefined1 FUN_1005081e0(undefined8 *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  QImage *this;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  char *local_98;
  QImage local_90 [32];
  QImage local_70 [32];
  undefined1 local_50 [32];
  
  iVar4 = FUN_10078cf30(local_50);
  local_98 = (char *)0x0;
  piVar9 = (int *)0x0;
  piVar8 = (int *)0x0;
  while (iVar4 != -7) {
    if (iVar4 != 0) {
      return 0;
    }
    piVar6 = (int *)FUN_10078d0a0(local_50);
    uVar5 = FUN_10078d0c0(local_50);
    iVar4 = FUN_10078d0d0(local_50);
    piVar7 = piVar6;
    pcVar2 = (char *)(ulong)uVar5;
    if (((iVar4 != 0x2016) && (piVar7 = piVar8, pcVar2 = local_98, iVar4 == 0x2015)) &&
       (0x3f < uVar5)) {
      piVar9 = piVar6;
    }
    local_98 = pcVar2;
    iVar4 = FUN_10078d020(local_50);
    piVar8 = piVar7;
  }
  uVar3 = 0;
  if ((piVar8 != (int *)0x0) && (piVar9 != (int *)0x0)) {
    if (piVar9[2] == 0) {
      if ((uint)local_98 < (uint)(*piVar9 * piVar9[1] * 4)) {
        return 0;
      }
      uVar1 = *param_1;
      QImage::QImage(local_70,piVar8,*piVar9,piVar9[1],6,0,0);
      uVar3 = FUN_100508640(uVar1,local_70);
      this = local_70;
    }
    else {
      uVar1 = *param_1;
      QImage::fromData((uchar *)local_90,(int)piVar8,local_98);
      uVar3 = FUN_100508640(uVar1,local_90);
      this = local_90;
    }
    QImage::~QImage(this);
  }
  return uVar3;
}

