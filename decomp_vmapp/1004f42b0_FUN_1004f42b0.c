
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004f42b0(void)

{
  int *piVar1;
  QArrayData *local_28;
  undefined1 local_1c;
  undefined1 local_1b;
  
  DAT_1011cc838 = QString::fromAscii_helper("/.prl_rec",9);
  ___cxa_atexit(FUN_10002f530,&DAT_1011cc838,0x100000000);
  DAT_1011cc840 = (int *)QString::fromAscii_helper("/$RECYCLE.BIN",0xd);
  ___cxa_atexit(FUN_10002f530,&DAT_1011cc840,0x100000000);
  DAT_1011bc170 = DAT_1011cc840;
  if (1 < *DAT_1011cc840 + 1U) {
    LOCK();
    *DAT_1011cc840 = *DAT_1011cc840 + 1;
    UNLOCK();
  }
  QString::append((QString *)&DAT_1011bc170);
  ___cxa_atexit(FUN_10002f530,&DAT_1011bc170,0x100000000);
  DAT_1011bc178 = (int *)QString::fromAscii_helper("\\\\Mac\\Home",10);
  ___cxa_atexit(FUN_10002f530,&DAT_1011bc178,0x100000000);
  piVar1 = DAT_1011bc178;
  DAT_1011bc180 = DAT_1011bc178;
  if (1 < *DAT_1011bc178 + 1U) {
    LOCK();
    *DAT_1011bc178 = *DAT_1011bc178 + 1;
    local_1c = *piVar1 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_28,0xa3ad53);
  QString::append((QString *)&DAT_1011bc180);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1b = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1b) goto LAB_1004f440d;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1004f440d:
  ___cxa_atexit(FUN_10002f530,&DAT_1011bc180,0x100000000);
  _DAT_1011bc188 = QString::fromAscii_helper(".DS_Store",9);
  ___cxa_atexit(FUN_10002f530,&DAT_1011bc188,0x100000000);
  return;
}

