
void FUN_100557a60(long param_1,int param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_100555d40(param_1);
      return;
    case 1:
      FUN_1005562b0(param_1);
      return;
    case 2:
switchD_100557a82_caseD_2:
      FUN_100556510(param_1);
      return;
    case 3:
      FUN_100554d00(param_1);
      return;
    case 4:
      lVar1 = FUN_100552190(param_1 + 0x20,*(undefined8 *)(param_4 + 8));
      if ((lVar1 != 0) && (uVar2 = FUN_100714bb0(lVar1), (uVar2 & 8) == 0))
      goto switchD_100557a82_caseD_2;
      break;
    case 5:
      FUN_100556bf0(param_1,**(undefined4 **)(param_4 + 8));
      return;
    case 6:
      FUN_100556f30(param_1);
      return;
    case 7:
      FUN_10083d2c0(*(undefined8 *)(param_1 + 0x10));
      return;
    }
  }
  return;
}

