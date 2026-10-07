
void FUN_100516540(undefined8 *param_1,char *param_2,int param_3,int param_4)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_100bc4778;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  if (param_2 != (char *)0x0) {
    if (param_4 != 0) {
      sVar3 = _strlen(param_2);
      do {
        iVar2 = (int)sVar3;
        sVar3 = (size_t)iVar2;
        lVar4 = (long)(iVar2 + -1) + 1;
        do {
          if ((long)sVar3 < 1) goto LAB_1005165d7;
          lVar1 = lVar4 + -1;
          sVar3 = sVar3 - 1;
          lVar4 = lVar4 + -1;
        } while ((param_2[lVar1] != '/') && (param_2[lVar1] != '\\'));
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
LAB_1005165d7:
    std::string::assign((char *)(param_1 + 1));
  }
  if (0 < param_3) {
    *(int *)(param_1 + 4) = param_3;
  }
  return;
}

