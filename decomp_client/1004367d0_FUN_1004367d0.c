
void FUN_1004367d0(void)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getVmSharedProfile();
  QAbstractButton::isChecked();
  CVmSharedProfile::setUseDesktop(bVar1);
  QAbstractButton::isChecked();
  CVmSharedProfile::setUseDocuments(bVar1);
  QAbstractButton::isChecked();
  CVmSharedProfile::setUsePictures(bVar1);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  uVar3 = CVmCommonOptions::getOsVersion();
  if (uVar3 - 0x809 < 8) {
LAB_100436890:
    QAbstractButton::isChecked();
    CVmSharedProfile::setUseMovies(bVar1);
  }
  else {
    uVar4 = (uVar3 >> 8) - 9;
    if (uVar4 < 8) {
      bVar2 = 0xc1U >> ((byte)uVar4 & 0x1f) & 1;
    }
    else {
      bVar2 = 0;
    }
    if ((uVar3 - 0x807 < 2) || (bVar2 != 0)) goto LAB_100436890;
  }
  if (uVar3 - 0x809 < 8) {
LAB_1004368c5:
    QAbstractButton::isChecked();
    CVmSharedProfile::setUseDownloads(bVar1);
LAB_1004368e2:
    if ((uVar3 < 0x807) || (uVar3 >> 8 != 8)) goto LAB_1004368ef;
  }
  else {
    uVar4 = (uVar3 >> 8) - 9;
    if (7 < uVar4) goto LAB_1004368e2;
    if ((0xc1U >> (uVar4 & 0x1f) & 1) != 0) goto LAB_1004368c5;
LAB_1004368ef:
    uVar4 = (uVar3 >> 8) - 9;
    if ((7 < uVar4) || ((0xc1U >> (uVar4 & 0x1f) & 1) == 0)) goto LAB_100436919;
  }
  QAbstractButton::isChecked();
  CVmSharedProfile::setUseMusic(bVar1);
LAB_100436919:
  if ((0x805 < uVar3) && ((uVar3 & 0xffffff00) == 0x800)) {
    QAbstractButton::isChecked();
    CVmSharedProfile::setUseTrashBin(bVar1);
  }
  QDialog::accept();
  return;
}

