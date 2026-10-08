
void FUN_100102210(undefined4 *param_1,char *param_2)

{
  uid_t uVar1;
  int *piVar2;
  long lVar3;
  undefined4 *puVar4;
  
  piVar2 = ___error();
  *piVar2 = 0;
  uVar1 = _getuid();
  lVar3 = _getpwuid(uVar1);
  if (lVar3 == 0) {
    piVar2 = ___error();
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("PXAPPCORE","prl_client_app",1,"getpwuid() err %i",*piVar2);
    }
    puVar4 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar4 = 3;
LAB_100102335:
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar4,PTR_typeinfo_1021e1790,0);
  }
  switch(*param_1) {
  case 1:
    std::string::assign(param_2);
    break;
  case 2:
    std::string::assign(param_2);
    goto LAB_1001022fe;
  case 3:
  case 6:
    std::string::assign(param_2);
    break;
  case 4:
    std::string::assign(param_2);
    goto LAB_100102319;
  case 5:
    std::string::assign(param_2);
    std::string::append(param_2);
    goto LAB_100102319;
  case 7:
    std::string::assign(param_2);
LAB_1001022fe:
    std::string::append(param_2);
    std::string::append(param_2);
    goto LAB_100102319;
  default:
    puVar4 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar4 = 5;
    goto LAB_100102335;
  }
  std::string::append(param_2);
  std::string::append(param_2);
LAB_100102319:
  std::string::append(param_2);
  return;
}

