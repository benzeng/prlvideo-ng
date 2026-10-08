
void FUN_100106240(void)

{
  QArrayData *local_20;
  undefined1 local_12;
  
  local_20 = (QArrayData *)
             QString::fromAscii_helper
                       ("(:/Windows/|:/Windows/system/|:/Windows/system32/|/Parallels/Parallels Tools/)"
                        ,0x4e);
  QRegExp::QRegExp((QRegExp *)&DAT_102312088,&local_20,0,0);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_12 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_12) goto LAB_1001062a2;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_1001062a2:
  ___cxa_atexit(PTR__QRegExp_1021e1530,&DAT_102312088,0x100000000);
  return;
}

