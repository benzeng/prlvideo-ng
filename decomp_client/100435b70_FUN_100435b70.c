
void FUN_100435b70(long param_1)

{
  undefined8 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharedProfile();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28);
  CVmSharedProfile::isUseDesktop();
  QAbstractButton::setChecked(SUB81(uVar1,0));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x38);
  CVmSharedProfile::isUseDocuments();
  QAbstractButton::setChecked(SUB81(uVar1,0));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x48);
  CVmSharedProfile::isUsePictures();
  QAbstractButton::setChecked(SUB81(uVar1,0));
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  uVar3 = CVmCommonOptions::getOsVersion();
  if (uVar3 - 0x809 < 8) {
LAB_100435c3e:
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x40);
    CVmSharedProfile::isUseMovies();
    QAbstractButton::setChecked(SUB81(uVar1,0));
  }
  else {
    uVar4 = (uVar3 >> 8) - 9;
    if (uVar4 < 8) {
      bVar2 = 0xc1U >> ((byte)uVar4 & 0x1f) & 1;
    }
    else {
      bVar2 = 0;
    }
    if ((uVar3 - 0x807 < 2) || (bVar2 != 0)) goto LAB_100435c3e;
  }
  if (uVar3 - 0x809 < 8) {
LAB_100435c76:
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x50);
    CVmSharedProfile::isUseDownloads();
    QAbstractButton::setChecked(SUB81(uVar1,0));
LAB_100435c96:
    if ((uVar3 < 0x807) || (uVar3 >> 8 != 8)) goto LAB_100435ca3;
  }
  else {
    uVar4 = (uVar3 >> 8) - 9;
    if (7 < uVar4) goto LAB_100435c96;
    if ((0xc1U >> (uVar4 & 0x1f) & 1) != 0) goto LAB_100435c76;
LAB_100435ca3:
    uVar4 = (uVar3 >> 8) - 9;
    if ((7 < uVar4) || ((0xc1U >> (uVar4 & 0x1f) & 1) == 0)) goto LAB_100435cd0;
  }
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x30);
  CVmSharedProfile::isUseMusic();
  QAbstractButton::setChecked(SUB81(uVar1,0));
LAB_100435cd0:
  if ((0x805 < uVar3) && ((uVar3 & 0xffffff00) == 0x800)) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x78);
    CVmSharedProfile::isUseTrashBin();
    QAbstractButton::setChecked(SUB81(uVar1,0));
  }
  FUN_100436390(param_1);
  return;
}

