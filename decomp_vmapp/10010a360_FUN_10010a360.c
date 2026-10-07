
void FUN_10010a360(char param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = *param_2;
  if (cVar2 != '\0') {
    bVar1 = true;
    do {
      param_2 = param_2 + 1;
      if ('\0' < cVar2) {
        iVar3 = FUN_10010b400((int)cVar2);
        if (iVar3 == 0) {
          if (!bVar1) {
            std::string::push_back(param_1);
          }
        }
        else {
          std::string::push_back(param_1);
          bVar1 = false;
        }
      }
      cVar2 = *param_2;
    } while (cVar2 != '\0');
    if (!bVar1) {
      return;
    }
  }
  std::string::push_back(param_1);
  return;
}

