
void FUN_10049c330(undefined8 param_1,QArrayData *param_2)

{
  QArrayData *pQVar1;
  long lVar2;
  
  lVar2 = (long)*(int *)(param_2 + 4) << 6;
  if (lVar2 != 0) {
    pQVar1 = param_2 + *(long *)(param_2 + 0x10);
    do {
      std::string::~string((string *)(pQVar1 + 0x28));
      std::string::~string((string *)(pQVar1 + 8));
      lVar2 = lVar2 + -0x40;
      pQVar1 = pQVar1 + 0x40;
    } while (lVar2 != 0);
  }
  QArrayData::deallocate(param_2,0x40,8);
  return;
}

