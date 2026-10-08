
uint FUN_10019c9f0(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = CProblemReport::getReportType();
  uVar2 = iVar1 - 1;
  if (uVar2 < 0x10) {
    return CONCAT31((int3)(uVar2 >> 8),(char)(0x8083 >> ((byte)uVar2 & 0x1f))) & 0xffffff01;
  }
  return 0;
}

