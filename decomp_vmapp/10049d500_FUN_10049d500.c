
void FUN_10049d500(long param_1)

{
  string *this;
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  while (lVar2 != lVar1) {
    this = *(string **)(lVar2 + -8);
    if (this != (string *)0x0) {
      FUN_10000c730(this + 0x18);
      std::string::~string(this);
      operator_delete(this);
      lVar1 = *(long *)(param_1 + 8);
      lVar2 = *(long *)(param_1 + 0x10);
    }
    lVar2 = lVar2 + -8;
    *(long *)(param_1 + 0x10) = lVar2;
  }
  return;
}

