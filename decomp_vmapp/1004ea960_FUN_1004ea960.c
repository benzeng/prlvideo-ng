
void FUN_1004ea960(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined8 local_58;
  undefined8 local_50;
  QFileInfo local_48 [8];
  undefined8 local_40 [2];
  
  if (param_2 == 0) {
    uVar1 = ___cxa_allocate_exception(0x10);
    local_40[0] = QString::fromAscii_helper("invalid param - realSFolder is 0",0x20);
    FUN_1004eb830(uVar1,local_40);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar1,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
  }
  lVar3 = *(long *)(param_3 + 8);
  if (param_3 != lVar3) {
    do {
      QFileInfo::QFileInfo(local_48,(QString *)(lVar3 + 0x10));
      cVar2 = QFileInfo::exists();
      if (cVar2 == '\0') {
        uVar1 = ___cxa_allocate_exception(0x10);
        local_50 = QString::fromAscii_helper("file does not exist",0x13);
        FUN_1004eb830(uVar1,&local_50);
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(uVar1,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
      }
      cVar2 = QFileInfo::isDir();
      if (cVar2 == '\0') {
        cVar2 = QFileInfo::isFile();
        if (cVar2 == '\0') {
          uVar1 = ___cxa_allocate_exception(0x10);
          local_58 = QString::fromAscii_helper("unknown fs object",0x11);
          FUN_1004eb830(uVar1,&local_58);
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(uVar1,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
        }
        if (*(char *)(lVar3 + 0x28) == '\0') {
          FUN_1004e9f70();
        }
      }
      else if (*(char *)(lVar3 + 0x28) != '\0') {
        FUN_1004e9da0();
      }
      QFileInfo::~QFileInfo(local_48);
      lVar3 = *(long *)(lVar3 + 8);
    } while (param_3 != lVar3);
  }
  return;
}

